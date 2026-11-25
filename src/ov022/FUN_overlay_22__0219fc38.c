// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x219fc80, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
struct Vec;
class Scope_overlay_22__0219fc38 {public: virtual void invoke0(void);virtual void invoke1(void *);};
// FUN_overlay_22__0219fc38 @ 0x0219fc38 (code 0x56, full extent 0x5c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete effect pool dispatch and allocation.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch557.md.
 */
typedef void (*Init)(void *,void *);extern "C" int FUN_overlay_22__0219f678(void *);extern "C" void *FUN_020ba894(unsigned);extern "C" void *FUN_overlay_22__0219fcc4(void *,const void *);
extern "C" int FUN_overlay_22__0219fc38(void *payload,const void *config) { void *manager;int *object;if(!payload)return -1;manager=*(void **)0x021a1798;if(!manager)return -1;if(!FUN_overlay_22__0219f678(manager))return -1;object=(int *)FUN_020ba894(96);if(object)object=(int *)FUN_overlay_22__0219fcc4(object,config);if(!object)return -1;((Scope_overlay_22__0219fc38 *)object)->invoke1(payload);return object[5]; }
