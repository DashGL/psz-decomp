// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// FUN_overlay_10__02120ef4 @ 0x02120ef4, verified extent 0x74.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_021222a8[];
extern unsigned char DAT_021222b0[];
extern unsigned char DAT_021222bc[];
// FUN_overlay_10__02120ef4 @ 0x02120ef4 (thumb)
// flags: -O4,s
/* Refresh selected title and description. */
extern void *FUN_02093c00(int),*FUN_overlay_10__0212017c(void),*FUN_02093b2c(void *,int,int);
extern void FUN_overlay_10__02120264(void *,void *),FUN_overlay_10__02120284(void *,void *);
void FUN_overlay_10__02120ef4(int *state){void *manager;int *view;if(state[2]>=3||state[1]>=2)return;manager=FUN_02093c00(0);if(!manager)return;view=FUN_overlay_10__0212017c();if(!view)return;view[37]=((int *)((unsigned int)DAT_021222a8 + 0u))[state[1]];FUN_overlay_10__02120264(view,FUN_02093b2c(manager,5,((int *)((unsigned int)DAT_021222b0 + 0u))[state[2]]));FUN_overlay_10__02120284(view,FUN_02093b2c(manager,6,((int (*)[2])((unsigned int)DAT_021222bc + 0u))[state[2]][state[1]]));}
