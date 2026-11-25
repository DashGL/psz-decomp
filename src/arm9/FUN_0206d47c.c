// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_0206d47c @ 0x0206d47c
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily initialize five-word static pair and compare object.
 * Evidence: scratch/coverage-root/batch12/0206d47c.txt.
 */
extern unsigned int D_0211a1ec;
extern void FUN_0206d188(void *,int,int,int,int,int);
extern int FUN_0206d1a8(const void *,const void *);
int FUN_0206d47c(const void *self){if(!(D_0211a1ec&1)){FUN_0206d188((void *)0x020f975c,8,11,4,0,1);D_0211a1ec|=1;}return FUN_0206d1a8(self,(const void *)0x020f975c);}
