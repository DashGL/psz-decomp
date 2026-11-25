// FUN_0203955c @ 0x0203955c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_0203955c @ 0x0203955c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Initialize leading four bytes to ff and trailing three words to zero; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/0203955c.txt.
 */
void *FUN_0203955c(unsigned char *self) { int i; self[0]=255; self[1]=255; self[2]=255; self[3]=255; for(i=0;i<3;i++) ((unsigned int *)(self+4))[i]=0; return self; }
