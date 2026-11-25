// FUN_overlay_20__02198f90 @ 0x02198f90 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198f90 @ 0x02198f90 (code 0x2c, full extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete child lifecycle and record reset.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch542.md.
 */
typedef void *(*Destroy)(void *);extern void FUN_020ba8ac(void *);extern void FUN_overlay_20__021986fc(void *);
void FUN_overlay_20__02198f90(void **self) { void *object=((void **)self[53])[1];if(object){if(object)((Destroy)(*(unsigned **)object)[1])(object);((void **)self[53])[1]=0;}((unsigned *)self[53])[2]=*(unsigned *)0x020fc988; }
