// FUN_overlay_12__0212c94c @ 0x0212c94c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c94c @ 0x0212c94c (code 0x28, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Draw optional text through shared display with coordinates and mode.
 * Field identities remain provisional.
 */
extern void FUN_020c3864(void *,const void *,int,int,int);
void FUN_overlay_12__0212c94c(const void *text,int x,int y,int mode) {char *p=*(char **)0x0213f2c8;if(p&&text)FUN_020c3864(p+4,text,x,y,mode);}
