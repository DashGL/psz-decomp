// FUN_020dac74 @ 0x020dac74 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived protocol/container leaf.
void *FUN_020dac74(unsigned int flags){void **p=(void **)0x0211dbb4;if(flags&1)return p[3];if(flags&2)return p[0];if(flags&4)return p[1];if(flags&8)return p[2];if(flags&16)return p[4];return 0;}
