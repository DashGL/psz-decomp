// FUN_overlay_16__02120184 @ 0x02120184 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch60.json; original draft retained for referenced provenance.
// FUN_overlay_16__02120184 @ 0x02120184 (thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_020c38f0(void *,unsigned);
extern void *FUN_0208f068(void);
extern void FUN_0208efd4(void *,int);
void FUN_overlay_16__02120184(char *self){
    void *child=*(void **)(self+4),*manager;
    if(child){
        FUN_020c38f0(child,0);
        child=*(void **)(self+4);
        if(child){
            if(child)((void *(*)(void *))(*(unsigned **)child)[1])(child);
            *(void **)(self+4)=0;
        }
    }
    manager=FUN_0208f068();
    if(manager)FUN_0208efd4(manager,*(int *)(self+28));
}
