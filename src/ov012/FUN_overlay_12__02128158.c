// FUN_overlay_12__02128158 @ 0x02128158 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128158 @ 0x02128158 (thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Text Text;
typedef struct Table{void *reserved;Text *(*destroy)(Text *);} Table;
struct Text{Table *table;};
extern void FUN_020ba8ac(void *);
void *FUN_overlay_12__02128158(char *self){
    Text *text;
    *(unsigned *)self=0x0213df30;
    text=*(Text **)(self+4);
    if(text){if(text)text->table->destroy(text);*(Text **)(self+4)=0;}
    return self;
}
