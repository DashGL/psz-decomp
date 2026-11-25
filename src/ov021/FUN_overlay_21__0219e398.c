// FUN_overlay_21__0219e398 @ 0x0219e398 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219e398 @ 0x0219e398 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Reset actor track and clear two fields in four linked records.
 * Field identities remain provisional.
 */
extern void FUN_02035900(void *,int,int);
void FUN_overlay_21__0219e398(unsigned int *p) {int i;FUN_02035900((void *)p[1],0,4);for(i=0;i<4;i++) {*(int *)((char *)p[3]+i*188+28)=0;*(int *)((char *)p[3]+i*188+36)=0;}}
