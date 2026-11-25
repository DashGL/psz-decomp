// FUN_0200f18c @ 0x0200f18c (0x68, arm) - ported from FUN_0202981c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0200f18c — entity-node allocator (ARM, dsi/1.1). True body 0x64 =
 * 24 ARM insns + 4-byte pad tail to 0x68. Live bytes: f0412de9...
 * Shape: push {r4-r8,lr}; r7=p2(r1)... alloc = FUN_02012454(*p0,
 * (p2+0x1f & ~0x1f)+0x20, 0x20); if(!alloc) return 0; head=FUN_02011b38(p1+1,0);
 * alloc->8=p2, ->0xc=p3(r6), ->0x10=p4(r5 saved), ->0x14=* (sp+0x18 = p5);
 * FUN_020119b8(head, alloc); return alloc+0x20.  NOTE the last arg p5 is
 * re-read from the STACK at +0x18 (5th word arg) — needs 5-arg signature.
 * push/popeq with r8 = MWCC-ARM only (STMFD-style pseudos rejected); use
 * inline asm? no - plain C should codegen this as-is.
 */
typedef unsigned int u32;

extern int FUN_02012454(u32 arena, u32 size, u32 align);
extern u32 FUN_02011b38(u32 *slot, u32 zero);
extern void FUN_020119b8(u32 head, int node);

int FUN_0200f18c(u32 *param_1, int param_2, u32 param_3, u32 param_4, u32 param_5)
{
    int node = FUN_02012454(param_1[0], (u32)((param_2 + 0x1f) & ~0x1fu) + 0x20, 0x20);
    if (node == 0) {
        return 0;
    }
    u32 head = FUN_02011b38(param_1 + 1, 0);
    *(u32 *)(node + 8) = (u32)param_2;
    *(u32 *)(node + 0xc) = param_3;
    *(u32 *)(node + 0x10) = param_4;
    *(u32 *)(node + 0x14) = param_5;
    FUN_020119b8(head, node);
    return node + 0x20;
}
