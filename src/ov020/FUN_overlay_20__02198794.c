// FUN_overlay_20__02198794 @ 0x02198794 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198794 @ 0x02198794 (code 0x3a, full extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete child lifecycle and record reset.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch542.md.
 */
typedef void *(*Destroy)(void *);extern void FUN_020ba8ac(void *);extern void FUN_overlay_20__021986fc(void *);
void FUN_overlay_20__02198794(void **self) { if(self[53]){void *object=((void **)self[53])[1];if(object){if(object)((Destroy)(*(unsigned **)object)[1])(object);((void **)self[53])[1]=0;}if(self[53]){FUN_020ba8ac(self[53]);self[53]=0;}} }
