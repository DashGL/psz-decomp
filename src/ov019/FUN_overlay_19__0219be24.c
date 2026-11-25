// FUN_overlay_19__0219be24 @ 0x0219be24 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch61.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219be24 @ 0x0219be24 (code 0x3e, full extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI initialization, command
 * packaging or state transition; exact sequential getter/call behavior.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch394.md.
 */
extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_19__02198a80(void *,int);
void FUN_overlay_19__0219be24(int *self) { int *owner=(int *)self[1];int mode=9;int kind=((signed char *)self[2])[100];if(kind==2)mode=10;else if(kind==3)mode=11;FUN_02040c0c(owner,0,mode,4096,0);FUN_overlay_19__02198a80(owner,0);owner[97]=0; }
