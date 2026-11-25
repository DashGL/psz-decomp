// FUN_020c19b0 @ 0x020c19b0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c19b0 @ 0x020c19b0
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset singleton contexts, open resource, update subsystem and store resulting index.
 * Evidence: scratch/coverage-root/batch16/020c19b0.txt.
 */
extern void FUN_020c1e64(void *),FUN_020c1b14(void);
extern int FUN_0200e834(void *,const void *,void *,int);
extern void FUN_0200fe0c(void *),FUN_02010130(int,void *);
extern unsigned int FUN_0200f1f4(void *);
void FUN_020c19b0(const void *path){unsigned char *self=*(unsigned char **)0x0211c85c;FUN_020c1e64(self);*(unsigned int *)(self+0x10c)=0;FUN_020c1b14();self=*(unsigned char **)0x0211c85c;FUN_0200e834(self+0x20,path,*(void **)(self+8),0);FUN_0200fe0c(*(void **)(*(unsigned char **)0x0211c85c+8));FUN_02010130(10,*(void **)(*(unsigned char **)0x0211c85c+8));{unsigned int value=FUN_0200f1f4(*(void **)(*(unsigned char **)0x0211c85c+8));*(unsigned int *)(*(unsigned char **)0x0211c85c+24)=value;}}
