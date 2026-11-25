// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x9a, exact bytes and relocation targets.
// FUN_0204c1d8 @ 0x0204c1d8 (inventory code 0x9a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 61.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b61/0204c1d8.txt.
 */
typedef struct{unsigned char b[4];} Record;extern int FUN_0203a820(void *,int);extern int FUN_0203a1a8(void *,int);extern int FUN_02046660(unsigned int,void *);
int FUN_0204c1d8(char *s,int *out){int result=1;Record d,a,b,c;*out=-1;a=*(Record *)(s+208);if(FUN_0203a820(&a,0)){b=*(Record *)(s+208);if(!FUN_0203a1a8(&b,0)){c=*(Record *)(s+208);if(!FUN_0203a1a8(&c,17)){d=*(Record *)(s+208);*out=FUN_02046660(*(unsigned int *)(s+232),&d);if(*out<0)result=0;}}}return result;}
