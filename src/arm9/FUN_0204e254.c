// FUN_0204e254 @ 0x0204e254 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e254 @ 0x0204e254 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b44/0204e254.txt.
 */
typedef struct{unsigned char type,level,pad[2];int amount;unsigned int rest[4];} Record;extern void *FUN_020352a4(void *,int);extern char *FUN_020352c0(void *);extern int FUN_0200a3a0(int,int);extern void FUN_0207f934(void *,Record *);extern void FUN_0207f960(void *,Record *);
void FUN_0204e254(int id,int type,int value,int amount){void *p=FUN_020352a4(*(void **)0x02108cf4,id);if(p){char *q=FUN_020352c0(p);if(q){char *s=q+100;if(s){int level=(int)((unsigned int)FUN_0200a3a0(value,5)+1);if(type>-1&&type<6&&level>0&&level<=5&&amount>=0){Record r;FUN_0207f934(s,&r);r.type=type;r.level=level;r.amount=amount;FUN_0207f960(s,&r);}}}}}
