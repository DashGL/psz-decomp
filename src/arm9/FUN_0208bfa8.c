// FUN_0208bfa8 @ 0x0208bfa8 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208bfa8 @ 0x0208bfa8 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance blinking counter and submit display descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208bfa8.txt.
 */
extern void FUN_02071d0c(void *),FUN_020c32b4(void *,void *);extern void *FUN_02077f3c(void),*FUN_02077fec(void *);void FUN_0208bfa8(char *s){int d[4];FUN_02071d0c(d);(*(int *)(s+80))++;if(*(int *)(s+80)>8){*(int *)(s+80)=0;*(int *)(s+84)=!*(int *)(s+84);}if(*(unsigned char *)(s+37)==100 && *(int *)(s+84))*(short *)d=31;else *(short *)d=*(int *)(s+56);d[2]=16384;d[3]=0xcd000;FUN_020c32b4(d,FUN_02077fec(FUN_02077f3c()));}
