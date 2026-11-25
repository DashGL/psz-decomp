// FUN_overlay_17__02120f90 @ 0x02120f90 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02120f90 @ 0x02120f90 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Subtract qualifying-entry count from stored signed entry count.
 * Field identities remain provisional.
 */
extern char *FUN_02086e3c(void);
extern int FUN_020b0494(void *);
int FUN_overlay_17__02120f90(void) {char *p=FUN_02086e3c()+16;int count=*(short *)(p+8);return count-FUN_020b0494(p);}
