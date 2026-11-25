// FUN_overlay_12__0212911c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xae candidate=0xae words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 concrete two-class menu lifecycle; slot12 targets284d8/29390.
typedef struct Child Child;typedef struct Table{void *unused[3];Child *(*destroy)(Child *);} Table;struct Child{Table *table;};
extern void *FUN_020ba894(unsigned),*FUN_overlay_12__02128338(void *,void *,void *),*FUN_overlay_12__02129208(void *,void *,void *);
void *FUN_overlay_12__0212911c(char *self,unsigned kind){
 Child *old=*(Child **)(self+24);void *p;
 if(old){if(old){if(old)old->table->destroy(old);*(Child **)(self+24)=0;}}
 switch(kind){
 case 0:*(unsigned *)(self+16)=0;p=FUN_020ba894(52);if(p)p=FUN_overlay_12__02128338(p,self+16,self+28);*(void **)(self+24)=p;return p;
 case 1:*(unsigned *)(self+16)=1;p=FUN_020ba894(52);if(p)p=FUN_overlay_12__02128338(p,self+16,self+28);*(void **)(self+24)=p;return p;
 case 2:*(unsigned *)(self+16)=0;p=FUN_020ba894(36);if(p)p=FUN_overlay_12__02129208(p,self+16,self+28);*(void **)(self+24)=p;return p;
 case 3:*(unsigned *)(self+16)=1;p=FUN_020ba894(36);if(p)p=FUN_overlay_12__02129208(p,self+16,self+28);*(void **)(self+24)=p;return p;
 default:return 0;
 }
}
