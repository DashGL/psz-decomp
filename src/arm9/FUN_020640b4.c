// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets; argument/return contract corrected.
// Return contract corrected from explicit producer and consumed caller evidence.
// FUN_020640b4 @ 0x020640b4 (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int *D_021180a0[];
extern int FUN_02063ed0(int);
int FUN_020640b4(int a0){*(int *)((char *)D_021180a0[3]+0x1320)=1;return FUN_02063ed0(a0);}
