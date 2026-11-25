// FUN_020b02d8 @ 0x020b02d8 (0xe4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020b02d8 @ 0x020b02d8 (inventory code 0xe0, thumb)
// check: 2.0/sp2p3 target=0xe4 candidate=0xe4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find a compatible stack slot or the first unused inventory entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b02d8.txt.
 */
typedef struct{unsigned char b[4];} Key;extern int FUN_020b0244(void *),FUN_02084900(void *),FUN_020849d4(void *),FUN_02084944(void *),FUN_020458f8(void *,void *),FUN_02084a60(void *,int,int);int FUN_020b02d8(char *s,void *item,int expanded){Key key=*(Key *)item,a,b;int quantity,i;if(FUN_020b0244(&key))return -1;if(FUN_02084900(&key)){quantity=FUN_020849d4(item);if(FUN_02084944(&key)<quantity)return -1;for(i=0;i<*(short *)(s+8);i++){a=*(Key *)(*(char **)(s+4)+16*i);if(FUN_020458f8(&a,&key)){if(FUN_02084a60(*(char **)(s+4)+16*i,quantity,expanded?999:-1))return i;return -1;}}}for(i=0;i<*(short *)(s+8);i++){b=*(Key *)(*(char **)(s+4)+16*i);if(FUN_020b0244(&b))return i;}return -1;}
