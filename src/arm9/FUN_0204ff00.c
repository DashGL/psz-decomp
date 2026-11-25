// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Match recovery 2026-11-12: preserve each ROM callback literal as an
// address symbol; odd suffixes intentionally retain the Thumb state bit.
// These expressions store/pass raw callback addresses, not data loads.
extern unsigned char DAT_0204ff49[];
extern unsigned char DAT_0204ff79[];
// FUN_0204ff00 @ 0x0204ff00 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/0204ff00.txt.
 */
void FUN_0204ff00(char *s,unsigned int a,unsigned int b,unsigned int c,unsigned int d) { *(unsigned int *)(s+0x178)=a; *(unsigned int *)(s+0x17c)=b; *(unsigned int *)(s+0x180)=c; *(unsigned int *)(s+0x184)=d; *(unsigned int *)(s+0x188)=0; *(unsigned int *)(s+0x12c)=((unsigned int)DAT_0204ff49 + 0u); *(void **)(s+0x130)=s; *(unsigned int *)(s+0x134)=((unsigned int)DAT_0204ff79 + 0u); *(void **)(s+0x138)=s; }
