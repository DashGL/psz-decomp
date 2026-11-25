// FUN_020d8b0c @ 0x020d8b0c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived protocol/runtime leaf.
int FUN_020d8b0c(const int *p){int state;if(p[4]>0)return 2;state=p[19];if(state==3 || state==0)return 1;if(state==1)return 0;return 3;}
