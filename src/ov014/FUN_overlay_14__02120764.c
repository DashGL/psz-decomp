// FUN_overlay_14__02120764 @ 0x02120764 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120764 @ 0x02120764 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Copy descriptor availability, payload sections and trailing words.
 * Field identities remain provisional.
 */
extern void FUN_overlay_14__02120798(void *,const void *);
extern void FUN_overlay_14__021207ec(void *,const void *);
void FUN_overlay_14__02120764(unsigned char *p,const unsigned char *src) {p[3]=src[100];p[4]=src[86];FUN_overlay_14__02120798(p+8,src);FUN_overlay_14__021207ec(p+44,src+36);*(int *)(p+52)=*(const int *)(src+104);*(int *)(p+56)=*(const int *)(src+108);}
