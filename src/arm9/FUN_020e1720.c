// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
// flags: -O4,p
// USA allocation/state adapters; full ABI and extents in root batch245.
extern int FUN_020e4fac(unsigned char **);extern int FUN_020e4db8(int,int);int FUN_020e1720(int value){unsigned char *bytes;int count=FUN_020e4fac(&bytes),i;for(i=0;i<count;i++)if(bytes[i]==value)break;if(i==count)return 0;return FUN_020e4db8(i,count);}
