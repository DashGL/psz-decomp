// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02128258 @ 0x02128258 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128258 @ 0x02128258 (thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Text Text;
typedef struct Table{void *reserved;Text *(*destroy)(Text *);} Table;
struct Text{Table *table;};
extern void FUN_020c38f0(void *,int);
#pragma thumb off
extern void *FUN_0205e090(void);
extern void FUN_0206557c(unsigned,void *,unsigned);
#pragma thumb on
void FUN_overlay_12__02128258(char *self,void *unused_record){
    Text *text=*(Text **)(self+4);
    if(text){
        FUN_020c38f0(text,0);
        text=*(Text **)(self+4);
        if(text){if(text)text->table->destroy(text);*(Text **)(self+4)=0;}
    }
    FUN_0206557c(0,FUN_0205e090(),2048);
}

// Caller/callee ABI evidence: Already matched draw caller2128fe4 explicitly forms self+28 in r1 before direct text cleanup at21290fc; callee ignores record.
