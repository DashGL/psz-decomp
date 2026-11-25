// FUN_overlay_20__02198234 @ 0x02198234 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198234 @ 0x02198234 (code 0x62, full extent 0x68, thumb)
// check: vers=2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch413.md.
 */
extern void FUN_02035880(void *,int,int,int,int);extern void FUN_020358e8(void *,unsigned,int,void *);extern void FUN_02036b24(void *,int);
void FUN_overlay_20__02198234(int *self,int command) { switch(command){case 2:self[59]|=1;break;case 4:self[59]|=2;break;case 0:FUN_02035880(self,0,4,0,0);FUN_020358e8(self,0,4,(void *)4096);FUN_02036b24(self,0x1266);self[59]|=64;break;} }
