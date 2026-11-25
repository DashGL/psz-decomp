// FUN_020e7b3c @ 0x020e7b3c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern unsigned char *FUN_020e961c(void);
extern void FUN_020e7c40(void);
extern void FUN_020e7a8c(int);
void FUN_020e7b3c(void){if(FUN_020e961c()[0x15]!=2&&FUN_020e961c()[0x15]!=3){FUN_020e7c40();FUN_020e7a8c(1);}}
