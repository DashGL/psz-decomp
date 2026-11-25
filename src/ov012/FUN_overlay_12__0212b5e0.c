// FUN_overlay_12__0212b5e0 @ 0x0212b5e0 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212b5e0 @ 0x0212b5e0 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Four-direction input handling for embedded selection state. */
extern int FUN_020bbf94(int);
extern void FUN_overlay_12__0212b6bc(void *),FUN_overlay_12__0212b6ec(void *),FUN_overlay_12__0212b684(void *),FUN_overlay_12__0212b648(void *);
void FUN_overlay_12__0212b5e0(int *self){if(self[16]==2&&self[9]){if(FUN_020bbf94(16))FUN_overlay_12__0212b6bc(self+108);else if(FUN_020bbf94(32))FUN_overlay_12__0212b6ec(self+108);else if(FUN_020bbf94(128))FUN_overlay_12__0212b684(self+108);else if(FUN_020bbf94(64))FUN_overlay_12__0212b648(self+108);}}
