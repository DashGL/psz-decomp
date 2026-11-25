// FUN_overlay_12__021340d0 @ 0x021340d0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021340d0 @ 0x021340d0 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release receiver resource or shared manager mode according to ownership flag.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,int *);
extern void FUN_02088cac(void);
extern void FUN_020c242c(void *,int);
void FUN_overlay_12__021340d0(int *p) {if(p[88])FUN_020c2624(FUN_020c1fc8(),p+18);else {FUN_02088cac();FUN_020c242c(FUN_020c1fc8(),2);}}
