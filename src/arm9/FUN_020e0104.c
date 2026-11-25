// FUN_020e0104 @ 0x020e0104 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch56-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// Locked state write; preserve pointer reloads and void mutex operations.
extern unsigned char *DAT_0211dbfc;
extern void FUN_0206719c(void *),FUN_02067220(void *);
void FUN_020e0104(unsigned int value){FUN_0206719c(DAT_0211dbfc+0x11dc);*(unsigned int *)(DAT_0211dbfc+0x1000)=value;FUN_02067220(DAT_0211dbfc+0x11dc);}
