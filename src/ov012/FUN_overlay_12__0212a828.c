// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
//cpp
// check: 2.0/sp2p3 full_extent=0x26 exact_bytes=0 bad_relocs=0
// Semantic proof: notes/sessions/matching-overlays-2026-11-12-trade-members.json
class Scope_0212a828;typedef void (Scope_0212a828::*Action_0212a828)();
class Scope_0212a828 {public:unsigned pad[18];Action_0212a828 first,second;};
extern "C" void FUN_overlay_12__0212a828(Scope_0212a828 *self){if(self->first) (self->*self->first)();}
