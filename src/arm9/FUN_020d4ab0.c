// FUN_020d4ab0 @ 0x020d4ab0 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA resource/record adapters; ABI evidence in root batch248.
extern int FUN_020d4ac0(void *,unsigned,unsigned);int FUN_020d4ab0(char *p){return FUN_020d4ac0(*(void **)(p+8),*(unsigned *)p,*(unsigned short *)(p+4));}
