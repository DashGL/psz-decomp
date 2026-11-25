// FUN_020e1a08 @ 0x020e1a08 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020e1778(int);
void FUN_020e1a08(void *a0,int *a1){int v=a1[1];if(v!=0x603&&v!=0x901&&v!=0xb01)FUN_020e1778(3);}
