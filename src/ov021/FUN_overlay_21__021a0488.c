// FUN_overlay_21__021a0488 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_21__021a0488 @ 0x021a0488 (code 0x54, pool extent 0x74, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize shared fixed-point tuning constants and squared thresholds.
 * Field identities remain provisional.
 */
extern char G_021A13E0[]; extern char G_021A13E4[]; extern char G_021A13E8[]; extern char G_021A13EC[]; extern char G_021A13F0[]; extern char G_021A13F4[]; extern char G_021A13F8[]; extern char G_021A13FC[];
extern void FUN_02042960(void *,int);
extern void FUN_020bc5cc(void *,const void *,const void *);
void FUN_overlay_21__021a0488(void) {FUN_02042960((void *)G_021A13FC,28672);FUN_02042960((void *)G_021A13F8,122880);FUN_02042960((void *)G_021A13F4,28672);FUN_02042960((void *)G_021A13F0,69632);FUN_02042960((void *)G_021A13EC,2048);FUN_02042960((void *)G_021A13E8,102400);FUN_02042960((void *)G_021A13E4,73728);FUN_020bc5cc((void *)G_021A13E0,(void *)G_021A13E4,(void *)G_021A13E4);}
