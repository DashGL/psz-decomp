// FUN_overlay_12__0212007c @ 0x0212007c (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212007c @ 0x0212007c (thumb)
// check: 2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Draw visible list-row markers, highlighting the selected row. */
typedef struct{unsigned short a,b,c,pad;int x,y;}Draw;
extern void FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int);extern int FUN_overlay_12__02131ad0(int);
void FUN_overlay_12__0212007c(int *self){Draw d;int total,page,start,offset,i;FUN_02071d0c(&d);FUN_02090b44(&d);offset=self[4];total=self[755];page=self[756];start=self[758];i=0;d.x=(int)((unsigned)offset*0x14000u+0x7000u);while(start<total&&i<page){d.y=(int)(((unsigned)i+(unsigned)offset)*0x11000u+0x1d000u);d.a=i==(int)((unsigned)self[757]-(unsigned)self[758]);FUN_020c32b4(&d,FUN_overlay_12__02131ad0(7));i++;start++;}}
