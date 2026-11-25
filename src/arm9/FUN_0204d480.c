// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_0204d480 @ 0x0204d480 (inventory code 0x44, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/0204d480.txt.
 */
extern int FUN_0205c540(int);
int FUN_0204d480(int *p) { long long b=p[1],a=p[0]; unsigned int sum=(unsigned int)(((unsigned long long)(a*a)+2048)>>12)+(unsigned int)(((unsigned long long)(b*b)+2048)>>12); return FUN_0205c540((int)sum); }
