// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b444[];
// FUN_020c0f50 @ 0x020c0f50
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Search64 twelve-byte records: validity, pair equality and final predicate must all return1.
 * Evidence: scratch/coverage-root/batch11/020c0f50.txt.
 */
extern int FUN_020dd6c4(const void *);
extern int FUN_020dd920(const void *,const void *);
extern int FUN_020dd250(const void *);
int FUN_020c0f50(const void *key){int i;if(FUN_020dd6c4(key)==1){for(i=0;i<64;++i){const void *entry=(const unsigned char *)((unsigned int)DAT_0211b444 + 0u)+i*12;if(FUN_020dd6c4(entry)==1 && FUN_020dd920(key,entry)==1 && FUN_020dd250(entry)==1)return 1;}}return 0;}
