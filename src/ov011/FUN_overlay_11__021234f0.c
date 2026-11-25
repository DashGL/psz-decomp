// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// FUN_overlay_11__021234f0 @ 0x021234f0, extent 0x80.
// Constructs a two-entry UI selection; language state selects entry variant.
typedef struct { short a,b; int c; } Entry;
extern void *FUN_020b1fd8(void *, int);
extern void FUN_020b236c(void *, int, Entry *);
extern void *FUN_02093c00(int);
extern void *FUN_02093b2c(void *, int, int);
extern void FUN_020b2330(void *, void *);
extern char DAT_02124a40[];
extern signed char DAT_0211a208[];
void *FUN_overlay_11__021234f0(void *p) {
 Entry a,b;
 void *q;
 FUN_020b1fd8(p,2);
 *(void **)p=DAT_02124a40;
 *(int *)((char *)p+0x6c)=0;
 a.a=12;a.b=3;
 FUN_020b236c(p,0,&a);
 b.a=7;b.b=2;
 FUN_020b236c(p,1,&b);
 q=FUN_02093c00(0);
 if(q){
 if(DAT_0211a208[1]!=1) FUN_020b2330(p,FUN_02093b2c(q,2,0));
 else FUN_020b2330(p,FUN_02093b2c(q,2,2));
 }
 return p;
}
