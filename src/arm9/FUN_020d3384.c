// FUN_020d3384 @ 0x020d3384 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// Connection construction and elapsed-time probe; explicit sixth argument and unsigned tick subtraction.
extern int FUN_020d48bc(void *);
int FUN_020d3384(unsigned char *self,unsigned int now){if(now-*(unsigned int *)(self+0x88)>30000 && !FUN_020d48bc(self))return 0;return 1;}
