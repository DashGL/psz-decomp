// FUN_overlay_12__02120118 @ 0x02120118 (0xc4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 eight-slot list view rendering, footer banner, and page-button dispatch, full 196-byte extent including literal pool.
typedef struct{int x,y;} Coord;
typedef struct{unsigned short a,b,c,pad;Coord pos;} D;
extern void FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int),FUN_0208971c(void *,const void *),FUN_020b3088(void *,int);
extern int FUN_overlay_12__02121f78(void),FUN_overlay_12__02131ad0(int),FUN_02084c1c(void *),FUN_02084c0c(void *);
void FUN_overlay_12__02120118(unsigned char *self){D d;int i;FUN_02071d0c(&d);FUN_02090b44(&d);if(!FUN_overlay_12__02121f78()){for(i=0;i<8;i++){unsigned char *elem=self+0x2c8+288*i;if(*(int *)(elem+0x11c)){d.a=*(unsigned short *)elem;d.b=*(unsigned short *)(elem+2);d.c=*(unsigned short *)(elem+4);d.pos=*(const Coord *)(elem+8);if(i==*(int *)(self+12)&&*(int *)(elem+0x118))d.a=1;FUN_020c32b4(&d,FUN_overlay_12__02131ad0(7));}}}d.a=10;FUN_0208971c(&d.pos,(const void *)0x02137bd8);FUN_020c32b4(&d,FUN_overlay_12__02131ad0(6));if(FUN_02084c1c((void *)0x0211a51c)){FUN_020b3088(self+0x28,0);}else if(FUN_02084c0c((void *)0x0211a51c)){FUN_020b3088(self+0x28,1);}}
