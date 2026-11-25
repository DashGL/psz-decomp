// FUN_0204a028 @ 0x0204a028 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a028 @ 0x0204a028 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Initialize base, dispatch table and defaults; initialize embedded triple to fixed-point one.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/0204a028.txt.
 */
extern void FUN_0204734c(void *), FUN_02035408(void *,int,int,int);
void *FUN_0204a028(char *self) {
    FUN_0204734c(self);
    *(unsigned int *)self=0x020f90b4;
    *(unsigned int *)(self+0x104)=~0u;
    *(unsigned int *)(self+0x108)=0; *(unsigned int *)(self+0x10c)=0;
    FUN_02035408(self+0x110,4096,4096,4096);
    return self;
}
