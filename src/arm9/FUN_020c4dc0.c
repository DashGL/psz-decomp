// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// flags: -O4,s
// check: 2.0/sp2p3 full_extent=0x18 exact_bytes=0 bad_relocs=0
// Passed arguments reconstructed from dedicated ROM preparation; unused inputs stay explicit.
// Proof: notes/sessions/matching-resume2-2026-11-12-arguments.md
extern void FUN_020c4dd8(void *,unsigned int);
void FUN_020c4dc0(unsigned int arg) { void *manager=*(void **)0x0211ceec;if(manager)FUN_020c4dd8(manager,arg); }
