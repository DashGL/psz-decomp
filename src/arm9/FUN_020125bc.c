// FUN_020125bc @ 0x020125bc (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
int FUN_020125bc(char *p){if(*(unsigned int *)p!=0x4352414e)return 0;if(*(unsigned short *)(p+4)!=0xfffe)return 0;return *(unsigned short *)(p+6)==0x100;}
