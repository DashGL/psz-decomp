// FUN_overlay_4__0212bbdc @ 0x0212bbdc (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212bbdc @ 0x0212bbdc (code 0x60, pool extent 0x6c, thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Prepare the active entity and lazily configure the shared panel resource.
 * Field identities remain provisional.
 */
extern int FUN_020907a0(void *);extern void FUN_0203d010(void *);extern void *FUN_020ba894(unsigned int),*FUN_020c2b50(void *);extern void FUN_020c2c4c(void *),FUN_020c2bfc(void *,const void *,int,int,int);void FUN_overlay_4__0212bbdc(void){unsigned char *manager=*(unsigned char **)0x02108d04;unsigned char *g=(unsigned char *)0x02197f44;void *p;if(manager){*(unsigned int *)(manager+592)|=1;FUN_020907a0(manager);FUN_0203d010(manager);}*(int *)(g+8)=0;if(!*(void **)g){p=FUN_020ba894(4);if(p)p=FUN_020c2b50(p);*(void **)g=p;}FUN_020c2c4c(*(void **)g);FUN_020c2bfc(*(void **)g,(void *)0x0212ebec,7,3,5);}
