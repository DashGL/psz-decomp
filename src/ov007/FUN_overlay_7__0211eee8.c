// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_overlay_7__0211eee8 @ 0x0211eee8 (0x4a, Thumb)
// Resolve selected entry through virtual receiver+ID call and emit8-byte event in manager state5.
extern "C" { extern int FUN_overlay_7__0211e694(int);extern void *FUN_0200d16c(void); }
struct O_FUN_overlay_7__0211eee8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual char *v6(int); };
extern "C" int FUN_overlay_7__0211eee8(O_FUN_overlay_7__0211eee8 *o,char *out){char *self=(char *)o;char *p;int id,kind;if(*(int *)(self+96)>0){id=*(int *)(self+4);p=o->v6(id);if(p){kind=FUN_overlay_7__0211e694(id);if(*(int *)((char *)FUN_0200d16c()+16)==5){if(!*(signed char *)p||kind==4){*(short *)out=5;*(short *)(out+2)=1;*(int *)(out+4)=*(int *)(self+4);return 1;}}}}return 0;}
