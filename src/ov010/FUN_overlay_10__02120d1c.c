// FUN_overlay_10__02120d1c @ 0x02120d1c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120d1c @ 0x02120d1c (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Set receiver action flag and forward third incoming value to singleton action while idle.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_10__0211ec64(void);
extern int FUN_overlay_10__0211f328(void *,unsigned int);
int FUN_overlay_10__02120d1c(unsigned int *p,unsigned int unused,unsigned int value) {if(!p[1]){p[4]=1;return FUN_overlay_10__0211f328(FUN_overlay_10__0211ec64(),value);}return 0;}
