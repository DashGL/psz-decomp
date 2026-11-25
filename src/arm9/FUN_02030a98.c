// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned char field_0; } DAT_02108c50;
// FUN_02030a98 @ 0x02030a98 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/02030a98.txt.
 */
extern void *FUN_02030938(void *,const signed char *);
void *FUN_02030a98(void **s,const signed char *arg) { if(arg[0]==0) { if(s[1]) return FUN_02030938(s[1],arg); } else { if(s[0]) return FUN_02030938(s[0],arg); } DAT_02108c50.field_0=0; return (void *)0x02108c50; }
