// FUN_0200d024 @ 0x0200d024 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_0200d16c(void);
extern int FUN_0200d418(int);
extern void FUN_02068450(void);
extern int D_02101dd4[];
void FUN_0200d024(int a0){if(!FUN_0200d418(FUN_0200d16c())){do{FUN_02068450();}while(a0>D_02101dd4[1]);D_02101dd4[1]=0;}}
