// FUN_020c6c04 @ 0x020c6c04 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived network/container leaf.
int FUN_020c6c04(char *p){int i;for(i=0;i<3;i++)if(*(unsigned int *)(p+i*48+44))return i;return 3;}
