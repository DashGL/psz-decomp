// FUN_overlay_12__02132c80 @ 0x02132c80 (0x8a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02132c80 @ 0x02132c80 (thumb)
// check: 2.0/sp2p3 target=0x8a candidate=0x8a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Draw two animated arrows while decrementing their positive countdowns. */
typedef struct{unsigned short a,b,c,pad;int x,y;}Draw;
extern int FUN_overlay_12__02131ad0(int);extern void FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int);
void FUN_overlay_12__02132c80(int *self){Draw d;int handle=FUN_overlay_12__02131ad0(0);FUN_02071d0c(&d);FUN_02090b44(&d);d.y=0x34000;d.a=83;if(self[47]>0){self[47]--;d.x=0x31000;}else d.x=0x35000;FUN_020c32b4(&d,handle);d.a=82;if(self[48]>0){self[48]--;d.x=0xc7000;}else d.x=0xc3000;FUN_020c32b4(&d,handle);}
