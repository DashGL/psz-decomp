// FUN_020e160c @ 0x020e160c (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// Connection query helpers; preserve post-call reloads and ARM low-eight-bit shift behavior.
extern unsigned char *FUN_020d377c(unsigned int);
unsigned int FUN_020e160c(unsigned int self){return FUN_020d377c(self)[1];}
