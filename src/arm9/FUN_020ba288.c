// FUN_020ba288 @ 0x020ba288 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020ba288 @ 0x020ba288 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Open temporary stream, derive size, optionally parse 16-byte header and use its word +8; close successful opens.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba288.txt.
 */
extern void FUN_02059cd4(void *), FUN_02059ffc(void *);
extern int FUN_02059fb4(void *,void *), FUN_0205a150(void *,void *,unsigned int), FUN_020c5138(void *);
unsigned int FUN_020ba288(void *path) {
    unsigned int header[4]; unsigned int stream[18]; unsigned int size=~0u;
    FUN_02059cd4(stream);
    if(FUN_02059fb4(stream,path)) {
        size=stream[10]-stream[9];
        if(size>16 && FUN_0205a150(stream,header,16)>0 && FUN_020c5138(header)) size=header[2];
        FUN_02059ffc(stream);
    }
    return size;
}
