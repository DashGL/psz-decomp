// FUN_overlay_4__0212bd1c @ 0x0212bd1c (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212bd1c @ 0x0212bd1c (code 0x86, pool extent 0x8c, thumb)
// check: vers=2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize panel selection and state, allocate two displays, apply templates, and load its resource.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,unsigned int);extern void *FUN_020ba894(unsigned int),*FUN_020c3564(void *),*FUN_020c1fc8(void);extern void FUN_overlay_4__0212c0a0(void *);extern int FUN_020c247c(void *,const char *,int);extern void FUN_020c193c(int,int,int,int,int);void *FUN_overlay_4__0212bd1c(int *self){int i;void *p;self[0]=0;self[1]=0;FUN_0200c938(self+2,16);self[6]=0;self[7]=-1;self[8]=0;self[9]=0;self[10]=0;self[11]=0;self[12]=0;for(i=1;i<4;i++)self[2+i]=0;self[2]=1;p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)self=p;p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)(self+1)=p;FUN_overlay_4__0212c0a0(self);self[7]=FUN_020c247c(FUN_020c1fc8(),(const char *)0x0212ec04,2);FUN_020c193c(0,4,0,0,-1);return self;}
