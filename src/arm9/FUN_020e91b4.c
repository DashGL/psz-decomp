// FUN_020e91b4 @ 0x020e91b4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_020e961c(void);
unsigned int FUN_020e91b4(unsigned int callback,unsigned int port){unsigned int state=FUN_020e961c();*(unsigned int *)(state+28)=callback;state=FUN_020e961c();*(unsigned short *)(state+26)=port;return state;}
