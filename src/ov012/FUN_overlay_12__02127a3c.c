// FUN_overlay_12__02127a3c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__02127a3c @ 0x02127a3c (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete teardown/recreation; text class slot4 resolves to receiver-only020c357c. */
typedef struct {int words[8];} Config;extern void *FUN_020ba894(unsigned),*FUN_020c3564(void *);extern void FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int);void FUN_overlay_12__02127a3c(char *s){void *p=*(void **)(s+16);Config config;if(p){if(p)((void *(*)(void *))(*(void ***)p)[1])(p);*(void **)(s+16)=0;}p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)(s+16)=p;if(p){config=*(Config *)0x02138470;FUN_020c35d4(*(void **)(s+16),&config);FUN_020c38f0(*(void **)(s+16),0);}}
