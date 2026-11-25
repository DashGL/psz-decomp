// FUN_020ea1ec @ 0x020ea1ec (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/protocol leaf.
int FUN_020ea1ec(const unsigned char *p){unsigned int a=*p;if(a==127)return 0;if(a<1)return 0;if(a<=223)return 1;return 0;}
