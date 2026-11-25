// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211c644[];
extern unsigned char DAT_0211c664[];
// FUN_020c0978 @ 0x020c0978
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum signs of 32 signed bytes: positive contributes +1, negative -1, zero 0.
 * Evidence: scratch/coverage-root/batch2/020c0978.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
int FUN_020c0978(void) {
    int sum=0; signed char *p=(signed char *)((unsigned int)DAT_0211c644 + 0u);
    while(p<(signed char *)((unsigned int)DAT_0211c664 + 0u)) { if(*p>0) sum++; else if(*p<0) sum--; p++; }
    return sum;
}
