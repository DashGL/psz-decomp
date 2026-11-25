// FUN_020712e8 @ 0x020712e8 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020712e8 @ 0x020712e8 (inventory code 0x6a, thumb)
// check: 2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply input-controlled rotation or reset request.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020712e8.txt.
 */
extern int FUN_020bbfa8(int),FUN_020bbf6c(int);extern void FUN_02071354(void *,unsigned short);void FUN_020712e8(char *s){if(!(*(int *)(s+120)&2)){if(FUN_020bbfa8(1024)){if(FUN_020bbfa8(512))*(unsigned short *)(s+130)+=768;if(FUN_020bbfa8(256))*(unsigned short *)(s+130)-=768;}else if(FUN_020bbf6c(512))FUN_02071354(s,*(unsigned short *)(s+134));}}
