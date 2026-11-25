// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__0212a694 @ 0x0212a694 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete destructor and concrete helper ABIs. */
extern void * D_0213f2c0;
extern void FUN_02079144(void),FUN_overlay_12__0212a458(void),FUN_overlay_12__02131b98(void),FUN_overlay_12__0212c84c(void),FUN_overlay_12__0212c700(void),FUN_overlay_12__02134868(int);extern void *FUN_overlay_12__0212a4d4(void *),*FUN_0209e1f8(void *),*FUN_overlay_12__02131dd4(void *);void *FUN_overlay_12__0212a694(char *s){*(unsigned *)s=0x0213e13c;FUN_02079144();FUN_overlay_12__0212a458();FUN_overlay_12__02131b98();FUN_overlay_12__0212c84c();FUN_overlay_12__0212c700();if(D_0213f2c0==s)D_0213f2c0=0;FUN_overlay_12__02134868(1);FUN_overlay_12__0212a4d4(s+504);FUN_0209e1f8(s+92);FUN_overlay_12__02131dd4(s);return s;}
