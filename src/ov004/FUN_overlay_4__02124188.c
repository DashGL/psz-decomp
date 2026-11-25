// FUN_overlay_4__02124188 @ 0x02124188 (0xf2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__02124188 @ 0x02124188 (0xf2, Thumb)
// check: vers=2.0/sp2p3 target=0xf2 candidate=0xf2 words=0 exact_bytes=0 bad_relocs=0
// Wrap entry selection, notify manager with per-entry context, and maintain five-row viewport.
extern int FUN_020bbf94(unsigned int),FUN_overlay_4__02124a98(void *,int);extern void *FUN_02088c7c(void);extern void FUN_02088e10(void *,void *,int,int),FUN_020c193c(int,int,int,int,int);
void FUN_overlay_4__02124188(char *self,int *index,int count){void *manager;int context,delta;if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);(*index)++;if(*index>=count)*index=0;manager=FUN_02088c7c();context=FUN_overlay_4__02124a98(self,*index);FUN_02088e10(manager,self+4+*index*28,0,context);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);(*index)--;if(*index<0)*index=count-1;manager=FUN_02088c7c();context=FUN_overlay_4__02124a98(self,*index);FUN_02088e10(manager,self+4+*index*28,0,context);}if(*index>=count)*index=0;*(int *)(self+236)=*(int *)(self+232);delta=*index-*(int *)(self+232);if(delta>=5)*(int *)(self+232)=*index-4;if(delta<0)*(int *)(self+232)=*index;if(*(int *)(self+232)<0)*(int *)(self+232)=4;}
