// FUN_overlay_12__0212a884 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212a884 @ 0x0212a884 (code 0x4a, pool extent 0x4a, thumb)
// check: vers=2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Coordinate message subject selection and asynchronous action transitions.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch343.md.
 * Field identities remain provisional; all explicit stack inputs retained.
 */
extern void FUN_overlay_12__0212ad18(void *);
extern void FUN_overlay_12__0212b1f4(void *,int,int,int,int,void (*)(void),void (*)(void));
extern void FUN_overlay_12__02129d34(void);
extern void FUN_overlay_12__021298f4(void);
void FUN_overlay_12__0212a884(int *self) { if(!self[17]){self[17]=1;FUN_overlay_12__02129d34();}else if(self[112]){FUN_overlay_12__021298f4();FUN_overlay_12__0212ad18(self);self[27]=1;FUN_overlay_12__0212b1f4(self,self[111],13,1,-1,0,0);} }
