// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2e, exact bytes and relocation targets.
// flags: -O4,p
// USA connection state/count helpers; ABI and full extents in root batch246.
extern int FUN_020dd6d8(void *);int FUN_020e25a0(char *records,int count){int total=0,i;if(!records)return 0;for(i=0;i<count;i++,records+=12)if(FUN_020dd6d8(records))total++;return total;}
