// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char pad_0[32]; int field_20; } DAT_02192cdc;
// FUN_overlay_4__021204d4 @ 0x021204d4 (code 0x52, pool extent 0x58, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Activate the touch action once when the fixed rectangle is pressed and transitions are idle.
 * Field identities remain provisional.
 */
extern int FUN_020c2e38(void),FUN_020bc220(const int *);extern void *FUN_02072af0(void);extern int FUN_02072c20(void *,int,int);extern void FUN_020c193c(int,int,int,int,int);void FUN_overlay_4__021204d4(void){int rect[4];if(FUN_020c2e38())return;rect[0]=144;rect[1]=107;rect[2]=64;rect[3]=64;if(FUN_020bc220(rect)&&DAT_02192cdc.field_20==0){DAT_02192cdc.field_20=1;FUN_02072c20(FUN_02072af0(),10,1);FUN_020c193c(0,4,0,0,-1);}}
