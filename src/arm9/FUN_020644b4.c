// FUN_020644b4 @ 0x020644b4 (0x14, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
extern unsigned int DAT_021180a0[];
unsigned int FUN_020644b4(void)
{
    return *(unsigned int *)(DAT_021180a0[2] + 8);
}
