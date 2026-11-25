// FUN_020bdcc0 @ 0x020bdcc0 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020bdcc0 @ 0x020bdcc0 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Disconnect eligible network state and clear four client slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bdcc0.txt.
 */
extern void FUN_020bddd8(void *,int),FUN_020e13cc(void),FUN_020bdd0c(void *,int),FUN_020e34fc(void);int FUN_020bdcc0(signed char *s){int state=s[28],i;if(state==6 || state==8 || state==10){FUN_020bddd8(s,0);FUN_020e13cc();for(i=0;i<4;i++)FUN_020bdd0c(s,i);FUN_020e34fc();s[3865]=-1;s[28]=4;return 1;}return 0;}
