// FUN_overlay_4__0212c540 @ 0x0212c540 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212c540 @ 0x0212c540 (code 0x6a, pool extent 0x6a, thumb)
// check: vers=2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize panel state and allocate its display and resource-holder objects.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,unsigned int);extern void *FUN_020ba894(unsigned int),*FUN_020c3564(void *),*FUN_020c2b50(void *);extern void FUN_020c193c(int,int,int,int,int);extern void *FUN_02001540(void *,int,unsigned int);void *FUN_overlay_4__0212c540(int *self){void *p;self[0]=0;self[1]=0;self[2]=-1;self[3]=0;self[4]=0;self[5]=0;self[6]=-1;self[7]=0;self[8]=0;FUN_0200c938(self+9,16);p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)self=p;p=FUN_020ba894(4);if(p)p=FUN_020c2b50(p);*(void **)(self+1)=p;FUN_020c193c(0,4,0,0,-1);FUN_02001540(self+9,0,16);return self;}
