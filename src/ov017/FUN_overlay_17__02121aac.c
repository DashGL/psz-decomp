// FUN_overlay_17__02121aac @ 0x02121aac (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121aac @ 0x02121aac (code 0x96, full extent 0x9c, thumb)
// check: vers=2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch522.md.
 */
extern void FUN_020c38f0(void *,int);extern void *FUN_overlay_17__0212239c(void *,int);extern void FUN_020c3788(void *,void *,int,int,unsigned);extern void *FUN_overlay_17__021223cc(void *,int);extern void FUN_overlay_17__02121f00(void *,void *);
void FUN_overlay_17__02121aac(int *self,int title,int entry,unsigned flags) { void *text;self[65]=1;self[69]=title;if(flags&16)title=26;self[70]=title;self[71]=entry;self[73]=1;self[74]=(flags&8)!=0;self[75]=(flags&4)!=0;FUN_020c38f0(self+15,0);text=FUN_overlay_17__0212239c(self,self[70]);if(text)FUN_020c3788(self+15,text,0,0,2);text=FUN_overlay_17__021223cc(self,entry);FUN_overlay_17__02121f00(self,text);if(self[74]==1)self[72]=4095; }
