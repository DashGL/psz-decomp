// FUN_overlay_27__02199a48 @ 0x02199a48 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_27__02199a48 @ 0x02199a48 (code 0x4a, pool extent 0x4a, thumb)
// check: vers=2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Release two handles after active child effects complete and clear pending flag.
 * Field identities remain provisional.
 */
extern int FUN_02075090(void *);
extern void FUN_02075068(void *,int);
extern void FUN_02072724(void *,int);
void FUN_overlay_27__02199a48(int *p) {if(p[53]&&FUN_02075090(p)){FUN_02075068(p,p[55]);p[55]=-1;FUN_02072724(p,p[54]);p[54]=-1;p[53]=0;}}
