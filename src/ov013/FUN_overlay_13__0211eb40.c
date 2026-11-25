// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_13__0211eb40 @ 0x0211eb40, verified extent 0x1c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0211f98c[];
// FUN_overlay_13__0211eb40 @ 0x0211eb40 (thumb)
// flags: -O4,s
typedef void *(*Factory)(int);
void *FUN_overlay_13__0211eb40(unsigned index,int context){Factory f=((Factory *)((unsigned int)DAT_0211f98c + 0u))[index];if(f)return f(context);return 0;}
