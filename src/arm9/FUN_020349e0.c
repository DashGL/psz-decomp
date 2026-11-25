// FUN_020349e0 @ 0x020349e0 (0x1e, thumb) - ported from FUN_020733e8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x20, but the real body is 0x1e -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1e.
 */
/*
 * FUN_020349e0 - "use the slot this name resolves to, then unlink it"
 * (Thumb). Recorded size 0x20; true body 0x1e (2-byte pad `movs r0,r0` at
 * 0x02073406; the next prologue starts at 0x02073408).
 *
 * 020733e8  38b5       push {r3, r4, r5, lr}
 * 020733ea  051c       adds r5, r0, #0     ; self
 * 020733ec  00f00cf8   bl   0x02073408      ; slot = FUN_02034a00(self)
 * 020733f0  041c       adds r4, r0, #0
 * 020733f2  07d0       beq  0x20349fc     ; fused test of the call result
 * 020733f4  281c       adds r0, r5, #0
 * 020733f6  211c       adds r1, r4, #0
 * 020733f8  00f026f8   bl   0x02073448      ; bind(self, slot)
 * 020733fc  a178       ldrb r1, [r4, #2]
 * 020733fe  281c       adds r0, r5, #0
 * 02073400  fef740fb   bl   0x02071a84      ; play(self, slot->f2)
 * 020349fc  38bd       pop  {r3, r4, r5, pc}
 *
 * Reads from the bytes: void fn(void *self) {
 *     void *slot = FUN_02034a00(self);
 *     if (slot != 0) { FUN_02034a40(self, slot); FUN_0203058c(self, *(u8*)((u8*)slot+2)); }
 * }
 * The `adds r4,r0,#0 / beq` pair is MWCC's adds-test fusion on the call
 * result: the production of `slot` IS the test, so slot must stay in its
 * own statement rather than being folded into `if ((slot = ...))`.
 * slot survives one call, hence r4.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void *FUN_02034a00(void *self);
extern void FUN_02034a40(void *self, void *slot);
extern void FUN_0203058c(void *self, u32 kind);

void FUN_020349e0(void *self)
{
    u8 *slot = FUN_02034a00(self);

    if (slot != 0) {
        FUN_02034a40(self, slot);
        FUN_0203058c(self, *(u8 *)(slot + 2));
    }
}
