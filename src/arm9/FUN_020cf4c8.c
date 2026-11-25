// FUN_020cf4c8 @ 0x020cf4c8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived network/container leaf.
void FUN_020cf4c8(char *owner,char *node){char *last,*first;if(!owner || !node)return;if(!*(unsigned int *)(owner+64)){*(char **)(owner+68)=node;*(char **)(owner+72)=node;*(char **)(owner+64)=node;return;}last=*(char **)(owner+72);first=*(char **)(owner+68);if(first==last){*(char **)(first+12)=node;*(char **)(owner+72)=node;return;}*(char **)(last+12)=node;*(char **)(owner+72)=node;}
