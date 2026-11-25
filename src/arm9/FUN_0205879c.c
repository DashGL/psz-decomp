// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_0205879c @ 0x0205879c (inventory code 0x50, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 226.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b226/0205879c.txt.
 */
int FUN_0205879c(const unsigned char *a,const unsigned char *b,unsigned int count){unsigned int i,x,y;for(i=0;i<count;i++){x=(unsigned int)a[i]-65;y=(unsigned int)b[i]-65;if(x<=25)x+=32;if(y<=25)y+=32;if(x!=y)return (int)(x-y);}return 0;}
