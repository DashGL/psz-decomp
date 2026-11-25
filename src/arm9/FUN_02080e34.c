// FUN_02080e34 @ 0x02080e34 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02080e34 @ 0x02080e34 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate player and category before optional global dispatch.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080e34.txt.
 */
extern int FUN_020c2e14(int);extern void *FUN_0208772c(void);extern void FUN_02087748(void *,int,void *,int);int FUN_02080e34(int player,int category,void *data){if(player<0 || player>=4)return 0;if(category<0 || category>=3)return 0;if(FUN_020c2e14(1) && *(void **)0x0211a53c)FUN_02087748(FUN_0208772c(),player,data,category);return 1;}
