// FUN_020c4578 @ 0x020c4578 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9: all-zero 16-byte record, first two bytes followed by seven halfwords.
int FUN_020c4578(const char *p) {
    int i;
    for(i=0;i<2;i++) if(p[i]) return 0;
    for(i=0;i<=6;i++) if(((const unsigned short *)(p+2))[i]) return 0;
    return 1;
}
