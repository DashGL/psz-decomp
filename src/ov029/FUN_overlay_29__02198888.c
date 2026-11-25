// FUN_overlay_29__02198888 @ 0x02198888 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198888 @ 0x02198888 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Dispatch one of three receiver effects based on selector.
 * Field identities remain provisional.
 */
extern void FUN_overlay_29__02198afc(void *);
extern void FUN_overlay_29__02198b90(void *);
extern void FUN_overlay_29__02198c10(void *);
void FUN_overlay_29__02198888(void *p,int kind) {switch(kind){case 2:FUN_overlay_29__02198afc(p);break;case 1:FUN_overlay_29__02198b90(p);break;case 3:FUN_overlay_29__02198c10(p);break;}}
