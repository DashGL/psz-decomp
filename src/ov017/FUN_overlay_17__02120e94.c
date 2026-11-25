// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets; argument/return contract corrected.
// flags: -O4,p
// Explicit controller/index/value forwarding; actual target consumes allthree positions.
extern void FUN_overlay_17__02120520(void *,int,int);
void FUN_overlay_17__02120e94(unsigned *node,int index,int value) { void *next=(void *)node[4]; if(next) FUN_overlay_17__02120520(next,index,value); }

// Caller/callee ABI evidence: Actual same-module target saves incoming index/value and uses both; script callback pops two values, stages r1/r2 then invokes wrapper. Removes unprototyped missing-argument call while preserving full bytes.
