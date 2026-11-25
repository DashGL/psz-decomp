// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// FUN_overlay_22__0219f7ac @ 0x0219f7ac
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_overlay_22__0219f7ac { virtual void v0(); virtual void v1(void *); };
extern "C" int FUN_overlay_22__0219f678(void *);extern "C" void *FUN_020ba894(unsigned);extern "C" void *FUN_overlay_22__0219f83c(void *,const void *);
extern "C" int FUN_overlay_22__0219f7ac(void *payload,const void *config) { void *manager;O_FUN_overlay_22__0219f7ac *object;if(!payload)return -1;manager=*(void **)0x021a1798;if(!manager)return -1;if(!FUN_overlay_22__0219f678(manager))return -1;object=(O_FUN_overlay_22__0219f7ac *)FUN_020ba894(92);if(object)object=(O_FUN_overlay_22__0219f7ac *)FUN_overlay_22__0219f83c(object,config);if(!object)return -1;object->v1(payload);return ((int *)object)[5]; }
