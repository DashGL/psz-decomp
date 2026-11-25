// FUN_overlay_12__021284d8 @ 0x021284d8 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch59.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 menu teardown; concrete8-byte child vtable213df58 slot4=284cc.
typedef struct Object Object;typedef struct Table{void *unused;Object *(*destroy)(Object *);} Table;struct Object{Table *table;};
extern void FUN_overlay_12__02134868(int),FUN_overlay_12__02128a28(void *),FUN_overlay_12__021296f0(void *);
extern void FUN_overlay_12__02132478(void),FUN_overlay_12__02133aa4(void),FUN_overlay_12__02131b98(void),FUN_overlay_12__0212c84c(void),FUN_020ba8ac(void *);
void *FUN_overlay_12__021284d8(char *self){
 Object *child;*(unsigned *)self=0x0213df40;
 FUN_overlay_12__02134868(1);FUN_overlay_12__02128a28(self);FUN_overlay_12__02132478();FUN_overlay_12__02133aa4();
 FUN_overlay_12__02131b98();FUN_overlay_12__0212c84c();
 child=*(Object **)(self+24);
 if(child){if(child)child->table->destroy(child);*(Object **)(self+24)=0;}
 *(unsigned *)0x0213f198=0;FUN_020ba8ac(self);
 return self;
}
