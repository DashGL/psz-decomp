// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// FUN_0204c4fc @ 0x0204c4fc (inventory code 0x92, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 58.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b58/0204c4fc.txt.
 */
typedef struct{unsigned char b[4];} Record;extern int FUN_0203a1a8(void *,int);extern void FUN_0204cf68(void *,unsigned int,unsigned int);extern void *FUN_0204cdb8(unsigned int,void *,Record *,unsigned int,unsigned int,unsigned int);extern void FUN_0206e728(void *,void *);extern void FUN_0206e738(void *,void *);
void FUN_0204c4fc(char *s,unsigned int a,unsigned int b,unsigned int c){Record first=*(Record *)(s+264);if(FUN_0203a1a8(&first,16)){void *p=*(void **)(s+280);if(p)FUN_0204cf68(p,a,b);else{Record second=*(Record *)(s+264);*(void **)(s+280)=FUN_0204cdb8(*(unsigned int *)(s+232),*(void **)(s+48),&second,a,b,c);}if(*(void **)(s+280)&&*(void **)(s+48)){FUN_0206e728(*(void **)(s+48),(void *)0x0204cc5d);FUN_0206e738(*(void **)(s+48),s);}}}
