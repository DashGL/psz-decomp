// FUN_020d1f58 @ 0x020d1f58 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
void *FUN_020d1f58(char *p){if(!p)return 0;if(*(int *)(p+4)==2)return *(void **)(p+12);return p+12;}
