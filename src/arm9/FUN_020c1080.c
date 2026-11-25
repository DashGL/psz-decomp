// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// FUN_020c1080 @ 0x020c1080
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select highest signed-byte priority above-1 among64 valid inactive records, then release/reset it.
 * Evidence: scratch/coverage-root/batch18/020c1080.txt.
 */
extern unsigned char data_0211b444[];
extern unsigned char data_0211b744[];
extern int FUN_020dd6c4(const void *);
extern void FUN_020e2648(void *),FUN_020c062c(void *);
int FUN_020c1080(void){int best=-1,priority=-1,i;for(i=0;i<64;++i){if(FUN_020dd6c4(data_0211b444+12*i)==1){signed char *record=data_0211b744+52*i;if(record[0]==0 && priority<record[2]){best=i;priority=record[2];}}}if(best!=-1){FUN_020e2648(data_0211b444+12*best);FUN_020c062c(data_0211b744+52*best);return 1;}return 0;}
