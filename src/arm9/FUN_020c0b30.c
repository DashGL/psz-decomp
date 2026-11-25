// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b404[];
// FUN_020c0b30 @ 0x020c0b30
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When dirty word +8 equals one, refresh global object, reset global records, clear dirty word and return true.
 * Evidence: scratch/coverage-root/batch7/020c0b30.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_020bceac(void);
extern void FUN_020dd6e0(void *,unsigned int),FUN_020dd7e4(void *),FUN_020c0bc4(void);
int FUN_020c0b30(unsigned int *self) {
    if(self[2]==1) { FUN_020dd6e0((void *)((unsigned int)DAT_0211b404 + 0u),FUN_020bceac());FUN_020dd7e4((void *)((unsigned int)DAT_0211b404 + 0u));FUN_020c0bc4();self[2]=0;return 1; }return 0;
}
