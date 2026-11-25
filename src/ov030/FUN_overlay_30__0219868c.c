// FUN_overlay_30__0219868c @ 0x0219868c (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219868c @ 0x0219868c (code 0x84, pool extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Construct a state controller and allocate six concrete child states.
 * Field identities remain provisional.
 */
extern void *FUN_02037760(void *);extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_30__02198714(void *);extern void *FUN_overlay_30__02198738(void *);extern void *FUN_overlay_30__0219874c(void *);extern void *FUN_overlay_30__02198760(void *);extern void *FUN_overlay_30__02198774(void *);extern void *FUN_overlay_30__02198788(void *);
void *FUN_overlay_30__0219868c(int *self){void *p;FUN_02037760(self);self[0]=0x0219ae3c;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=-1;p=FUN_020ba894(12);if(p)p=FUN_overlay_30__02198714(p);self[12]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_30__02198738(p);self[13]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_30__0219874c(p);self[14]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_30__02198760(p);self[15]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_30__02198774(p);self[16]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_30__02198788(p);self[17]=(int)p;return self;}
