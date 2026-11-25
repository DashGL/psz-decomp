// FUN_overlay_31__0219a0ac @ 0x0219a0ac (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a0ac @ 0x0219a0ac (code 0x3e, full extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Nullable game-object factory with
 * static descriptor initialization or parent slot attachment.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch391.md.
 */
extern void *FUN_020ba894(unsigned int);
extern int FUN_02074f94(void *);extern int FUN_02074fc4(void *,void *,int,int);extern void *FUN_overlay_31__021981b8(void *,void *,int *,int);
void FUN_overlay_31__0219a0ac(int *self,void *position,int value) { int slot=FUN_02074f94(self),id;void *p;if(slot!=-1){p=FUN_020ba894(356);if(p){id=self[3];p=FUN_overlay_31__021981b8(p,position,&id,value);}FUN_02074fc4(self,p,slot,0);} }
