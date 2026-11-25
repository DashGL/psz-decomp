// FUN_overlay_4__02128958 @ 0x02128958 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__02128958 @ 0x02128958 (code 0x52, pool extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Enable the shared manager flag, lazily configure the global resource holder, and reset its state.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c2b50(void *);extern void FUN_020c2c4c(void *),FUN_020c2bfc(void *,const void *,int,int,int);void FUN_overlay_4__02128958(void){unsigned char *manager=*(unsigned char **)0x02108d04;unsigned char *g=(unsigned char *)0x02197f0c;void *p;if(manager)*(unsigned int *)(manager+592)|=1;if(!*(void **)g){p=FUN_020ba894(4);if(p)p=FUN_020c2b50(p);*(void **)g=p;}FUN_020c2c4c(*(void **)g);FUN_020c2bfc(*(void **)g,(void *)0x0212ea94,7,3,5);*(int *)(g+4)=0;}
