// FUN_overlay_4__02128c74 @ 0x02128c74 (0x90, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02128c74 @ 0x02128c74 (0x90, Thumb)
// check: vers=2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// Copy active session status and five packed fields individually, preserving each original read/write.
typedef struct {unsigned int a:7,b:4,c:5,d:8,e:8;} Bits;extern void *FUN_02086e3c(void),*FUN_020870c4(void *);extern int FUN_02087138(void *);
void FUN_overlay_4__02128c74(char *self){char *p;if(FUN_02087138(FUN_02086e3c())){p=FUN_020870c4(FUN_02086e3c());*(unsigned int *)(self+28)=*(unsigned char *)(p+86);*(unsigned int *)(self+32)=*(unsigned int *)(p+104);((Bits *)(self+36))->a=((Bits *)(p+108))->a;((Bits *)(self+36))->b=((Bits *)(p+108))->b;((Bits *)(self+36))->c=((Bits *)(p+108))->c;((Bits *)(self+36))->d=((Bits *)(p+108))->d;((Bits *)(self+36))->e=((Bits *)(p+108))->e;}}
