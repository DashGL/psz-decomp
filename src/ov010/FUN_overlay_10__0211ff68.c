// FUN_overlay_10__0211ff68 @ 0x0211ff68 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211ff68 @ 0x0211ff68 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Render supplied text through embedded receiver, or disable it for null text.
 * Field identities remain provisional.
 */
extern void FUN_020c3788(void *,const char *,int,int,int);
extern void FUN_020c38f0(void *,unsigned int);
void FUN_overlay_10__0211ff68(char *p,const char *text,int x,int y) {if(text)FUN_020c3788(p+8,text,x,y,2);else FUN_020c38f0(p+8,0);}
