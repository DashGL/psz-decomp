// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_020c5018 @ 0x020c5018
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct resource-copy task; on failure invoke proven self-only flag setter in vtable slot8.
 * Evidence: scratch/coverage-root/batch17/020c5018.txt.
 */
extern "C" { extern void *FUN_020b9cb0(void *,void *),*FUN_020ba8a0(unsigned int);
extern unsigned int FUN_020c4edc(int);
extern void FUN_020655d8(const void *,void *,unsigned int); }
struct O_FUN_020c5018 { virtual void v0(); virtual void v1(); virtual void v2(); };
extern "C" void *FUN_020c5018(O_FUN_020c5018 *o,int index,const void *source,unsigned int a,void *parent,unsigned int b){unsigned char *self=(unsigned char *)o;int size;FUN_020b9cb0(self,parent);*(unsigned int *)self=0x020fcba0;*(int *)(self+0x20)=index;*(unsigned int *)(self+0x24)=2;*(void **)(self+0x28)=0;*(unsigned int *)(self+0x2c)=0;*(unsigned int *)(self+0x30)=a;*(unsigned int *)(self+0x34)=b;size=(int)FUN_020c4edc(*(int *)(self+0x20));if(size>0){*(void **)(self+0x28)=FUN_020ba8a0((unsigned int)size);if(*(void **)(self+0x28)){FUN_020655d8(source,*(void **)(self+0x28),(unsigned int)size);*(unsigned int *)(self+0x24)=0;return self;}}o->v2();return self;}
