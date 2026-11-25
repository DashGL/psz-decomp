// FUN_0209f5a0 @ 0x0209f5a0 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_0209f5a0 @ 0x0209f5a0 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test source ownership and optional active-player condition.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f5a0.txt.
 */
extern int FUN_020b80f0(int),FUN_02032ee4(void *,int);int FUN_0209f5a0(char *s,int mode){if(mode==0){if(FUN_020b80f0(**(signed char **)(s+48)))return 1;}else if(mode==1){int id=**(signed char **)(s+48);if(id==*(int *)(s+68) || FUN_02032ee4(*(void **)0x02108c64,id))return 1;}else if(mode==2){if(**(signed char **)(s+48)!=*(int *)(s+68))return 1;}return 0;}
