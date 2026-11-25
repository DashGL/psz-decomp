// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// FUN_overlay_10__02120c20 @ 0x02120c20
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_02122268[];
extern int D_02122278[];
/* USA ROM reconstruction, 2026-11-05. Full extent and concrete helper ABI reviewed. */
extern void *FUN_02093c00(int),*FUN_02093b2c(void *,int,int);extern char *FUN_overlay_10__0212017c(void);extern void FUN_overlay_10__02120264(void *,void *),FUN_overlay_10__02120284(void *,void *);void FUN_overlay_10__02120c20(char *s){void *manager=FUN_02093c00(0);char *p;if(manager){p=FUN_overlay_10__0212017c();if(p){*(int *)(p+148)=D_02122268[*(int *)(s+72)];FUN_overlay_10__02120264(p,FUN_02093b2c(manager,5,2));FUN_overlay_10__02120284(p,FUN_02093b2c(manager,6,D_02122278[*(int *)(s+72)]));}}}
