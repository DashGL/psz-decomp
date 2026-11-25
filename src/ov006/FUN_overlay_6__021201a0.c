// FUN_overlay_6__021201a0 @ 0x021201a0 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch62.json; original draft retained for referenced provenance.
// FUN_overlay_6__021201a0 @ 0x021201a0 (0x6a, Thumb)
// check: vers=2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// Update nested bit flag, propagate value to optional object, and toggle final visibility bit.
extern void FUN_0204fbec(void *,int);
void FUN_overlay_6__021201a0(char *self,int mode,int value,int visible){char *p=*(char **)(self+752);if(p){p=*(char **)(p+140);if(p){if(mode==1)*(unsigned int *)(p+24)|=1;else *(unsigned int *)(p+24)&=~1U;}}p=*(char **)(self+880);if(p)FUN_0204fbec(p,value);p=*(char **)(self+884);if(p){if(visible)*(unsigned int *)(p+228)&=~1U;else *(unsigned int *)(p+228)|=1;}}
