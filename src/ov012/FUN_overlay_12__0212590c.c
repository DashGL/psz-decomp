// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_12__0212590c @ 0x0212590c, verified extent 0x54.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02137e74[];
// FUN_overlay_12__0212590c @ 0x0212590c (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG/pools and concrete ABI reviewed, text slot4 proven020c357c. */
typedef struct {int w[4];} Item;extern int FUN_overlay_12__021258dc(void *),FUN_020b028c(void *,void *,int);extern char *FUN_02086e3c(void);extern void FUN_overlay_12__021341d4(int,int),FUN_0209bf08(void *,int),FUN_overlay_12__021341f0(void),FUN_overlay_12__021258b4(void *);void FUN_overlay_12__0212590c(char *s){Item item;char *manager;if(FUN_overlay_12__021258dc(s)){manager=FUN_02086e3c();item=((Item *)((unsigned int)DAT_02137e74 + 0u))[*(int *)(s+64)];FUN_overlay_12__021341d4(8,1);FUN_0209bf08(&item,0);FUN_overlay_12__021341f0();FUN_020b028c(manager+16,&item,0);FUN_overlay_12__021258b4(s);}}
