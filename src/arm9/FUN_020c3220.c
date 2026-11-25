// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_020c3220 @ 0x020c3220
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply helper to each of two drawing contexts whose enable word equals 1.
 * Evidence: scratch/coverage-root/batch4/020c3220.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int data_020fcb20[];
extern void FUN_020130e8(void *);
void FUN_020c3220(void) {
    if((data_020fcb20)[2]==1)FUN_020130e8((void *)0x0211c8f0);
    if((data_020fcb20)[0]==1)FUN_020130e8((void *)0x0211c90c);
}
