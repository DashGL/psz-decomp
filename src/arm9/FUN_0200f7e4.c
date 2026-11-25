// FUN_0200f7e4 @ 0x0200f7e4 (0xa0, arm) - ported from FUN_02029e74 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0200f7e4 — entity create (ARM, dsi/1.1, recorded size 0xa0).
 * Args: (self, table, extra, self2, owner) — owner is the 5th (stack) arg,
 * re-read from [sp,#0x20] for the owner==0 guard AND fed to the allocator.
 * self2 rides to FUN_0200f18c as its 5th arg via str r4,[sp].
 * Flow: ex=FUN_0200eed0(self); miss->0; !owner->0;
 * node=FUN_0200f18c(owner, ex+0x20, table, extra, self2); miss->0;
 * FUN_0200eef8(self,node,ex,0)!=ex->0; FUN_020673f0(node,ex); return node.
 */
typedef unsigned int u32;

extern int FUN_0200eed0(int self);
extern int FUN_0200f18c(u32 *owner, int len, u32 table, u32 extra, u32 self2);
extern int FUN_0200eef8(int self, int node, int existing, u32 zero);
extern void FUN_020673f0(int node, int existing);

int FUN_0200f7e4(int self, u32 table, u32 extra, u32 self2, u32 owner)
{
    int ex = FUN_0200eed0(self);
    if (ex == 0) {
        return 0;
    }
    if (owner == 0) {
        return 0;
    }
    int node = FUN_0200f18c((u32 *)owner, ex + 0x20, table, extra, self2);
    if (node == 0) {
        return 0;
    }
    if (ex != FUN_0200eef8(self, node, ex, 0)) {
        return 0;
    }
    FUN_020673f0(node, ex);
    return node;
}
