// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// Scope evidence: all plain-C residual bytes are receiver-first virtual dispatch
// at 0x219f6e0, verified against this function ROM extent.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
//cpp
struct Vec;
class Scope_overlay_22__0219f6cc {public: virtual void invoke0(void);virtual void invoke1(void);virtual void invoke2(void *);virtual void invoke3(void);virtual void invoke4(void);};
// FUN_overlay_22__0219f6cc @ 0x0219f6cc (code 0x2c, full extent 0x30, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete handle-resolved callback delivery.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch549.md.
 */
typedef void (*Deliver)(void *,void *);typedef void (*Finish)(void *);extern "C" void *FUN_overlay_22__0219f694(void *,unsigned);
extern "C" void FUN_overlay_22__0219f6cc(void *payload,unsigned handle) { void *manager=*(void **)0x021a1798;if(manager){void *object=FUN_overlay_22__0219f694(manager,handle);if(object){((Scope_overlay_22__0219f6cc *)object)->invoke2(payload);if(object){if(object)((Scope_overlay_22__0219f6cc *)object)->invoke4();}}} }
