// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
//cpp
struct Receiver_02045164 {virtual ~Receiver_02045164(); char storage[128];};
extern "C" {
// FUN_02045164 @ 0x02045164 (inventory code 0x5e, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 116.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b116/02045164.txt.
 */
extern char DAT_020f8eb8[], DAT_020f8ebc[], DAT_02108f48[], DAT_021099bc[];
extern void *FUN_020ba894(unsigned int),*FUN_020bc2dc(void *,void *,int),*FUN_020bc508(void *,int),*FUN_020ba440(void *);extern int FUN_020bc3c0(void *,void *,int);extern void FUN_020014d4(void *,void *,unsigned int);void FUN_02045164(void){void *obj=FUN_020ba894(132);char *data;if(obj)obj=FUN_020bc2dc(obj,DAT_020f8eb8,0);if(obj){if(FUN_020bc3c0(obj,DAT_020f8ebc,0)){data=(char *)FUN_020ba440(FUN_020bc508(obj,0));FUN_020014d4(DAT_02108f48,data,148);FUN_020014d4(DAT_021099bc,data+148,360);}if(obj)delete (Receiver_02045164 *)obj;}}

}
