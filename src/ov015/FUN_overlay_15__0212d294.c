// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_overlay_15__0212d294 @ 0x0212d294, verified extent 0x50.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e86c[];
// FUN_overlay_15__0212d294 @ 0x0212d294 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG and concrete incoming/callee ABI reviewed. */
extern unsigned char *FUN_overlay_15__021318ac(void);extern void FUN_overlay_15__021318bc(int),FUN_overlay_15__021318d0(int),FUN_overlay_15__0212d6f8(void);void FUN_overlay_15__0212d294(int enabled){unsigned char *p=FUN_overlay_15__021318ac();int previous;if(p[245]==enabled)return;if(enabled)previous=(*(unsigned char **)((unsigned int)DAT_0213e86c + 8u))[67]!=0;else{(*(unsigned char **)((unsigned int)DAT_0213e86c + 8u))[67]=p[246];previous=0;}FUN_overlay_15__021318bc(enabled);FUN_overlay_15__021318d0(previous);FUN_overlay_15__0212d6f8();}
