// FUN_overlay_12__02128f20 @ 0x02128f20 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 concrete two-class menu lifecycle; slot12 targets284d8/29390.
typedef struct Child Child;typedef struct Table{void *unused[3];Child *(*destroy)(Child *);} Table;struct Child{Table *table;};
extern void FUN_02079144(void),FUN_020ba8ac(void *);
extern void *FUN_overlay_12__02128158(void *),*FUN_overlay_12__02128d8c(void *);
void *FUN_overlay_12__02128f20(char *self){
 Child *p;*(unsigned *)self=0x0213dfa4;p=*(Child **)(self+24);
 if(p){if(p)p->table->destroy(p);*(Child **)(self+24)=0;}
 FUN_02079144();FUN_overlay_12__02128158(self+48);FUN_overlay_12__02128d8c(self+28);
 FUN_020ba8ac(self);
 return self;
}
