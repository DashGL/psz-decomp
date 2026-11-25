// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
//cpp
struct Receiver_020450cc {virtual ~Receiver_020450cc(); char storage[128];};
extern "C" {
// FUN_020450cc @ 0x020450cc (inventory code 0x7c, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 119.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b119/020450cc.txt.
 */
extern char DAT_020f8ea0[], DAT_020f8ea4[], DAT_0210bb68[], DAT_0210a370[], DAT_0210ad40[];
extern void *FUN_020ba894(unsigned int),*FUN_020bc2dc(void *,void *,int),*FUN_020bc508(void *,int),*FUN_020ba440(void *);extern int FUN_020bc3c0(void *,void *,int);extern void FUN_020014d4(void *,void *,unsigned int);void FUN_020450cc(void){void *obj=FUN_020ba894(132),*data;if(obj)obj=FUN_020bc2dc(obj,DAT_020f8ea0,0);if(obj){if(FUN_020bc3c0(obj,DAT_020f8ea4,0)){data=FUN_020ba440(FUN_020bc508(obj,1));FUN_020014d4(DAT_0210bb68,data,0x826);data=FUN_020ba440(FUN_020bc508(obj,2));FUN_020014d4(DAT_0210a370,data,0x4a8);data=FUN_020ba440(FUN_020bc508(obj,0));FUN_020014d4(DAT_0210ad40,data,0x600);}if(obj)delete (Receiver_020450cc *)obj;}}

}
