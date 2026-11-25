// FUN_overlay_31__0219aff4 @ 0x0219aff4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219aff4 @ 0x0219aff4 (code 0x36, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Release a manager slot, clear shared embedded state, and destroy the actor base.
 * Field identities remain provisional.
 */
extern void *FUN_02034b78(void);extern void FUN_02035144(void *,int);extern void FUN_overlay_31__0219a768(void *);extern void *FUN_02035518(void *);extern void FUN_020ba8ac(void *);void *FUN_overlay_31__0219aff4(unsigned char *p) {void *manager;*(unsigned int *)p=0x0219cfb0;manager=FUN_02034b78();if(manager){FUN_02035144(manager,*(int *)(p+320));*(int *)(p+320)=-1;}FUN_overlay_31__0219a768(p+216);FUN_02035518(p);return p;}
