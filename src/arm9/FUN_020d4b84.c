// FUN_020d4b84 @ 0x020d4b84 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// Connection metadata, tick flag, hash and signature helpers; preserve scalar words and unsigned arithmetic.
unsigned int FUN_020d4b84(unsigned char **self,unsigned int divisor){unsigned char *p=*self;return (*(unsigned int *)p*(unsigned int)*(unsigned short *)(p+4))%divisor;}
