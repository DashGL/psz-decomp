// FUN_020e1d74 @ 0x020e1d74 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA allocation/state adapters; full ABI and extents in root batch245.
extern int FUN_020d374c(void *),FUN_020c75a8(void);extern unsigned int DAT_0211dcbc[];extern void FUN_020e056c(int,int);void FUN_020e1d74(void *p){FUN_020d374c(p);DAT_0211dcbc[1]=FUN_020c75a8();FUN_020e056c(9,(int)0xfffe8515u);*(unsigned int *)DAT_0211dcbc[0]=0;}
