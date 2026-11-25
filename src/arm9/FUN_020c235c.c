// FUN_020c235c @ 0x020c235c (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c235c @ 0x020c235c
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct resource path, load parsed resource, flush data cache, process descriptor and release backing allocation.
 * Evidence: scratch/coverage-root/batch16/020c235c.txt.
 */
extern void FUN_0201347c(void *),FUN_02003d54(void *,const void *,unsigned int),FUN_02003dd4(void *,const void *,unsigned int);
extern void *FUN_020c2174(void *,void *,const void *);
extern void FUN_0206740c(void *,unsigned int),FUN_020136fc(void *,int,unsigned int,void *),FUN_020ba8c4(void *);
void FUN_020c235c(void *self,unsigned char *record,unsigned int kind,const void *path){void *allocation;unsigned char *data;FUN_0201347c(record+0x3c);FUN_02003d54((void *)0x0211c864,path,127);FUN_02003dd4((void *)0x0211c864,(const void *)0x020fcaa8,127);allocation=FUN_020c2174(self,record+12,(const void *)0x0211c864);data=*(unsigned char **)(record+12);FUN_0206740c(*(void **)(data+12),*(unsigned int *)(data+8));FUN_020136fc(*(void **)(record+12),0,kind,record+0x3c);if(allocation)FUN_020ba8c4(allocation);}
