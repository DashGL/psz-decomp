// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// flags: -O4,s
// check: 2.0/sp2p3 full_extent=0x24 exact_bytes=0 bad_relocs=0
// Passed arguments reconstructed from dedicated ROM preparation; unused inputs stay explicit.
// Proof: notes/sessions/matching-resume2-2026-11-12-arguments.md
extern void FUN_020d9840(void *);
extern void FUN_020d9074(void *);
extern void FUN_020d80cc(void *);
extern void FUN_020c6de0(void *);
void FUN_020d9890(void **self){FUN_020d9840(self);FUN_020d9074(self);FUN_020d80cc(self);if(self[1])FUN_020c6de0(self[1]);self[1]=0;}
