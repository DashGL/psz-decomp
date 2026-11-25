// FUN_020c3968 @ 0x020c3968 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c3968 @ 0x020c3968
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Load backing resource when handle absent; size/read failure returns0, successful initialization returns1.
 * Evidence: scratch/coverage-root/batch14/020c3968.txt.
 */
extern int FUN_020c39e4(void *);
extern unsigned int FUN_020ba288(const void *),FUN_020ba2d4(const void *,void *);
extern void *FUN_020ba8bc(unsigned int,int);
extern void FUN_02016cc8(void *,void *);
int FUN_020c3968(unsigned char *self,const void *path){unsigned int size;if(FUN_020c39e4(self)==1)return 1;size=FUN_020ba288(path);if(size!=~0u){*(void **)(self+12)=0;*(void **)(self+12)=FUN_020ba8bc(size,32);if(FUN_020ba2d4(path,*(void **)(self+12))!=~0u){FUN_02016cc8(self+4,*(void **)(self+12));return 1;}}return 0;}
