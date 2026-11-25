// FUN_overlay_15__021328e4 @ 0x021328e4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__021328e4 @ 0x021328e4 (thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
#pragma thumb off
extern void FUN_0206740c(const void *,unsigned),FUN_0205ef3c(const void *,unsigned,unsigned);
#pragma thumb on
extern void FUN_overlay_15__021355e0(void *),FUN_overlay_15__02137440(unsigned,unsigned);
void FUN_overlay_15__021328e4(void *task,unsigned unused){
    void **global=(void **)0x0213e8cc;
    FUN_0206740c(*global,1536);
    FUN_0205ef3c(*global,0,1536);
    FUN_overlay_15__021355e0(*global);
    FUN_overlay_15__02137440(1,(unsigned)task);
}
