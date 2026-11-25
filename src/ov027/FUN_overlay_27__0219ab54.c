// FUN_overlay_27__0219ab54 @ 0x0219ab54 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219ab54 @ 0x0219ab54 (code 0x72, pool extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Construct a state controller and allocate its five concrete child states.
 * Field identities remain provisional.
 */
extern void *FUN_02037760(void *);extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_27__0219abcc(void *);extern void *FUN_overlay_27__0219abe0(void *);extern void *FUN_overlay_27__0219abf4(void *);extern void *FUN_overlay_27__0219ac08(void *);extern void *FUN_overlay_27__0219ac1c(void *);
void *FUN_overlay_27__0219ab54(int *self){void *p;FUN_02037760(self);self[0]=0x0219c66c;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=-1;self[18]=0;p=FUN_020ba894(12);if(p)p=FUN_overlay_27__0219abcc(p);self[12]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_27__0219abe0(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_27__0219abf4(p);self[15]=(int)p;p=FUN_020ba894(28);if(p)p=FUN_overlay_27__0219ac08(p);self[14]=(int)p;p=FUN_020ba894(48);if(p)p=FUN_overlay_27__0219ac1c(p);self[16]=(int)p;return self;}
