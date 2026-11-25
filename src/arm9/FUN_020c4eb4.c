// FUN_020c4eb4 @ 0x020c4eb4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9: nullable global context field getter.
unsigned int FUN_020c4eb4(void) {
    unsigned int *p=*(unsigned int **)0x0211ceec;
    if(p) return p[12];
    return 0;
}
