// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_23__0219d194 @ 0x0219d194
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0219d968[];
extern char D_0219d964[];
extern char D_0219d960[];
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize module values and apply vector operation.
 * Field identities remain provisional.
 */
extern void FUN_02042960(void *,int),FUN_020bc5cc(void *,void *,void *);
void FUN_overlay_23__0219d194(void) { FUN_02042960(D_0219d968,0x7800);FUN_02042960(D_0219d964,0x5000);FUN_020bc5cc(D_0219d960,D_0219d964,D_0219d964); }
