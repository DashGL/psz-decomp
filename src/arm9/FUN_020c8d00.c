// FUN_020c8d00 @ 0x020c8d00 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived network/container leaf.
int FUN_020c8d00(char **handle,unsigned int *out){char *p;if(!handle || !(p=*handle))return 2;if(*(unsigned int *)(p+0x108)){*out=0;return 0;}*out=*(unsigned int *)(p+0x5d0);return 0;}
