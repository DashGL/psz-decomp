// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x6, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x6 exact_bytes=0 bad_relocs=0
// Corrected stale port against actual ROM: notes/sessions/matching-overlays-2026-11-12-corrected-ports.json
// flags: -O4,s
unsigned int *FUN_overlay_14__0211fde0(unsigned int *out,unsigned int first,unsigned int second){out[0]=second;out[1]=first;return out;}

// Caller/callee ABI evidence: Constructor leaves receiver in r0; caller211fb2c assigns returned pointer to item then stores it. Return is concretely consumed, not inferred from unused residual r0.
