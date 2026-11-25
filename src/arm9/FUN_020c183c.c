// FUN_020c183c @ 0x020c183c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020c183c @ 0x020c183c
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If request is at most available count, set context to max(request, configured minimum).
 * Evidence: scratch/coverage-root/batch1/020c183c.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern int FUN_0200f314(void *);
extern void FUN_0200f240(void *,int);
void FUN_020c183c(int request) {
    char *manager;
    if(request>FUN_0200f314((*(void ***)0x0211c85c)[2])) return;
    manager=*(char **)0x0211c85c;
    if(request<*(int *)(manager+24)) FUN_0200f240(*(void **)(manager+8),*(int *)(manager+24));
    else FUN_0200f240(*(void **)(manager+8),request);
}
