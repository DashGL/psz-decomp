// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// FUN_0203819c @ 0x0203819c (inventory code 0x2a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * If both managers exist, release halfword identifier then byte identifier through their helpers.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/0203819c.txt.
 */
extern void * D_02108c84;
extern void * D_02108d08;
extern void FUN_02033fcc(void *,unsigned int),FUN_0203e9b0(void *,unsigned int);
void FUN_0203819c(char *self) {
    void *first=D_02108c84,*second=D_02108d08;
    if(first && second) { FUN_02033fcc(first,*(unsigned short *)(self+0x94)); FUN_0203e9b0(second,*(unsigned char *)(self+0x98)); }
}
