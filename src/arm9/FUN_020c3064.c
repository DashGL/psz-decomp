// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_020c3064 @ 0x020c3064
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For valid mode [0,2], set control 16, clear active state and set companion state to 2.
 * Evidence: scratch/coverage-root/batch4/020c3064.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int data_0211c8e4[];
extern unsigned int data_020fcb14[];
extern void FUN_020c3018(int,int);
void FUN_020c3064(int mode) { if(mode>=0 && mode<=2) { FUN_020c3018(mode,16);data_0211c8e4[mode]=0;data_020fcb14[mode]=2; } }
