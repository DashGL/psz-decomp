// FUN_overlay_12__021275fc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 menu text; owner27b04 embedded2796c/table213dea0 slot12=>26310.
typedef struct Resource Resource;typedef struct Table{void *unused[3];char *(*text)(Resource *,int);} Table;struct Resource{Table *table;};
extern int FUN_020c3f90(char *,unsigned,const char *,...);
char *FUN_overlay_12__021275fc(char *self){Resource *r;
 switch(*(unsigned *)(self+24)){
 case 0:r=*(Resource **)(self+12);return r->table->text(r,12);
 case 1:r=*(Resource **)(self+12);return r->table->text(r,13);
 case 2:r=*(Resource **)(self+12);return r->table->text(r,14);
 case 3:r=*(Resource **)(self+12);return r->table->text(r,15);
 default:return 0;
 }
}
