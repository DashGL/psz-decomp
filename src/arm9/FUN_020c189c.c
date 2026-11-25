// FUN_020c189c @ 0x020c189c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c189c @ 0x020c189c
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For indexed context, apply max(request, stored minimum) only if request does not exceed available count.
 * Evidence: scratch/coverage-root/batch8/020c189c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_0200f314(void *);
extern void FUN_0200f240(void *,int);
void FUN_020c189c(int request,unsigned int index) {
    char *manager=*(char **)0x0211c85c;int minimum;
    if(request>FUN_0200f314((*(void ***)(manager+20))[index]))return;
    manager=*(char **)0x0211c85c;minimum=(*(int **)(manager+28))[index];
    if(request<minimum)FUN_0200f240((*(void ***)(manager+20))[index],minimum);
    else FUN_0200f240((*(void ***)(manager+20))[index],request);
}
