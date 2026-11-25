// FUN_overlay_12__0212a6e8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212a6e8 @ 0x0212a6e8 (thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full extent and concrete helper ABI reviewed. */
extern char G_0213F2C0[];
extern void FUN_020ba940(void *);extern void FUN_02079144(void),FUN_overlay_12__0212a458(void),FUN_overlay_12__02131b98(void),FUN_overlay_12__0212c84c(void),FUN_overlay_12__0212c700(void),FUN_overlay_12__02134868(int);extern void *FUN_overlay_12__0212a4d4(void *),*FUN_0209e1f8(void *),*FUN_overlay_12__02131dd4(void *);void *FUN_overlay_12__0212a6e8(char *s){*(unsigned *)s=0x0213e13c;FUN_02079144();FUN_overlay_12__0212a458();FUN_overlay_12__02131b98();FUN_overlay_12__0212c84c();FUN_overlay_12__0212c700();if(*(void **)G_0213F2C0==s)*(void **)G_0213F2C0=0;FUN_overlay_12__02134868(1);FUN_overlay_12__0212a4d4(s+504);FUN_0209e1f8(s+92);FUN_overlay_12__02131dd4(s);FUN_020ba940(s);return s;}
