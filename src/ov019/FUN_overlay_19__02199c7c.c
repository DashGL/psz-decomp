// FUN_overlay_19__02199c7c @ 0x02199c7c (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__02199c7c @ 0x02199c7c (code 0x5c, full extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch411.md.
 */
extern void FUN_02075068(void *,int);extern void FUN_02072724(void *,int);extern void FUN_02044570(void *,int,int);extern void *FUN_overlay_4__02129ed4(void);extern void FUN_overlay_4__0212a9a0(void *,int);
void FUN_overlay_19__02199c7c(int *self,void *owner) { int invalid;if(self[12]!=-1){FUN_02075068(owner,self[12]);self[12]=-1;}if(self[13]!=-1){FUN_02075068(owner,self[13]);self[13]=-1;}invalid=*(int *)0x020ed0a0;if(self[14]!=invalid){FUN_02072724(owner,self[14]);self[14]=invalid;}FUN_02044570(owner,self[15],0);FUN_overlay_4__0212a9a0(FUN_overlay_4__02129ed4(),self[10]+1); }
