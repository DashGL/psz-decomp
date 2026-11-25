// FUN_overlay_4__0211ee84 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__0211ee84 @ 0x0211ee84 (0x48, Thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// Reset vtable, disable/release child, destruct three44-byte elements in reverse order; callback takes one receiver.
extern unsigned int data_0212e6b4[];extern void FUN_020c38f0(void *,int);extern void *FUN_overlay_4__0211f108(void *);extern void FUN_0200c4d4(void *,unsigned int,unsigned int,void *(*)(void *));
void *FUN_overlay_4__0211ee84(char *self){void *p;*(void **)self=data_0212e6b4;FUN_020c38f0(*(void **)(self+136),0);p=*(void **)(self+136);if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*(void **)(self+136)=0;}FUN_0200c4d4(self+4,3,44,FUN_overlay_4__0211f108);return self;}
