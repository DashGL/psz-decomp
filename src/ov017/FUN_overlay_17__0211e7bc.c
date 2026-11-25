// FUN_overlay_17__0211e7bc @ 0x0211e7bc (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211e7bc @ 0x0211e7bc (code 0x62, full extent 0x6c, thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch427.md.
 */
extern void FUN_overlay_17__0211e8a8(void *,void *,void *,void *);extern unsigned FUN_overlay_17__0211fa3c(void *,unsigned,unsigned,unsigned,unsigned);extern unsigned FUN_overlay_17__0211fa74(void *,unsigned,unsigned,unsigned,unsigned);extern void FUN_overlay_17__0211e8c4(void *,void *);
void FUN_overlay_17__0211e7bc(unsigned *self,void *first,void *second) { unsigned size=0,address=0;if(first){FUN_overlay_17__0211e8a8(self,first,&address,&size);FUN_overlay_17__0211fa3c(self,address,size,self[0x2bb4/4],0);FUN_overlay_17__0211e8c4(self,&address);}if(second){FUN_overlay_17__0211e8a8(self,second,&address,&size);FUN_overlay_17__0211fa74(self,address,size,self[0x2bc8/4],1);FUN_overlay_17__0211e8c4(self,&address);} }
