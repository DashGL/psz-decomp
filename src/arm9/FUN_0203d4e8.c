// FUN_0203d4e8 @ 0x0203d4e8 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d4e8 @ 0x0203d4e8 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/0203d4e8.txt.
 */
typedef struct{int x,y,z;} Vector;extern char *FUN_020ac3b4(void *,void *);extern int FUN_020525b8(void *,unsigned int,void *);extern int FUN_0205256c(void *,unsigned int,Vector *);
int FUN_0203d4e8(void *s,Vector *out,void *arg){char *p=FUN_020ac3b4(s,arg);if(p&&*(unsigned char *)(p+0x110)){unsigned int record[17];if(FUN_020525b8(p,0,record)==1){Vector v;if(FUN_0205256c(p,0,&v)){Vector result;result.x=v.x;result.y=0;result.z=v.y;*out=result;return 1;}}}return 0;}
