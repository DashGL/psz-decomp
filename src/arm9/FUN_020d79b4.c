// FUN_020d79b4 @ 0x020d79b4 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
void FUN_020d79b4(unsigned int *list,char *node){char *last=(char *)list[1];if(last)*(char **)(last+36)=node;list[1]=(unsigned int)node;*(unsigned int *)(node+36)=0;if(!list[0])list[0]=(unsigned int)node;list[2]++;}
