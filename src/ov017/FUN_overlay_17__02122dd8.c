// FUN_overlay_17__02122dd8 @ 0x02122dd8 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_17__02122dd8 @ 0x02122dd8 (code 0x5a, full extent 0x64, thumb)
// check: vers=2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch517.md.
 */
extern void FUN_overlay_17__02122828(void *);extern int FUN_overlay_17__02122d18(void *);
int FUN_overlay_17__02122dd8(char *self) { switch(*(signed char *)(self+0x9d3c)){case -109:FUN_overlay_17__02122828(self);*(int *)(self+0x9d40)=FUN_overlay_17__02122d18(self);break;case 43:FUN_overlay_17__02122828(self);*(int *)(self+0x9d40)=FUN_overlay_17__02122d18(self);break;case 45:FUN_overlay_17__02122828(self);*(int *)(self+0x9d40)=-FUN_overlay_17__02122d18(self);break;default:*(int *)(self+0x9d40)=FUN_overlay_17__02122d18(self);break;}return *(int *)(self+0x9d40); }
