// FUN_overlay_16__0211e640 @ 0x0211e640 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211e640 @ 0x0211e640 (arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb -O4,s
extern void FUN_02000b9c(const void *);
extern int FUN_overlay_16__0211e930(void *,void *,unsigned);
int FUN_overlay_16__0211e640(void *self,void *stream,unsigned count){
    FUN_02000b9c((void *)0x02000c6c);
    return FUN_overlay_16__0211e930(self,stream,count);
}
