// FUN_overlay_6__02120170 @ 0x02120170 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_6__02120170 @ 0x02120170 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Reset embedded particle group then set its shared parameter.
 * Field identities remain provisional.
 */
extern void FUN_overlay_6__0211eab8(void *);
extern void FUN_overlay_6__0211eb40(void *,unsigned int);
void FUN_overlay_6__02120170(char *self,unsigned int value) {FUN_overlay_6__0211eab8(self+920);FUN_overlay_6__0211eb40(self+920,value);}
