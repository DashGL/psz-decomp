// FUN_020e6b74 @ 0x020e6b74 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern unsigned char *FUN_020e961c(void);
extern void FUN_020e88f8(unsigned int);
extern void FUN_020e88a4(unsigned int);
void FUN_020e6b74(unsigned int a0){if(!FUN_020e961c()[0x15])FUN_020e88f8(a0);else FUN_020e88a4(a0);}
