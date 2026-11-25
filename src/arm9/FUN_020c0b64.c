// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b404[];
// FUN_020c0b64 @ 0x020c0b64
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set output status flag using global record predicates; return1 if first predicate false, otherwise0 or2.
 * Evidence: scratch/coverage-root/batch14/020c0b64.txt.
 */
extern int FUN_020dd724(const void *),FUN_020dd6e8(const void *),FUN_020dd740(const void *);
int FUN_020c0b64(unsigned int *out){const void *p=(const void *)((unsigned int)DAT_0211b404 + 0u);if(!FUN_020dd724(p)){if(FUN_020dd6e8(p)==1 && FUN_020dd740(p)==1)out[2]=0;else out[2]=1;return 1;}if(FUN_020dd6e8(p)==1){if(FUN_020dd740(p)==1){out[2]=0;return 0;}out[2]=1;return 2;}out[2]=1;return 2;}
