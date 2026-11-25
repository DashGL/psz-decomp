// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI: notes/reference/resume2-root-20261112/input-020d80cc.json
// FUN_020d80cc @ 0x020d80cc (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *D_0211dba0[];
extern int FUN_020c71d8(void *);
extern void FUN_020c718c(void *);
void FUN_020d80cc(void *receiver){if(D_0211dba0[2]&&!FUN_020c71d8(D_0211dba0[2])){FUN_020c718c(D_0211dba0[2]);D_0211dba0[2]=0;}}
