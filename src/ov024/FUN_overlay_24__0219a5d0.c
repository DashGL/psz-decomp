// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// FUN_overlay_24__0219a5d0 @ 0x0219a5d0
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *); extern int D_0219c5e8[];
void * FUN_overlay_24__0219a5d0(void **self) { void *child;self[0]=(void *)0x0219c604;child=self[12];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[12]=0;}child=self[13];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[13]=0;}child=self[14];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[14]=0;}child=self[15];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[15]=0;}child=self[16];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[16]=0;}child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}D_0219c5e8[1]=-1;FUN_02037848(self);FUN_020ba8ac(self);return self; }
