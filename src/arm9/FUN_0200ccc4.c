// FUN_0200ccc4 @ 0x0200ccc4 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// FUN_0200ccc4 @ 0x0200ccc4 (0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0201cbf0(void);
extern void FUN_0205cc88(void);
extern void FUN_0205e5a4(void);
extern void FUN_0205e744(void);
extern void FUN_0200ccfc(void);
extern void FUN_020c308c(void);

void FUN_0200ccc4(void) {
    FUN_0201cbf0();
    *(volatile unsigned short *)0x04000304 = (*(volatile unsigned short *)0x04000304 & ~0x020e) | 0x020e;
    FUN_0205cc88();
    FUN_0205e5a4();
    FUN_0205e744();
    FUN_0200ccfc();
    FUN_020c308c();
}
