// FUN_overlay_12__0212a740 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212a740 @ 0x0212a740 (code 0x44, pool extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Coordinate message subject selection and asynchronous action transitions.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch343.md.
 * Field identities remain provisional; all explicit stack inputs retained.
 */
extern void FUN_overlay_12__0212ad18(void *);
extern void FUN_overlay_12__0212b1f4(void *,int,int,int,int,void (*)(void),void (*)(void));
extern void FUN_overlay_12__02129ddc(int);
void FUN_overlay_12__0212a740(int subject) { int *self=*(int **)0x0213f2c0;if(self && self[16]==1){self[111]=subject;FUN_overlay_12__02129ddc(subject);self[27]=1;FUN_overlay_12__0212ad18(self);FUN_overlay_12__0212b1f4(self,subject,13,1,-1,0,0);} }
