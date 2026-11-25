// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// FUN_020c133c @ 0x020c133c
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate aligned backing region and heap handle, initialize embedded allocator, assign wrapping byte ID.
 * Evidence: scratch/coverage-root/batch11/020c133c.txt.
 */
extern unsigned char D_020fca40;
extern void *FUN_020ba8bc(unsigned int,int);
extern void *FUN_02012168(void *,unsigned int,unsigned int);
extern void FUN_02012890(void *,void *,unsigned int);
extern unsigned int FUN_020122c4(void *,unsigned int);
unsigned char *FUN_020c133c(unsigned char *self,unsigned int size){*(unsigned int *)self=0x020fca4c;*(void **)(self+4)=FUN_020ba8bc(size,16);*(void **)(self+8)=FUN_02012168(*(void **)(self+4),size,0);FUN_02012890(self+12,*(void **)(self+8),16);self[28]=D_020fca40;++D_020fca40;FUN_020122c4(*(void **)(self+8),self[28]);return self;}
