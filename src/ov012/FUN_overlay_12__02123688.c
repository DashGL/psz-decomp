// FUN_overlay_12__02123688 @ 0x02123688 (0x1d4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch41.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x1d4 candidate=0x1d4 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 keyboard input priority dispatcher; full468-byte body.
extern int FUN_020bbf6c(unsigned),FUN_020bbf94(unsigned);
extern int FUN_overlay_12__0212385c(void *),FUN_overlay_12__02123a20(void *),FUN_overlay_12__02123a4c(void *,int),FUN_overlay_12__02123ac0(void *,unsigned);
extern void *FUN_overlay_12__0212359c(void *);
extern void FUN_overlay_12__02123b5c(void *,int),FUN_overlay_12__02123b6c(void *,int);
extern void FUN_020c193c(unsigned,unsigned,unsigned,unsigned,int);
#define SOUND(n) FUN_020c193c(0,n,0,0,-1)
void FUN_overlay_12__02123688(char *self){
 if(FUN_020bbf6c(1)){if(FUN_overlay_12__0212385c(self))SOUND(0);else SOUND(5);}
 else if(FUN_020bbf6c(2)){if(FUN_overlay_12__02123a20(self))SOUND(1);}
 else if(FUN_020bbf6c(256)){if(FUN_overlay_12__02123a4c(self,1))SOUND(0);else SOUND(5);}
 else if(FUN_020bbf6c(512)){if(FUN_overlay_12__02123a4c(self,0))SOUND(0);else SOUND(5);}
 else if(FUN_020bbf6c(8)){
  *(unsigned *)(self+148)=1;FUN_overlay_12__02123b5c(FUN_overlay_12__0212359c(self),1);
  FUN_overlay_12__02123b6c(FUN_overlay_12__0212359c(self),0);SOUND(2);
 }
 else if(FUN_020bbf94(64)){if(FUN_overlay_12__02123ac0(self,0))SOUND(2);}
 else if(FUN_020bbf94(128)){if(FUN_overlay_12__02123ac0(self,1))SOUND(2);}
 else if(FUN_020bbf94(32)){if(FUN_overlay_12__02123ac0(self,2))SOUND(2);}
 else if(FUN_020bbf94(16)){if(FUN_overlay_12__02123ac0(self,3))SOUND(2);}
}
