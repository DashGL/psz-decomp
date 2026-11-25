// FUN_020128c8 @ 0x020128c8 (0x10, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA control and resource operations; helper return values retained.
extern void FUN_02012bb8(unsigned int);
void FUN_020128c8(unsigned int resource){FUN_02012bb8(resource+8);}
