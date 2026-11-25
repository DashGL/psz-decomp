// FUN_0207f40c @ 0x0207f40c (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f40c @ 0x0207f40c (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store three input bytes and clear fourth; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f40c.txt.
 */
void *FUN_0207f40c(unsigned char *self,unsigned int a,unsigned int b,unsigned int c) { self[0]=a; self[1]=b; self[2]=c; self[3]=0; return self; }
