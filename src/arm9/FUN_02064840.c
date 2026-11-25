// FUN_02064840 @ 0x02064840 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
int FUN_02064840(void){return *(unsigned int *)0x021180e0!=0;}
