// FUN_020dd0c8 @ 0x020dd0c8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA allocation/state adapters; full ABI and extents in root batch245.
extern void *DAT_0211dbcc[];extern void FUN_020e05d8(int,void *,unsigned int);void FUN_020dd0c8(void){if(DAT_0211dbcc[1]){FUN_020e05d8(1,DAT_0211dbcc[1],0);DAT_0211dbcc[1]=0;}if(DAT_0211dbcc[0]){FUN_020e05d8(1,DAT_0211dbcc[0],0);DAT_0211dbcc[0]=0;}}
