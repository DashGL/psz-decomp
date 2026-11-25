// FUN_02031a80 @ 0x02031a80 (0xb4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031a80 @ 0x02031a80 (inventory code 0xac, thumb)
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 127.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b127/02031a80.txt.
 */
extern void FUN_0209cf20(void *);extern void *FUN_020ba894(unsigned int),*FUN_020797cc(void *,int),*FUN_0207f194(void *,int,int),*FUN_020ba374(void *,void *,int),*FUN_020ba440(void *);void *FUN_02031a80(unsigned int *s){int i;void *p;unsigned int size;s[2]=0;s[7]=0;s[8]=0;s[9]=0;s[10]=0;FUN_0209cf20(s+11);s[13]=~0u;s[18]=~0u;s[19]=0;s[20]=0;for(i=0;i<2;i++){s[i+3]=0;s[i+5]=0;s[i+14]=~0u;s[i+16]=~0u;}p=FUN_020ba894(20);if(p)p=FUN_020797cc(p,704);*(void **)s=p;p=FUN_020ba894(20);if(p)p=FUN_020797cc(p,1024);((void **)s)[1]=p;p=FUN_020ba894(16);if(p)p=FUN_0207f194(p,20,1);((void **)s)[9]=p;p=FUN_020ba894(16);if(p)p=FUN_0207f194(p,4,0);((void **)s)[10]=p;size=0;((void **)s)[8]=FUN_020ba374((void *)0x020f6c90,&size,16);((void **)s)[7]=FUN_020ba440(((void **)s)[8]);*(void **)0x02108c60=s;return s;}
