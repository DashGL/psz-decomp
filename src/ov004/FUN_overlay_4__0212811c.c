// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// flags: -O4,s
// FUN_overlay_4__0212811c @ 0x0212811c (0x44, Thumb)
// Release both children then three registry slots; returns receiver.
extern void *FUN_020c1fc8(void);extern void FUN_020c2624(void *,void *);
void *FUN_overlay_4__0212811c(char *self){int i;void *p=*(void **)self;if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*(void **)self=0;}p=*(void **)(self+4);if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*(void **)(self+4)=0;}for(i=0;i<3;i++)FUN_020c2624(FUN_020c1fc8(),self+28+4*i);return self;}
