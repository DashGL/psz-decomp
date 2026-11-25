// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
extern int FUN_020c2d1c(unsigned *);
unsigned FUN_overlay_12__0212c7e8(unsigned **owner) { unsigned *child=*owner; if(child) return FUN_020c2d1c(child); return 0; }

// Caller/callee ABI evidence: ROM212c7ea loads child from incoming owner into r0, checks nonnull then calls c2d1c. Actual helper dereferences child words0/2/1 and returnsboolean. Old unprototyped zero-argument call relied on residual r0; explicit loaded child preserves actual dataflow.
