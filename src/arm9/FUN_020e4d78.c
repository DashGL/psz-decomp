// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -O4,p
// USA connection state/count helpers; ABI and full extents in root batch246.
extern unsigned char *FUN_020e961c(void);extern int FUN_020e4db8(int,int);int FUN_020e4d78(unsigned int key,int count){int i;if(!FUN_020e961c())return 0;for(i=0;i<count;i++){if(*(unsigned int *)(FUN_020e961c()+244+i*4)==key){FUN_020e4db8(i,count);return 1;}}return 0;}
