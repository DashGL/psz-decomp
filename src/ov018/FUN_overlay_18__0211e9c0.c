// FUN_overlay_18__0211e9c0 @ 0x0211e9c0 (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211e9c0 @ 0x0211e9c0 (code 0x80, full extent 0x80, thumb)
// check: vers=2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch429.md.
 */
extern void FUN_overlay_18__0211ef14(void *);extern int *FUN_overlay_18__0211e6f4(void *,int);extern unsigned FUN_overlay_18__0211ef40(void *,int);
void FUN_overlay_18__0211e9c0(char *self,unsigned char *descriptor) { FUN_overlay_18__0211ef14(descriptor);descriptor[37]=*FUN_overlay_18__0211e6f4(self+72,0);descriptor[38]=*FUN_overlay_18__0211e6f4(self+72,1);descriptor[40]=*FUN_overlay_18__0211e6f4(self+72,2);descriptor[39]=*FUN_overlay_18__0211e6f4(self+72,3);descriptor[41]=FUN_overlay_18__0211ef40(descriptor,*FUN_overlay_18__0211e6f4(self+72,4));descriptor[44]=*FUN_overlay_18__0211e6f4(self+72,5); }
