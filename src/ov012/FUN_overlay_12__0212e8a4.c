// FUN_overlay_12__0212e8a4 @ 0x0212e8a4 (thumb)
// check: 2.0/sp2p3 target=0x88 candidate=0x7c words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/34 size=0x88 vers=2.0/sp2p3 next="register coloring, local aggregate layout and instruction scheduling; displaced reloc diagnostics require recheck after layout match"
// flags: -O1,s
/* Render the active list menu, scrollbar and selected content mode. */
typedef struct{unsigned short a,b,c,pad;int x,y;}Draw;
extern void FUN_overlay_12__02131c58(void),FUN_overlay_12__0212d710(void),FUN_overlay_12__0212d488(void *,int),FUN_overlay_12__0212d51c(void *,int),FUN_02071d0c(Draw *),FUN_02090b44(Draw *),FUN_020c32b4(Draw *,int),FUN_overlay_12__0212e92c(void *),FUN_overlay_12__0212e980(void *);extern int FUN_overlay_12__02131ad0(int);
void FUN_overlay_12__0212e8a4(int *self){Draw d;int active=(*(int *)0x0213e20c==self[2]);if(active){FUN_overlay_12__02131c58();FUN_overlay_12__0212d710();FUN_overlay_12__0212d488(self+130,0);FUN_overlay_12__0212d51c(self+130,0);FUN_02071d0c(&d);FUN_02090b44(&d);d.x=0;d.y=0x5000;d.a=1;FUN_020c32b4(&d,FUN_overlay_12__02131ad0(4));switch(self[17]){case 0:FUN_overlay_12__0212e92c(self);break;case 1:FUN_overlay_12__0212e980(self);break;}}}
