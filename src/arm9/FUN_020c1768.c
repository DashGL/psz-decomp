// FUN_020c1768 @ 0x020c1768 (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// USA ARM9: release resource arrays and restore the context heap selector.
extern void FUN_0200f0d0(void *);
extern void FUN_020ba8b4(void *);
extern void *FUN_0200eb60(void *);
#define CONTEXT (*(char **)0x0211c85c)
#define FIELD(o) (*(void **)(CONTEXT+(o)))
void FUN_020c1768(void) {
    int i;
    if(FIELD(0x10)) {
        for(i=0;i<*(int *)(CONTEXT+0xc);i++) {
            FUN_0200f0d0(((void **)FIELD(0x14))[i]);
            if(((void **)FIELD(0x10))[i]) { FUN_020ba8b4(((void **)FIELD(0x10))[i]); ((void **)FIELD(0x10))[i]=0; }
        }
        if(FIELD(0x1c)) { FUN_020ba8b4(FIELD(0x1c)); FIELD(0x1c)=0; }
        if(FIELD(0x14)) { FUN_020ba8b4(FIELD(0x14)); FIELD(0x14)=0; }
        if(FIELD(0x10)) { FUN_020ba8b4(FIELD(0x10)); FIELD(0x10)=0; }
        *(int *)(CONTEXT+0xc)=0;
    }
    if(FIELD(0xb4)) { FUN_020ba8b4(FIELD(0xb4)); FIELD(0xb4)=0; }
    FUN_0200eb60(CONTEXT+0x20);
}
