// FUN_overlay_22__021989ec @ 0x021989ec (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__021989ec @ 0x021989ec (code 0x50, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Choose component visibility for the requested active variant.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);extern void FUN_overlay_22__0219a070(void *,int);
void FUN_overlay_22__021989ec(unsigned char *self,int active,int variant){if(active==1){if(variant==1){FUN_02044570(*(void **)(self+4),7,0);FUN_02044570(*(void **)(self+4),8,0);FUN_02044570(*(void **)(self+4),9,0);FUN_02044570(*(void **)(self+4),10,1);FUN_02044570(*(void **)(self+4),11,1);}else FUN_overlay_22__0219a070(self,1);}else FUN_overlay_22__0219a070(self,0);}
