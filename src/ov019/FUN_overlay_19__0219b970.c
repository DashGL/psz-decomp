// FUN_overlay_19__0219b970 @ 0x0219b970 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b970 @ 0x0219b970 (code/full extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game state entry/update with child
 * flag consumption, vector snapshot and original repeated transition calls.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch399.md.
 */
extern int FUN_overlay_19__021983d4(void *);extern int FUN_overlay_19__021983f4(void *);extern void FUN_overlay_19__0219b9c4(void *);extern void FUN_overlay_19__0219ba30(void *);extern int FUN_02041474(void *,int);extern void FUN_02037924(void *);
void FUN_overlay_19__0219b970(int *self) { void *owner=(void *)self[1];if(FUN_overlay_19__021983d4(owner))FUN_overlay_19__0219b9c4(self);if(FUN_overlay_19__021983f4(owner))FUN_overlay_19__0219ba30(self);if(FUN_02041474((void *)self[1],0)){self[3]=(unsigned int)self[3]+1;if(self[3]==1)FUN_02037924((void *)self[2]);}if((unsigned int)self[3]>1)FUN_02037924((void *)self[2]); }
