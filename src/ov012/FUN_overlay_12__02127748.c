// FUN_overlay_12__02127748 @ 0x02127748 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02127748 @ 0x02127748 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full status-panel rendering; descriptor padding is not read by concrete renderer. */
typedef struct {unsigned short a,b,c,pad;int x,y;} Draw;
extern int FUN_overlay_12__02131ad0(int);extern void FUN_020c32b4(Draw *,int),FUN_overlay_12__02127f4c(void *,void *,int),FUN_overlay_12__02128108(void *,int);extern char *FUN_02086e3c(void),*FUN_020870c4(void *);
void FUN_overlay_12__02127748(void){Draw d;unsigned a,b;int h=FUN_overlay_12__02131ad0(6);d.a=0;d.b=0;d.c=0;d.a=0;d.b=0;d.c=0;d.x=0;d.y=0;d.x=0;d.y=0x5000;d.a=2;FUN_020c32b4(&d,h);a=0x0213dde8;FUN_overlay_12__02127f4c(&a,FUN_02086e3c()+16,0);{char *p=FUN_020870c4(FUN_02086e3c());b=0x0213ddd8;FUN_overlay_12__02128108(&b,*(int *)(p+52));}}
