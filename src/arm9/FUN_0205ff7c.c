// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { char * field_0; } DAT_021180ac;
// FUN_0205ff7c @ 0x0205ff7c (inventory code 0x50, arm)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 226.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b226/0205ff7c.txt.
 */
extern int FUN_02061278(unsigned int);int FUN_0205ff7c(unsigned int id){char *s=DAT_021180ac.field_0;if(s&&FUN_02061278(id)){s=DAT_021180ac.field_0;if(*(unsigned int *)(s+0x14e8+4*(id-1))==7)return 1;}return 0;}
