// FUN_overlay_4__0212c724 @ 0x0212c724 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212c724 @ 0x0212c724 (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * When the holder is ready, initialize the display, load its companion resource, and enter state two.
 * Field identities remain provisional.
 */
extern int FUN_020c2c80(void *),FUN_020c247c(void *,const char *,int),FUN_020c2d94(int,int,int);extern void *FUN_020c1fc8(void),*FUN_0208bcf0(void);extern void FUN_overlay_4__0212c650(void *),FUN_overlay_4__0212c6f0(void *,int);void FUN_overlay_4__0212c724(int *self){if(FUN_020c2c80(*(void **)(self+1))){FUN_overlay_4__0212c650(self);self[2]=FUN_020c247c(FUN_020c1fc8(),(const char *)0x0212ec68,2);FUN_0208bcf0();FUN_020c2d94(2,1,0);FUN_overlay_4__0212c6f0(self,2);}}
