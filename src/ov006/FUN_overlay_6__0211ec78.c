// FUN_overlay_6__0211ec78 @ 0x0211ec78 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211ec78 @ 0x0211ec78 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize object state, enable flag and clear embedded storage.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,unsigned int);
extern void *FUN_02001540(void *,int,unsigned int);
int *FUN_overlay_6__0211ec78(int *p) {p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=1;FUN_0200c938(p+8,640);p[168]=0;FUN_02001540(p+8,0,640);return p;}
