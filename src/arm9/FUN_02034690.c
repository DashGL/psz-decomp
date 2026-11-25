// FUN_02034690 @ 0x02034690 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034690 @ 0x02034690 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/02034690.txt.
 */
extern void FUN_0205b16c(void *);
void *FUN_02034690(unsigned int *s) { s[0]=0x020f6d54;s[1]=0x5fe;s[2]=0xed6;s[3]=0x1555;s[4]=4096;s[5]=0xc8000;s[6]=0;s[7]=0;s[8]=0;s[9]=0;s[10]=0x1800;s[11]=0;s[12]=0;s[13]=0;s[14]=0;FUN_0205b16c(s+15);return s; }
