// FUN_02027e80 @ 0x02027e80 (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02027e80(char *self){char *p=*(char **)(self+0x64);unsigned int n=0;if(p){int mode=*(signed char *)(self+0x73);if(mode==1){char *q=*(char **)(p+0x104);if(q)n=*(unsigned short *)(q+4);}else if(mode==0 || mode==4)n=*(unsigned int *)(self+0x44)-*(unsigned int *)(p+0xf8);}return n;}
