// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
//cpp
// check: 2.0/sp2p3 full_extent=0x26 exact_bytes=0 bad_relocs=0
// Semantic proof: notes/sessions/matching-overlays-2026-11-12-trade-members.json
class Scope_0212acf0;typedef void (Scope_0212acf0::*Action_0212acf0)();
class Scope_0212acf0 {public:unsigned pad[18];Action_0212acf0 first,second;};
extern "C" void FUN_overlay_12__0212acf0(Scope_0212acf0 *self){if(self->second) (self->*self->second)();}
