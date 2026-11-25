// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b3d8[];
// FUN_020c0664 @ 0x020c0664
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize typed record; copy20-byte and16-byte fields then pack refreshed date fields.
 * Evidence: scratch/coverage-root/batch11/020c0664.txt.
 */
extern void FUN_020c062c(void *);
extern unsigned int FUN_020c0598(void);
extern void FUN_02074504(void *,const void *);
extern void FUN_020743fc(void *,const void *);
extern void FUN_020c0c58(void);
extern void FUN_020c064c(void *,unsigned int,unsigned int,unsigned int);
void FUN_020c0664(unsigned char *self,unsigned int a,unsigned int b,const void *name,const void *other){FUN_020c062c(self);self[1]=2;*(unsigned int *)(self+8)=a;*(unsigned int *)(self+12)=b;*(unsigned short *)(self+6)=FUN_020c0598();FUN_02074504(self+16,name);FUN_020743fc(self+36,other);FUN_020c0c58();FUN_020c064c(self,*(unsigned int *)((unsigned int)DAT_0211b3d8 + 4u),*(unsigned int *)((unsigned int)DAT_0211b3d8 + 8u),*(unsigned int *)((unsigned int)DAT_0211b3d8 + 12u));}
