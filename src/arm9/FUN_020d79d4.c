// FUN_020d79d4 @ 0x020d79d4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
void FUN_020d79d4(unsigned int *list,char *node){*(unsigned int *)(node+36)=list[0];list[0]=(unsigned int)node;if(!list[1])list[1]=(unsigned int)node;list[2]++;}
