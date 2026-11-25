// FUN_overlay_6__0211ef70 @ 0x0211ef70 (0x8e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211ef70 @ 0x0211ef70 (0x8e, Thumb)
// check: vers=2.0/sp2p3 target=0x8e candidate=0x8e words=0 exact_bytes=0 bad_relocs=0
// Parse optional parameters independently for nested flag, shared object value and final visibility flag.
extern int FUN_02005898(const char *);extern void FUN_0204fbec(void *,int);
void FUN_overlay_6__0211ef70(char *self){char *p=*(char **)(*(char **)(self+672)+752);if(p){p=*(char **)(p+140);if(p){if(FUN_02005898(self+96)==1)*(unsigned int *)(p+24)|=1;else *(unsigned int *)(p+24)&=~1U;}}p=*(char **)(*(char **)(self+672)+880);if(p)FUN_0204fbec(p,FUN_02005898(self+96));p=*(char **)(*(char **)(self+672)+884);if(p){if(FUN_02005898(self+96))*(unsigned int *)(p+228)&=~1U;else *(unsigned int *)(p+228)|=1;}}
