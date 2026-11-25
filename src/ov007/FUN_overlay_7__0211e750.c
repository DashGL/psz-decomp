// FUN_overlay_7__0211e750 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_7__0211e750 @ 0x0211e750 (0x30, Thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// Release selected singleton and owned child, restore eight-byte descriptor, clear trailing state.
extern void FUN_overlay_7__0211f364(int);extern void *FUN_020b2234(void *,const void *);extern unsigned int data_0211fce4[];
void FUN_overlay_7__0211e750(char *self){void *p;FUN_overlay_7__0211f364(*(int *)self);p=*(void **)(self+4);if(p){if(p)((void (*)(void *))(*(void ***)p)[5])(p);*(void **)(self+4)=0;}FUN_020b2234(self+8,data_0211fce4);*(int *)(self+16)=0;}
