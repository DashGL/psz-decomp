// FUN_0200d0e4 @ 0x0200d0e4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_02101dd4[];
void FUN_0200d0e4(int x){D_02101dd4[2]=(unsigned int)x*1000u;}
