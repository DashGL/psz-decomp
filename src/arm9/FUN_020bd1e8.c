// FUN_020bd1e8 @ 0x020bd1e8 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020bd1e8 @ 0x020bd1e8 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset network state and per-client records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd1e8.txt.
 */
extern void FUN_020e0544(void),FUN_020bd198(void *);void FUN_020bd1e8(char *s){int i;FUN_020e0544();*(int *)(s+3784)=-1;*(int *)(s+76)=0;*(int *)(s+80)=0;s[29]=0;for(i=0;i<4;i++){s[12+i]=0;((int *)(s+3872))[i]=0;}*(int *)(s+3868)=0;s[3865]=-1;FUN_020bd198(s);s[28]=0;if((*(int *)(s+52)+1)&1)*(int *)(s+48)>>=8;}
