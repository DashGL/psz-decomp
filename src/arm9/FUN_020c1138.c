// FUN_020c1138 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020c1138 @ 0x020c1138
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return indexed 52-byte global record for signed index [0,64), otherwise null.
 * Evidence: scratch/coverage-root/batch2/020c1138.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern char G_0211B744[];
void *FUN_020c1138(int index) { if(index>=0 && index<64)return (char *)G_0211B744+52*index;return 0; }
