// FUN_020db7f8 @ 0x020db7f8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern char *FUN_020dac74(unsigned int);
extern int FUN_020db71c(char *);
int FUN_020db7f8(void){if(FUN_020db71c(FUN_020dac74(1)+10)==1)return 18;return 17;}
