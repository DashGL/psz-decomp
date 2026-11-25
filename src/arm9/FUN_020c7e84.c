// FUN_020c7e84 @ 0x020c7e84 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived network/container leaf.
int FUN_020c7e84(const char *a,const char *b){if(*(const unsigned int *)a!=*(const unsigned int *)b)return 1;if(*(const unsigned short *)(a+4)!=*(const unsigned short *)(b+4))return 1;return 0;}
