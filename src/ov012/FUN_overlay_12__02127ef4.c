// FUN_overlay_12__02127ef4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__02127ef4 @ 0x02127ef4 (thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG/pools and concrete ABI reviewed, text slot4 proven020c357c. */
extern void *FUN_0208f068(void);extern void FUN_0208efd4(void *,int),FUN_overlay_12__021279fc(void *),FUN_0200c4d4(void *,int,int,void (*)(void *)),FUN_020c2b68(void *),FUN_020ba8ac(void *);void *FUN_overlay_12__02127ef4(char *s){void *manager,*p;*(unsigned *)s=0x0213dea0;manager=FUN_0208f068();if(manager&&*(int *)(s+4)>=0){FUN_0208efd4(manager,*(int *)(s+4));*(int *)(s+4)=-1;}p=*(void **)(s+16);if(p){if(p)((void *(*)(void *))(*(void ***)p)[1])(p);*(void **)(s+16)=0;}FUN_overlay_12__021279fc(s);FUN_0200c4d4(s+20,2,4,FUN_020c2b68);FUN_020ba8ac(s);return s;}
