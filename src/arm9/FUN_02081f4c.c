// FUN_02081f4c @ 0x02081f4c (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02081f4c @ 0x02081f4c (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply temporary resource selection to embedded collection.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02081f4c.txt.
 */
extern void FUN_020b2698(void *,void *,void *),FUN_020b2718(void *),FUN_020b2afc(void *,void *,int),FUN_020b2b50(void *,void *),FUN_020b2bf4(void *,void *),FUN_020b26f0(void *);extern int FUN_020b2a54(void *,int);void FUN_02081f4c(char *s,void *desc,int mode){int temp[5];FUN_020b2698(temp,desc,s+96);FUN_020b2718(temp);FUN_020b2afc(temp,s+96,FUN_020b2a54(temp,mode));FUN_020b2b50(temp,s+96);FUN_020b2bf4(temp,s+96);FUN_020b26f0(temp);}
