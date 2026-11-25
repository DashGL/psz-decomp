// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
// Typed record evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned char bytes[4];}Key_0204c594;
// FUN_0204c594 @ 0x0204c594 (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/0204c594.txt.
 */
extern int FUN_0203a1a8(void *,int);extern void FUN_0204cdf4(void *);extern void FUN_0206e728(void *,void *);extern void FUN_0206e738(void *,void *);
void FUN_0204c594(char *s){unsigned char record[4];int i;*(Key_0204c594*)record=*(const Key_0204c594*)(s+264);if(FUN_0203a1a8(record,16)){if(*(void **)(s+280)){FUN_0204cdf4(*(void **)(s+280));*(void **)(s+280)=0;}if(*(void **)(s+48)){FUN_0206e728(*(void **)(s+48),0);FUN_0206e738(*(void **)(s+48),0);}}}
