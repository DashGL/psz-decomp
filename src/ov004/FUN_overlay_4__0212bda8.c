// FUN_overlay_4__0212bda8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__0212bda8 @ 0x0212bda8 (0x38, Thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// Release registry slot then both owned children; virtual calls consume child receiver only.
extern void *FUN_020c1fc8(void);extern void FUN_020c2624(void *,void *);
void *FUN_overlay_4__0212bda8(char *self){void *p;FUN_020c2624(FUN_020c1fc8(),self+28);p=*(void **)self;if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*(void **)self=0;}p=*(void **)(self+4);if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*(void **)(self+4)=0;}return self;}
