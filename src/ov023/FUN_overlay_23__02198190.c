// FUN_overlay_23__02198190 @ 0x02198190 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198190 @ 0x02198190 (code 0x6c, pool extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize controller state and allocate its concrete child states.
 * Field identities remain provisional.
 */
extern void *FUN_02037760(void *);extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_23__02198204(void *);extern void *FUN_overlay_23__02198228(void *);extern void *FUN_overlay_23__0219823c(void *);extern void *FUN_overlay_23__02198250(void *);
void *FUN_overlay_23__02198190(int *self){void *p;FUN_02037760(self);self[0]=0x0219d5f0;self[12]=*(int *)0x020fc988;self[13]=-1;self[14]=-1;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;p=FUN_020ba894(20);if(p)p=FUN_overlay_23__02198204(p);self[17]=(int)p;p=FUN_020ba894(36);if(p)p=FUN_overlay_23__02198228(p);self[18]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_23__0219823c(p);self[19]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_23__02198250(p);self[20]=(int)p;return self;}
