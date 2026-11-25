// FUN_02018984 @ 0x02018984 (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived resource or movement logic.
unsigned int FUN_02018984(const unsigned char *kind,const unsigned char *data){if(!kind || !data)return 0;switch(*kind){case 0x4d:return (data[0x18]*2+0x1c)&~3u;case 0x4a:case 0x56:return (data[0x17]*2+0x1c)&~3u;default:return 0;}}
