// FUN_02094288 @ 0x02094288 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_02094288 @ 0x02094288 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Search entries until lookup helper returns nonnegative result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094288.txt.
 */
extern int FUN_02094124(void *,int,int,int,int);int FUN_02094288(char *s,int key,int a,int b,int c){int i;if(key==-1)return -1;if(*(unsigned char *)(s+58) && *(void **)(s+60)){for(i=0;i<*(unsigned char *)(s+58);i++){int result=FUN_02094124(*(char **)(s+60)+16*i,key,a,b,c);if(result>=0)return result;}}return -1;}
