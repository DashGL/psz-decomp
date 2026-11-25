// FUN_overlay_12__02121650 @ 0x02121650 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121650 @ 0x02121650 (thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete destructor and concrete helper ABIs. */
extern void *FUN_0208f068(void);extern void FUN_0208efd4(void *,int),FUN_020ba940(void *);extern void *FUN_overlay_12__0211eeac(void *),*FUN_overlay_12__0211f2bc(void *),*FUN_overlay_12__021207c4(void *),*FUN_overlay_12__02131dd4(void *);void *FUN_overlay_12__02121650(char *s){void *p;*(unsigned *)s=0x0213d4b8;if(*(int *)(s+3252)!=-1){p=FUN_0208f068();if(p)FUN_0208efd4(p,*(int *)(s+3252));}FUN_overlay_12__0211eeac(s+3124);FUN_overlay_12__0211f2bc(s+72);FUN_overlay_12__021207c4(s+64);FUN_overlay_12__02131dd4(s);FUN_020ba940(s); return s;}
