// FUN_020873a8 @ 0x020873a8 (0xb0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020873a8 @ 0x020873a8 (inventory code 0xa0, thumb)
// check: 2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize aggregate buffers and embedded status records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020873a8.txt.
 */
extern void FUN_020b0960(void *,void *,void *,int,int),FUN_020b0528(void *,void *,int,int),FUN_020872d8(void *),FUN_02087384(void *),FUN_0206557c(int,void *,int),FUN_02086edc(void *),FUN_020871b0(void *);void *FUN_020873a8(char *s){FUN_020b0960(s,s+172,s+0x5ac,40,80);FUN_020b0528(s+16,s+172,40,80);FUN_020b0528(s+28,s+0x6f0,100,100);FUN_020b0528(s+40,s+0xdb0,100,100);*(int *)(s+52)=0;*(int *)(s+56)=-1;FUN_020872d8(s+60);FUN_02087384(s+0xdb0);*(int *)(s+0x1928)=0;*(int *)(s+0x1934)=0;FUN_0206557c(0,s+60,0xd74);FUN_02086edc(s+60);FUN_0206557c(0,s+0xdb0,0xb78);FUN_020871b0(s+0xdb0);return s;}
