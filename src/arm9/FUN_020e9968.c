// FUN_020e9968 @ 0x020e9968 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/protocol leaf.
int FUN_020e9968(unsigned int value){char *p=*(char **)0x0211e5e4;if(!p)return 0;*(unsigned int *)(p+0x604)=value;return 1;}
