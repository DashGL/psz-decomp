// FUN_overlay_21__0219bf44 @ 0x0219bf44 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219bf44 @ 0x0219bf44 (code 0x46, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Enable two model parts and release handles differing from shared defaults.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);
extern void FUN_02072724(void *,int);
extern void FUN_02075068(void *,int);
void FUN_overlay_21__0219bf44(int *p) {void *c=(void *)p[1];int *s=(int *)p[2];int d;s[7]=0;FUN_02044570(c,s[11],1);FUN_02044570(c,s[12],1);d=*(int *)0x020ed0a0;if(p[9]!=d){FUN_02072724(c,p[9]);p[9]=d;}d=*(int *)0x020ed09c;if(p[10]!=d){FUN_02075068(c,p[10]);p[10]=d;}}
