// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// Typed record evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned char bytes[4];}Key_0204c624;
// FUN_0204c624 @ 0x0204c624 (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 42.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b42/0204c624.txt.
 */
typedef struct{unsigned int w[3];} Vector;extern void FUN_0200c938(void *,unsigned int);extern int FUN_0203a1a8(void *,int);extern void FUN_02034680(void *,void *);
void FUN_0204c624(Vector *out,char *s){Vector value;unsigned char record[4];int i;FUN_0200c938(&value,12);*(Key_0204c624*)record=*(const Key_0204c624*)(s+264);if(FUN_0203a1a8(record,16)){char *p=*(char **)(s+280);if(p){Vector temp=*(Vector *)(p+36);FUN_02034680(&value,&temp);}}*out=value;}
