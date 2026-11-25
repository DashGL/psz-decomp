// FUN_0204bb2c @ 0x0204bb2c (0x5e, thumb) - ported from FUN_02064af8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s -nointerworking
/* FUN_0204bb2c @ 0x02064af8 (0x5e, Thumb) — MATCHED dsi/1.1.
 * Tick down five entity slots. Require flags+0xe4 bit 26, unsigned +0xac
 * <=1 and nonzero base+0x30. For i=0..4 reload flags, skip bit i+6, resolve
 * slot via 0204225c(base,i); skip null or 02046bb8(slot)>0. Otherwise pass
 * 02046bc8(slot)-1 to the guarded counter writer 02046b94(slot,value).
 * Struct offsets and callee argument flow are grounded in the machine body.
 * Complete executable extent is 0x5e: pop at 0204bb88; two-byte padding at
 * 02064b56 precedes the next function. All four direct Thumb calls verify.
 * -O4,s -nointerworking resolves the prior saved-register rotation exactly:
 * i=r4, entity=r5, base=r6, slot=r7. Volatile loop flags keep the reload.
 * Nineteen compiler builds match. The flag is per-unit matching evidence,
 * not a claim about the original project-wide compiler configuration.
 * Fresh listing, exact bytes and relocation verification: scratch/goal80h,
 * 2026-10-20. No emulator playtest. SDK backends remain external.
 */
typedef int s32;
typedef unsigned int u32;

struct E {
    char pad0[0x30];
    s32 base;
    char pad1[0xac - 0x34];
    u32 ac;
    char pad2[0xe4 - 0xb0];
    u32 flags;
};

extern s32 FUN_0204225c(s32 base, s32 idx);
extern s32 FUN_02046bb8(s32 slot);
extern s32 FUN_02046bc8(s32 slot);
extern s32 FUN_02046b94(s32 slot, s32 val);

void FUN_0204bb2c(struct E *ent)
{
    s32 i, base, h;
    if ((ent->flags & 0x04000000) == 0) {
        return;
    }
    if (ent->ac > 1) {
        return;
    }
    base = ent->base;
    if (base == 0) {
        return;
    }
    for (i = 0; i < 5; i++) {
        if (*(volatile u32 *)((char *)ent + 0xe4) & (1u << (i + 6))) {
            continue;
        }
        h = FUN_0204225c(base, i);
        if (h == 0) {
            continue;
        }
        if (FUN_02046bb8(h) > 0) {
            continue;
        }
        FUN_02046b94(h, FUN_02046bc8(h) - 1);
    }
}
