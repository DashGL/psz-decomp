// FUN_overlay_12__02125e8c @ 0x02125e8c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 dialog teardown; resource slot8 union: receiver-getter2630c or receiver-ignoring28d4c.
typedef struct Resource Resource;typedef struct Table{void *unused[2];void *(*surface)(Resource *);} Table;struct Resource{Table *table;};
extern void FUN_020c3900(void *,unsigned,unsigned,unsigned,unsigned),FUN_overlay_12__02131dd4(void *),FUN_020ba940(void *);
void *FUN_overlay_12__02125e8c(char *self){Resource *resource;void *surface;*(unsigned *)self=0x0213dd78;resource=*(Resource **)(self+92);surface=resource->table->surface(resource);if(surface)FUN_020c3900(surface,40,49,170,90);FUN_overlay_12__02131dd4(self);return self;}
