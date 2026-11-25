// FUN_overlay_12__0212dd00 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212dd00 @ 0x0212dd00 (code 0x30, pool extent 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Singleton construction or controller cleanup in observed order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch353.md.
 * Field identities remain provisional.
 */
extern char G_0213F2D0[];
extern void FUN_020b9e9c(void *);extern void FUN_overlay_12__0212c9a0(void);extern void FUN_overlay_12__0212e01c(void *);extern void *FUN_overlay_12__02131dd4(void *);
void * FUN_overlay_12__0212dd00(int *self) { self[0]=0x0213e288;FUN_020b9e9c(self);FUN_overlay_12__0212c9a0();self[26]=0;FUN_overlay_12__0212e01c(self);if(*(int **)G_0213F2D0==self)*(int **)G_0213F2D0=0;FUN_overlay_12__02131dd4(self);return self; }
