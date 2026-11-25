// FUN_0209afe0 @ 0x0209afe0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_0209afe0 @ 0x0209afe0 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Materialize currency or ordinary item descriptor and amount.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209afe0.txt.
 */
extern void FUN_0203955c(void *),FUN_02084a1c(void *,int),FUN_02045990(void *,void *),FUN_0209bf08(void *,int);void FUN_0209afe0(unsigned char *desc,unsigned char *out,int extra){if(desc[0]==4){int amount=*(unsigned short *)(desc+2);if(amount>100000)amount=100000;FUN_0203955c(out);out[0]=4;FUN_02084a1c(out,amount);}else{FUN_0203955c(out);FUN_02045990(out,desc);FUN_02084a1c(out,1);FUN_0209bf08(out,extra);}}
