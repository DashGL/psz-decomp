// FUN_020d9930 @ 0x020d9930 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived protocol/runtime leaf.
unsigned int FUN_020d9930(unsigned int flags){unsigned int n=5;if(flags&2)n+=4;if(flags&8)n+=4;if(flags&16)n+=2;if(flags&32)n+=2;return n;}
