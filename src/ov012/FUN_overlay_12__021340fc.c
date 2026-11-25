// FUN_overlay_12__021340fc @ 0x021340fc (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__021340fc @ 0x021340fc (thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Update item preview or navigation and optionally render the selection glyph. */
typedef struct{unsigned short a,b,c,pad;int x,y;}Draw;
extern int FUN_overlay_12__02136db8(void *);extern void *FUN_02088c7c(void);extern void FUN_02088dd8(void *,void *,int,int),FUN_02088cd0(void *,void *),FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int);
void FUN_overlay_12__021340fc(int *self,int hidden){Draw d;if(self[88]){if(!((unsigned char *)self)[316]){if(!FUN_overlay_12__02136db8(self))hidden=1;}else hidden=1;self[90]=0;}else{FUN_02088dd8(FUN_02088c7c(),self+79,0,-1);FUN_02088cd0(FUN_02088c7c(),(void *)self[84]);}if(!hidden){FUN_02071d0c(&d);FUN_02090b44(&d);d.x=0x80000;d.y=0x120000;d.a=1;FUN_020c32b4(&d,self[17]);}}
