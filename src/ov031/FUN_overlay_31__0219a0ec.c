// FUN_overlay_31__0219a0ec @ 0x0219a0ec (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a0ec @ 0x0219a0ec (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay31 ROM reconstruction, 2026-11-05.
 * Game record formatting, action scheduling or actor allocation.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch363.md.
 * Field identities remain provisional; stack input/output layout preserved.
 */
extern int FUN_02074f94(void *);extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_31__021983b4(void *,const void *,const void *);extern void FUN_02074fc4(void *,void *,int,int);
void FUN_overlay_31__0219a0ec(char *self) { int slot=FUN_02074f94(self);void *p;unsigned int owner;if(slot!=-1){p=FUN_020ba894(260);if(p){owner=*(unsigned int *)(self+12);p=FUN_overlay_31__021983b4(p,self+56,&owner);}FUN_02074fc4(self,p,slot,0);} }
