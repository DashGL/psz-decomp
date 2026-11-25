// FUN_overlay_22__02199108 @ 0x02199108 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__02199108 @ 0x02199108 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize display selection and choose animation based on current index.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219a05c(void *,int);
extern void FUN_overlay_22__021989ec(void *,int,int);
extern int FUN_overlay_22__0219a110(void *);
extern void FUN_overlay_22__0219a0f4(void *,int);
extern void FUN_overlay_22__02198994(void *,int);
void FUN_overlay_22__02199108(int *p) {p[19]=*((signed char *)p[2]+64);FUN_overlay_22__0219a05c(p,1);FUN_overlay_22__021989ec(p,1,1);if(FUN_overlay_22__0219a110(p)==18)FUN_overlay_22__0219a0f4(p,19);else FUN_overlay_22__02198994(p,16);}
