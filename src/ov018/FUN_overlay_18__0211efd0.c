// FUN_overlay_18__0211efd0 @ 0x0211efd0 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211efd0 @ 0x0211efd0 (code 0x3a, full extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI initialization, command
 * packaging or state transition; exact sequential getter/call behavior.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch394.md.
 */
extern void FUN_overlay_18__02120fc8(void *);extern void *FUN_overlay_18__021212f0(void);extern void FUN_overlay_18__021214b8(void *,void *);extern void *FUN_overlay_18__02122cf4(void);extern void FUN_overlay_18__02122d44(void *);
void * FUN_overlay_18__0211efd0(int *self) { int descriptor[2];void *p;self[0]=0x02123a6c;self[1]=0;self[2]=0;descriptor[0]=0;descriptor[1]=-1;descriptor[0]=0;FUN_overlay_18__02120fc8(descriptor);FUN_overlay_18__021214b8(FUN_overlay_18__021212f0(),(void *)0x02124544);p=FUN_overlay_18__02122cf4();if(p)FUN_overlay_18__02122d44(p);return self; }
