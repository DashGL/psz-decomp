// FUN_overlay_18__02120f90 @ 0x02120f90 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__02120f90 @ 0x02120f90 (code/full extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI handle, selection-stack or
 * bounds wrapper; actual receiver and getter register flows preserved.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch393.md.
 */
extern unsigned int FUN_overlay_18__02120f74(void *,int);
unsigned int FUN_overlay_18__02120f90(void *self,unsigned int index) { if(index<=49)return FUN_overlay_18__02120f74(self,index);return 0; }
