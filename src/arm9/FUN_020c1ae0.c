// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211c85c[];
// FUN_020c1ae0 @ 0x020c1ae0
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Notify selected index, then route input through indexed context or negative-index fallback.
 * Evidence: scratch/coverage-root/batch8/020c1ae0.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c1f10(int);
extern int FUN_0200f404(unsigned int,void *);
int FUN_020c1ae0(unsigned int arg,int index) { FUN_020c1f10(index);if(index>=0) { char *manager=*(char **)((unsigned int)DAT_0211c85c + 0u);return FUN_0200f404(arg,(*(void ***)(manager+20))[index]); }else return FUN_0200f404(arg,(*(void ***)((unsigned int)DAT_0211c85c + 0u))[2]); }
