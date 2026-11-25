// FUN_0200d0d0 @ 0x0200d0d0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// FUN_0200d0d0 — convert the stored millisecond count to whole seconds.
extern unsigned char DAT_02101dd4[];
extern unsigned int FUN_0200a5ac(unsigned int,unsigned int);
unsigned int FUN_0200d0d0(void)
{
    return FUN_0200a5ac(*(unsigned int *)(DAT_02101dd4+8),1000);
}
