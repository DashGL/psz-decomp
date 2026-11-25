// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char pad_0[16]; unsigned int field_10; unsigned int field_14; } DAT_021384d0;
// FUN_overlay_12__02128108 @ 0x02128108 (code 0x3a, pool extent 0x40, thumb)
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Game record formatting, action scheduling or actor allocation.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch363.md.
 * Field identities remain provisional; stack input/output layout preserved.
 */
extern int FUN_overlay_12__02131ad0(int);extern void *FUN_02079114(void);extern void FUN_02079160(void *,const void *,int,int,unsigned int,int,int,int,int);
void FUN_overlay_12__02128108(void *unused,unsigned int value) { int handle=FUN_overlay_12__02131ad0(1);unsigned int pair[2];pair[0]=DAT_021384d0.field_10;pair[1]=DAT_021384d0.field_14;FUN_02079160(FUN_02079114(),pair,2,8,value,handle,-1,8,0); }
