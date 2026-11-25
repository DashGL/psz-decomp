// FUN_overlay_4__02124eb0 @ 0x02124eb0 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__02124eb0 @ 0x02124eb0 (code 0x62, pool extent 0x68, thumb)
// check: vers=2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and initialize the inventory display from its fixed template, then set its active flag.
 * Field identities remain provisional.
 */
typedef struct {unsigned int w[8];} Template;extern void *FUN_020ba894(unsigned int);extern void *FUN_020c3564(void *);extern void FUN_020c35ac(void *,int),FUN_020c35d4(void *,const Template *),FUN_020c38f0(void *,int);void FUN_overlay_4__02124eb0(unsigned char *self){void *p=FUN_020ba894(60);Template config;if(p)p=FUN_020c3564(p);*(void **)(self+160)=p;if(*(void **)(self+160)){FUN_020c35ac(*(void **)(self+160),1);config=*(const Template *)0x0212d998;FUN_020c35d4(*(void **)(self+160),&config);FUN_020c38f0(*(void **)(self+160),0);*(unsigned int *)(self+188)|=2;}}
