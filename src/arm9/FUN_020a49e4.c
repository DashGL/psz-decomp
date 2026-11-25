// FUN_020a49e4 @ 0x020a49e4 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020a49e4 @ 0x020a49e4 (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct UI controller and register singleton reference.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a49e4.txt.
 */
extern char UNK_020fc018[],UNK_020fc034[],UNK_0211a664[];extern void FUN_020b9cb0(void *,void *),FUN_020a4920(void *),FUN_0200c938(void *,unsigned int);void *FUN_020a49e4(char *s,void *parent){FUN_020b9cb0(s,parent);FUN_020a4920(s+32);*(void **)s=UNK_020fc018;*(void **)(s+32)=UNK_020fc034;*(int *)(s+56)=-1;*(int *)(s+60)=0;*(short *)(s+64)=0;*(int *)(s+68)=1;*(int *)(s+72)=1;*(int *)(s+76)=0;*(int *)(s+80)=0;FUN_0200c938(s+84,24);*(int *)(s+204)=0;*(int *)(s+208)=0;*(int *)(s+212)=-1;*(int *)(s+216)=0;*(int *)(s+220)=0;*(int *)(s+224)=0;*(int *)(s+228)=-1;*(int *)(s+232)=-1;*(int *)(s+236)=0;*(int *)(s+240)=1;*(void **)(UNK_0211a664+20)=s;return s;}
