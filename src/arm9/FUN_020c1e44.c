// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211c85c[];
// FUN_020c1e44 @ 0x020c1e44
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Add global signed offset and clamp result to [0,127].
 * Evidence: scratch/coverage-root/batch3/020c1e44.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
int FUN_020c1e44(int value) {
    value+=(*(int **)((unsigned int)DAT_0211c85c + 0u))[66];if(value>127)return 127;if(value<0)value=0;return value;
}
