// FUN_overlay_12__0212c8f8 @ 0x0212c8f8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c8f8 @ 0x0212c8f8 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Forward text and three scalar arguments to optional singleton display receiver.
 * Field identities remain provisional.
 */
extern void FUN_020c3788(void *,const char *,int,int,int);
void FUN_overlay_12__0212c8f8(const char *text,int x,int y,int mode) {char *p=*(char **)0x0213f2c8;if(p)FUN_020c3788(p+4,text,x,y,mode);}
