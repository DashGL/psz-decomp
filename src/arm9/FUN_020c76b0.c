// FUN_020c76b0 @ 0x020c76b0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern int FUN_020c75b4(unsigned int,unsigned int *,unsigned int *,unsigned int *);
unsigned int FUN_020c76b0(unsigned int descriptor){unsigned int ready=0;if(FUN_020c75b4(descriptor,0,&ready,0)==1)return ready;return 0;}
