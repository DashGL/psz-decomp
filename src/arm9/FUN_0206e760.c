// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020f9830[];
extern unsigned char DAT_020f9840[];
// FUN_0206e760 @ 0x0206e760
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install base table and zero flags, replace table and set flag bit zero; target retains intermediate stores and reload.
 * Evidence: scratch/coverage-root/batch6/0206e760.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_0206e760(unsigned int *self) { self[0]=((unsigned int)DAT_020f9830 + 0u);self[1]=0;self[0]=((unsigned int)DAT_020f9840 + 0u);self[1]|=1;return self; }
