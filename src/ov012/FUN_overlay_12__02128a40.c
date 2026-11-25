// FUN_overlay_12__02128a40 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x108 candidate=0x108 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 dialog creation; adapter28318/table213df58 slot12=>28a1c->28228.
typedef struct Adapter Adapter;typedef struct Table{void *unused[3];void *(*text)(Adapter *,int);} Table;struct Adapter{Table *table;};
extern void FUN_overlay_12__02128a28(void *),FUN_overlay_12__02125f0c(void *,void *);
extern void *FUN_020ba918(unsigned),*FUN_overlay_12__02125d80(void *,void *,int,unsigned short,unsigned short,void *);
extern int FUN_overlay_12__02131ad0(int),FUN_overlay_12__02125f28(void *,unsigned);
void FUN_overlay_12__02128a40(char *self,int kind){
 void *p,*parent,*text;Adapter *adapter;int handle;
 FUN_overlay_12__02128a28(self);
 if(*(void **)(self+28)||!*(void **)(self+24))return;
 switch(kind){
 case 3:
  p=FUN_020ba918(364);
  if(p){handle=FUN_overlay_12__02131ad0(2);parent=*(void **)0x0213f2fc;p=FUN_overlay_12__02125d80(p,*(void **)(self+24),handle,7,14,parent);}
  *(void **)(self+28)=p;
  if(p){adapter=*(Adapter **)(self+24);text=adapter->table->text(adapter,19);FUN_overlay_12__02125f0c(*(void **)(self+28),text);
  }
  break;
 case 5:
  p=FUN_020ba918(364);
  if(p){handle=FUN_overlay_12__02131ad0(2);parent=*(void **)0x0213f2fc;p=FUN_overlay_12__02125d80(p,*(void **)(self+24),handle,7,14,parent);}
  *(void **)(self+28)=p;
  if(p){adapter=*(Adapter **)(self+24);text=adapter->table->text(adapter,21);FUN_overlay_12__02125f0c(*(void **)(self+28),text);
   FUN_overlay_12__02125f28(*(void **)(self+28),17);
  }
  break;
 case 6:
  p=FUN_020ba918(364);
  if(p){handle=FUN_overlay_12__02131ad0(2);parent=*(void **)0x0213f2fc;p=FUN_overlay_12__02125d80(p,*(void **)(self+24),handle,7,14,parent);}
  *(void **)(self+28)=p;
  if(p){adapter=*(Adapter **)(self+24);text=adapter->table->text(adapter,20);FUN_overlay_12__02125f0c(*(void **)(self+28),text);
   FUN_overlay_12__02125f28(*(void **)(self+28),17);
  }
  break;
 }
}
