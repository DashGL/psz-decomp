// FUN_020d9030 @ 0x020d9030 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// USA resident callback/state routines; full ABI and extents in root batch244.
extern void **FUN_020c6e10(void *,int);void *FUN_020d9030(void **state,int index){return *FUN_020c6e10(state[1],index);}
