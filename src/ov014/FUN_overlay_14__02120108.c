// FUN_overlay_14__02120108 @ 0x02120108 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120108 @ 0x02120108 (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay14 ROM reconstruction, 2026-11-05.
 * Configure optional controller or release embedded resources in sequence.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch365.md.
 */
extern void FUN_020c38f0(void *,int);extern void FUN_020c3588(void *);extern void FUN_overlay_14__021205c8(void *);extern void FUN_overlay_14__02120180(void *);extern void FUN_020c3578(void *);extern void *FUN_020c2b68(void *);
void * FUN_overlay_14__02120108(char *self) { FUN_020c38f0(self+4,0);FUN_020c3588(self+4);FUN_overlay_14__021205c8(self);FUN_overlay_14__02120180(self);FUN_020c3578(self+4);FUN_020c2b68(self);return self; }
