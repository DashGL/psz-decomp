// FUN_overlay_12__021316c4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__021316c4 @ 0x021316c4 (code 0x3c, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure game view/resources and schedule callbacks with explicit stack ABI.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch366.md.
 */
extern void *FUN_overlay_12__0212d268(int,int);extern void FUN_overlay_12__02131708(void);extern void FUN_overlay_12__021319b0(void);extern void FUN_overlay_12__02131668(void *,void *,int,int,void (*)(void),void (*)(void));
int FUN_overlay_12__021316c4(int *self) { void *record;if(self[16]!=1)return 0;if(self[17]<=0)return 0;record=FUN_overlay_12__0212d268(0,12);FUN_overlay_12__02131668(self,record,3,0,FUN_overlay_12__02131708,FUN_overlay_12__021319b0);return 1; }
