// FUN_overlay_31__02198d78 @ 0x02198d78 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198d78 @ 0x02198d78 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay31 ROM reconstruction, 2026-11-05.
 * Game record formatting, action scheduling or actor allocation.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch363.md.
 * Field identities remain provisional; stack input/output layout preserved.
 */
extern int FUN_02040d2c(void *,int);extern int FUN_overlay_31__0219a638(void *,int);extern void FUN_02040c0c(void *,int,int,int,unsigned int);
void FUN_overlay_31__02198d78(int *self) { int *owner=(int *)self[1];int slot=owner[56];if(FUN_02040d2c(owner,slot) && !FUN_overlay_31__0219a638((void *)self[2],1))FUN_02040c0c(owner,slot,0,4096,0); }
