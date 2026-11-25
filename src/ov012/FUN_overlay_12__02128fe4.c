// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x138, exact bytes and relocation targets.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x138 candidate=0x138 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 menu owner state machine, full312 bytes through resource literal.
// Concrete child classes213df40/e060: update8528/293d8, draw28d08, delete284d8/29390.
typedef struct Child Child;typedef struct Table{int (*update)(Child *);void (*draw)(Child *,void *);void *unused;Child *(*destroy)(Child *);} Table;struct Child{Table *table;};
extern int FUN_020c2e38(void),FUN_overlay_12__02128f5c(void *),FUN_020bbf6c(unsigned);
extern void FUN_overlay_12__0212828c(void *,void *,int,int),FUN_020c2d94(int,int,int),FUN_020c193c(unsigned,unsigned,unsigned,unsigned,int);
extern void *FUN_overlay_12__0212144c(void),*FUN_overlay_12__0212911c(void *,unsigned);
extern void FUN_overlay_12__02120d58(void *,void *),FUN_overlay_12__02128e38(void *),FUN_overlay_12__021281a4(void *,void *),FUN_overlay_12__02128dc0(void *),FUN_overlay_12__02128258(void *,void *);
int FUN_overlay_12__02128fe4(char *self){
 Child *child;
 switch(*(unsigned *)(self+4)){
 case 0:
  if(FUN_020c2e38()){FUN_overlay_12__0212828c(self+48,self+28,*(int *)(self+12),*(int *)(self+20));return 0;}
  FUN_overlay_12__0212828c(self+48,self+28,*(int *)(self+12),*(int *)(self+20));
  if(FUN_overlay_12__02128f5c(self)){FUN_020c2d94(0,2,0);*(unsigned *)(self+8)=*(unsigned *)(self+4);*(unsigned *)(self+4)=2;}
  if(FUN_020bbf6c(2)){FUN_020c193c(0,1,0,0,-1);return 1;}
  break;
 case 1:
  child=*(Child **)(self+24);if(child){
   if(child->table->update(child)){FUN_020c2d94(0,2,0);*(unsigned *)(self+8)=*(unsigned *)(self+4);*(unsigned *)(self+4)=2;}
   child=*(Child **)(self+24);child->table->draw(child,self+28);
  }
  break;
 case 2:
  if(FUN_020c2e38())return 0;
  FUN_020c2d94(0,1,0);
  if(*(unsigned *)(self+8)==1){
   child=*(Child **)(self+24);if(child){if(child)child->table->destroy(child);*(Child **)(self+24)=0;}
   FUN_overlay_12__02120d58(FUN_overlay_12__0212144c(),(void *)0x0213e038);
   FUN_overlay_12__02128e38(self+28);FUN_overlay_12__021281a4(self+48,self+28);
   *(unsigned *)(self+8)=*(unsigned *)(self+4);*(unsigned *)(self+4)=0;
  }else if(*(unsigned *)(self+8)==0){
   FUN_overlay_12__02128dc0(self+28);FUN_overlay_12__02128258(self+48,self+28);
   *(void **)(self+24)=FUN_overlay_12__0212911c(self,*(unsigned *)(self+12));
   *(unsigned *)(self+8)=*(unsigned *)(self+4);*(unsigned *)(self+4)=1;
  }
  break;
 }
 return 0;
}

// ROM prepares self+28 in r1 for draw and02128258; concrete callees ignore it.
