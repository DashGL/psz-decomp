// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
//cpp
struct Controller_02035518 {virtual ~Controller_02035518();char opaque[44];};
extern "C" {
// FUN_02035518 @ 0x02035518 (inventory code 0x78, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 118.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b118/02035518.txt.
 */
extern void FUN_0204b3ac(void *,unsigned int,unsigned int,unsigned int),FUN_020472bc(void *),FUN_0203528c(void *,unsigned int),FUN_02036eb8(void *),FUN_02040b48(void *),FUN_02074df4(void *),FUN_02072430(void *),FUN_02044258(void *),FUN_02043c5c(void *);char *FUN_02035518(char *s){void *p;*(unsigned int *)s=0x020f6f54;if(*(void **)(s+140)){FUN_0204b3ac(*(void **)(s+140),0,0,0);FUN_020472bc(*(void **)(s+140));*(void **)(s+140)=0;}p=*(void **)(s+16);if(p){delete (Controller_02035518 *)p;*(void **)(s+16)=0;}FUN_0203528c(*(void **)0x02108cf4,*(unsigned int *)(s+12));*(unsigned int *)(s+12)=~0u;FUN_02036eb8(s);FUN_02040b48(s);FUN_02074df4(s);FUN_02072430(s);FUN_02044258(s);FUN_02043c5c(s);return s;}

}
