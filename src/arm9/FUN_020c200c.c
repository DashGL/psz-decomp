// FUN_020c200c @ 0x020c200c (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c200c @ 0x020c200c
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate or refresh eight resource slots, preserving original allocation-failure behavior; clear three counters.
 * Evidence: scratch/coverage-root/batch18/020c200c.txt.
 */
extern void *FUN_020ba8bc(unsigned int,int),*FUN_020ba894(unsigned int),*FUN_020c29bc(void *);
extern void FUN_020c2a58(void *);
void FUN_020c200c(unsigned char *self){int i;void *p;if(!*(void ***)self){*(void ***)self=FUN_020ba8bc(0x120,16);for(i=0;i<8;++i){p=FUN_020ba894(0x24);if(p)p=FUN_020c29bc(p);(*(void ***)self)[i]=p;}}else{for(i=0;i<8;++i){p=(*(void ***)self)[i];if(!p){p=FUN_020ba894(0x24);if(p)p=FUN_020c29bc(p);(*(void ***)self)[i]=p;}else FUN_020c2a58(p);}}for(i=0;i<3;++i)((unsigned int *)(self+4))[i]=0;}
