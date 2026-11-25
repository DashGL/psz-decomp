// FUN_overlay_4__0212c5ac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__0212c5ac @ 0x0212c5ac (0x5c, Thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// Close active child, release registry and both allocations with their distinct destruction paths.
extern void FUN_0208bdb8(void),FUN_020c2c4c(void *),FUN_020c2624(void *,void *),FUN_020c2b68(void *),FUN_020ba8ac(void *);extern int FUN_020c2c80(void *);extern void *FUN_020c1fc8(void);
void *FUN_overlay_4__0212c5ac(char *self){void *p;FUN_0208bdb8();if(FUN_020c2c80(*(void **)(self+4)))FUN_020c2c4c(*(void **)(self+4));if(*(int *)(self+8)!=-1)FUN_020c2624(FUN_020c1fc8(),self+8);p=*(void **)self;if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*(void **)self=0;}p=*(void **)(self+4);if(p){if(p){FUN_020c2b68(p);FUN_020ba8ac(p);}*(void **)(self+4)=0;}return self;}
