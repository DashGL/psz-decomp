// FUN_020bf938 @ 0x020bf938 (0xcc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020bf938 @ 0x020bf938 (inventory code 0xcc, thumb)
// check: 2.0/sp2p3 target=0xcc candidate=0xcc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test circle overlap and optionally return separation displacement.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf938.txt.
 */
extern int FUN_0205c540(int),FUN_020c1334(int);extern void FUN_020bfa04(void *),FUN_02034e98(void *,int);int FUN_020bf938(int *a,int *b,int *out){int radius=a[2]+b[2],dx=a[0]-b[0],dy=a[1]-b[1],square,length,v[2];square=(int)(((long long)dx*dx+2048)>>12)+(int)(((long long)dy*dy+2048)>>12);if(square>(int)(((long long)radius*radius+2048)>>12))return 0;if(!out)return 1;length=FUN_0205c540(square);if(FUN_020c1334(length)<=4){v[0]=4096;v[1]=0;}else{v[0]=dx;v[1]=dy;}FUN_020bfa04(v);FUN_02034e98(v,radius-length);out[0]=v[0];out[1]=v[1];return 1;}
