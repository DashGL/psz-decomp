// FUN_overlay_4__0212940c @ 0x0212940c (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212940c @ 0x0212940c (code 0x50, pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Enable the shared manager flag and lazily configure a global resource holder.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c2b50(void *);extern void FUN_020c2c4c(void *),FUN_020c2bfc(void *,const void *,int,int,int);void FUN_overlay_4__0212940c(void){unsigned char *manager=*(unsigned char **)0x02108d04;unsigned char *g=(unsigned char *)0x02197f18;void *p;if(manager)*(unsigned int *)(manager+592)|=1;*(int *)g=0;if(!*(void **)(g+4)){p=FUN_020ba894(4);if(p)p=FUN_020c2b50(p);*(void **)(g+4)=p;}FUN_020c2c4c(*(void **)(g+4));FUN_020c2bfc(*(void **)(g+4),(void *)0x0212eac4,7,3,5);}
