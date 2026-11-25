// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned char pad_0[4]; char * field_4; } DAT_02110b00;
// FUN_02052f9c @ 0x02052f9c (inventory code 0x44, arm)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/02052f9c.txt.
 */
extern int FUN_02052f80(void); extern void FUN_020673d4(void *,int);
int FUN_02052f9c(void) { int r=FUN_02052f80(); if(r) return r; FUN_020673d4(*(void **)(DAT_02110b00.field_4+4),2); return **(unsigned short **)(DAT_02110b00.field_4+4)<=1 ? 3:0; }
