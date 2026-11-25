// FUN_overlay_12__02123ac0 @ 0x02123ac0 (0x9a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x9a candidate=0x9a words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 keyboard navigation; full switch CFG through02123b5a.
typedef unsigned int u32;
extern int *FUN_overlay_12__0212359c(void *);
extern int FUN_overlay_12__02123c44(void *,int,int),FUN_overlay_12__02123d1c(void *,int,int);
extern void *FUN_overlay_12__02122e30(void *),*FUN_overlay_12__02122e40(void *),*FUN_overlay_12__02122e54(void *),*FUN_overlay_12__02122e64(void *);
extern u32 FUN_overlay_12__021235f0(void *);
extern int FUN_overlay_12__02123b7c(void *,u32);
int FUN_overlay_12__02123ac0(char *self,u32 direction){
 int active=1,x,y;u32 selected;
 do{
  x=FUN_overlay_12__0212359c(self)[3];
  y=FUN_overlay_12__0212359c(self)[4];
  switch(direction){
  case 0:if(!FUN_overlay_12__02123c44(self,x,y))FUN_overlay_12__02122e30(FUN_overlay_12__0212359c(self));break;
  case 1:if(!FUN_overlay_12__02123d1c(self,x,y))FUN_overlay_12__02122e40(FUN_overlay_12__0212359c(self));break;
  case 2:FUN_overlay_12__02122e54(FUN_overlay_12__0212359c(self));break;
  case 3:FUN_overlay_12__02122e64(FUN_overlay_12__0212359c(self));break;
  default:active=0;break;
  }
  selected=FUN_overlay_12__021235f0(self);
 }while(active&&!FUN_overlay_12__02123b7c(self,selected));
 *(u32 *)(self+164)=0;return active;
}
