// FUN_020d3714 @ 0x020d3714 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
int FUN_020d3714(const int *p){int x=p[3];if(x<5)return 0;if(x==5)return 1;if(x==6)return 2;return 3;}
