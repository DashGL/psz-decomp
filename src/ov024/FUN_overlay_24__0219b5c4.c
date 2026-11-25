// FUN_overlay_24__0219b5c4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_24__0219b5c4 @ 0x0219b5c4 (code and checked extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24, 2026-11-04: set indexed bit in owner word +0xd4.
 * Field and bit identities remain provisional. The input denotes a word bit.
 */
void FUN_overlay_24__0219b5c4(char *self,unsigned int bit) {
    *(unsigned int *)(self+0xd4) |= (1U<<bit);
}
