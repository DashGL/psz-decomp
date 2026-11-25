// FUN_overlay_4__0211fa28 @ 0x0211fa28 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__0211fa28 @ 0x0211fa28 (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize receiver storage, counters and three sentinel handles.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,int);
int *FUN_overlay_4__0211fa28(int *p) {int i;p[0]=0;p[1]=-1;FUN_0200c938(p+2,12);p[5]=0;p[6]=0;p[7]=-1;p[8]=0;p[9]=0;p[10]=-1;for(i=0;i<3;i++)p[2+i]=-1;return p;}
