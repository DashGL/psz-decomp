// FUN_020c8ec8 @ 0x020c8ec8 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived network support.
extern int FUN_020cf7a8(void *,unsigned int,void *);
int FUN_020c8ec8(char **handle,unsigned int id){char *entry;if(!handle || !*handle)return 0;if(*(unsigned int *)(*handle+0x108))return 0;if(FUN_020cf7a8(handle,id,&entry) && *(unsigned int *)(entry+8))return 1;if(FUN_020cf7a8(handle,id,&entry) && *(unsigned int *)(entry+12))return 1;return 0;}
