// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// FUN_020c32b4 @ 0x020c32b4
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply resource-backed drawing state after validating handle, global enable, resource and subresource.
 * Evidence: scratch/coverage-root/batch1/020c32b4.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern unsigned int D_020fcb20[];
extern void *FUN_020c1fc8(void), *FUN_020c2680(void *,unsigned int), *FUN_02012914(void *,unsigned int);
extern int FUN_020c2608(void *,unsigned int);
extern void FUN_020149ec(void *,void *,void *), FUN_02014860(unsigned int,unsigned int,unsigned int), FUN_02014488(void *);
void FUN_020c32b4(char *self,unsigned int handle) {
    char *resource; void *part;
    if(handle==~0u) return;
    if(!FUN_020c2608(FUN_020c1fc8(),handle)) return;
    if(!D_020fcb20[1]) return;
    resource=FUN_020c2680(FUN_020c1fc8(),handle);
    if(!resource) return;
    part=FUN_02012914(*(void **)(resource+20),*(unsigned short *)self);
    if(!part) return;
    FUN_020149ec((void *)0x0211c9b8,resource+24,resource+60);
    FUN_02014860(*(unsigned int *)(self+8),*(unsigned int *)(self+12),*(unsigned short *)(self+4));
    FUN_02014488(part);
}
