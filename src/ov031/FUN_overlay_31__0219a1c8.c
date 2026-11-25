// FUN_overlay_31__0219a1c8 @ 0x0219a1c8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a1c8 @ 0x0219a1c8 (code 0x1c, full extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch402.md.
 */
extern void FUN_overlay_31__0219a658(void *,unsigned,int,unsigned);
void FUN_overlay_31__0219a1c8(int *self,unsigned char *packet) { void *child=(void *)self[4];if(child && packet[12]<7)FUN_overlay_31__0219a658(child,packet[12],*(signed char *)(packet+13),*(unsigned short *)(packet+14)); }
