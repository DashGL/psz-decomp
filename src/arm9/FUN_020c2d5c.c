// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// FUN_020c2d5c @ 0x020c2d5c
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set both display control values to 16 and clear three global state words with signed-byte loop counter.
 * Evidence: scratch/coverage-root/batch4/020c2d5c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int D_0211c8e4[];
extern void FUN_0205cf10(void *,int);
void FUN_020c2d5c(void) {
    signed char i;FUN_0205cf10((void *)0x0400006c,16);FUN_0205cf10((void *)0x0400106c,16);
    for(i=0;i<3;i++)D_0211c8e4[i]=0;
}
