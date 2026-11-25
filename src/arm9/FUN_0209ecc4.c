// FUN_0209ecc4 @ 0x0209ecc4 (0x2c, thumb) - ported from FUN_020401a8 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_0209ecc4 - Thumb. Recorded 0x2c; true body 0x2c (exact).
 *
 * Lazy one-shot "apply the keyboard/mapping preset to this object if the
 * table is unpopulated" routine.
 *
 * 020401a8  b5f0       push {r3, r4, r5, lr}
 * 020401aa  051c       adds r5, r0, #0        ; r5 = self (live across 3 calls)
 * 020401ac  aa68       ldr  r2, [r5, #8]      ; r2 = self->f8
 * 020401ae  0c1c       adds r4, r1, #0        ; r4 = arg1 (live across calls)
 * 020401b0  002a       cmp  r2, #0
 * 020401b2  0ed1       bne  0x209ecee        ; already populated -> done
 * 020401b4  00f070f9   bl   0x02040498        ; r0 = A(r0 = self, r1 = arg1)
 * 020401b8  0028       cmp  r0, #0
 * 020401ba  0ad0       beq  0x209ecee
 * 020401bc  281c       adds r0, r5, #0        ; r0 = self again for the callee
 * 020401be  00f039f9   bl   0x02040434        ; r0 = B(self) -> slot 0..3
 * 020401c2  0328       cmp  r0, #3
 * 020401c4  05d2       bhs  0x209ecee        ; slot >= 3 -> done (UNSIGNED)
 * 020401c6  0c35       adds r5, #0xc          ; r5 = &self->arr[0]  (base +0xc)
 * 020401c8  8000       lsls r0, r0, #2        ; slot * 4
 * 020401ca  2818       adds r0, r5, r0        ; &self->arr[slot]
 * 020401cc  211c       adds r1, r4, #0        ; r1 = arg1
 * 020401ce  00f001f8   bl   0x020401d4        ; C(dst, arg1)
 * 0209ecee  38bd       pop  {r3, r4, r5, pc}
 *
 * Semantics: `if (self->f8 != 0) return; if (!A(self, arg1)) return;
 * slot = B(self); if (slot < 3) C(&self->arr[slot], arg1);`
 * (`slot < 3` is bhs = UNSIGNED, so slot is u32; `self->f8 != 0` is a plain
 *  cmp.)
 *
 * Note the array element stride is 4 and the base displacement is 0xc, so
 * self->f8 at +8 is a u32 flag and self+0xc starts the u32 array -- one
 * address expression, hence ONE `adds r5,#0xc` + `lsls/adds` pair (the skill's
 * "one pool slot feeds two loads" / byte-arithmetic rule).
 *
 * Arities read from the callees' OWN bodies (C8):
 *   FUN_0209efc8 - `adds r4,r1,#0 / adds r5,r0,#0` then calls 02040218 with
 *     r0 = r1 (its arg1): it takes TWO args (self, arg1).
 *   FUN_0209ef64 - `movs r1,#0xe` + `ldrsh r2,[r2,r1]` where r2 = r0+slot*4:
 *     reads self at +0xe, takes ONE arg (self), returns a 0..3 slot.
 *   FUN_0209ecf0 - `movs r2,#0 / ldrsh r2,[r1,r2] / strh r2,[r0]` then the
 *     same at +2: copies TWO s16 from src to dst. TWO pointer args.
 */
typedef unsigned int u32;
typedef signed short s16;

extern u32 FUN_0209efc8(void *self, void *arg1);
extern u32 FUN_0209ef64(void *self);
extern void FUN_0209ecf0(void *dst, void *src);

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;      /* populated flag */
    u32 arr[4];  /* +0xc */
} Rec401;

void FUN_0209ecc4(Rec401 *self, void *arg1)
{
    u32 slot;

    if (self->f8 != 0) {
        return;
    }
    if (FUN_0209efc8(self, arg1) == 0) {
        return;
    }
    slot = FUN_0209ef64(self);
    if (slot < 3) {
        FUN_0209ecf0(&self->arr[slot], arg1);
    }
}
