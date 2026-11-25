// FUN_02099ec8 @ 0x02099ec8 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02099ec8 @ 0x02099ec8 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct resource with forwarded vector and halfword then defaults.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099ec8.txt.
 */
extern void FUN_02044b80(void *,void *,int),FUN_020926d0(void *,void *,int,int,int,int),FUN_02099f1c(void *);void *FUN_02099ec8(char *s,void *vector,int value){FUN_02044b80(s,vector,value);FUN_020926d0(s+32,(void *)0x020fc958,0,-1,0,1);*(int *)(s+140)=0;s[204]=0;*(int *)(s+208)=0;*(int *)(s+212)=0;FUN_02099f1c(s);return s;}
