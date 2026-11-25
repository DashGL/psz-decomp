// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets; argument/return contract corrected.
// Explicit extra argument evidence: notes/reference/resume2-root-20261112/extra-input-020e05d8.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// flags: -O4,s
// check: 2.0/sp2p3 full_extent=0x24 exact_bytes=0 bad_relocs=0
// Passed arguments reconstructed from dedicated ROM preparation; unused inputs stay explicit.
// Proof: notes/sessions/matching-resume2-2026-11-12-arguments.md
extern char *FUN_020e0580(void *);
extern void (*DAT_0211dc94)(int,void *,unsigned int);
void FUN_020e05d8(int type,void *ptr,int mode){if(ptr){char *base=FUN_020e0580(ptr);DAT_0211dc94(type,base,*(unsigned int *)(base+4)+32);}}
