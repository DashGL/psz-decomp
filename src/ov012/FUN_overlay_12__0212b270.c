// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { int * field_0; } DAT_0213f2c0;
// FUN_overlay_12__0212b270 @ 0x0212b270 (code 0x60, pool extent 0x68, thumb)
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Coordinate message subject selection and asynchronous action transitions.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch343.md.
 * Field identities remain provisional; all explicit stack inputs retained.
 */
extern int FUN_overlay_12__02129d10(const void *);
extern int FUN_02084cc0(void *);
extern void FUN_overlay_12__02129e08(int);
void FUN_overlay_12__0212b270(const short *message) { int *self=DAT_0213f2c0.field_0;int subject,sender;if(self && FUN_overlay_12__02129d10(message)){subject=message[3];sender=message[2];if(subject==FUN_02084cc0((void *)0x0211a51c) && sender!=FUN_02084cc0((void *)0x0211a51c)){if(self[16]==1 && self[111]==-1){self[112]=1;self[111]=sender;}else if(self[111]!=sender)FUN_overlay_12__02129e08(sender);}} }
