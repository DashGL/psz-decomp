// FUN_overlay_13__0211e750 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_13__0211e750 @ 0x0211e750 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete CFG/pools and concrete helper ABI reviewed. */
extern void FUN_020c38f0(void *,int),FUN_020c3588(void *),FUN_020c3578(void *),FUN_0200c4d4(void *,int,int,void (*)(void *));void *FUN_overlay_13__0211e750(char *s){int i;*(unsigned *)s=0x0211fa68;for(i=0;i<4;i++){FUN_020c38f0(s+20+60*i,0);FUN_020c3588(s+20+60*i);}FUN_020c38f0(s+260,0);FUN_020c3588(s+260);FUN_020c3578(s+260);FUN_0200c4d4(s+20,4,60,FUN_020c3578);return s;}
