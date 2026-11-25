// FUN_020b2ba4 @ 0x020b2ba4 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020b2ba4 @ 0x020b2ba4 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Traverse linked category records and probabilistically assign source marker.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2ba4.txt.
 */
extern int FUN_02083308(void *,int);extern unsigned int FUN_020832b4(int);extern char *FUN_020b23d4(void *,int);void FUN_020b2ba4(char *s,char *source){if(*(void **)s){int index=FUN_02083308(source,*(int *)(source+8));while(index>=0){char *p=FUN_020b23d4(*(void **)s,index);if(!p || (unsigned char)p[2]!=2)break;if(FUN_020832b4(10000)<*(unsigned short *)(*(char **)(s+16)+12))p[24]=((signed char *)source)[1];index=FUN_02083308(p,*(int *)(p+8));}}}
