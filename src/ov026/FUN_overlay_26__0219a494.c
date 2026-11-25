// FUN_overlay_26__0219a494 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_26__0219a494 @ 0x0219a494 (code and checked extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26, 2026-11-04: clear indexed bit in owner word +0xd4.
 * Field and bit identities remain provisional. The input denotes a word bit.
 */
void FUN_overlay_26__0219a494(char *self,unsigned int bit) {
    *(unsigned int *)(self+0xd4) &= ~(1U<<bit);
}
