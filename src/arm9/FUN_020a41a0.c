// FUN_020a41a0 @ 0x020a41a0 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a41a0 @ 0x020a41a0 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve entity and emit copied position notification.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a41a0.txt.
 */
typedef struct {unsigned int x,y,z;} Position;extern void *FUN_020352a4(void *,unsigned int);extern char *FUN_020a3eb8(void *);extern void FUN_02033658(int,int,void *);void FUN_020a41a0(char *self){if(!((signed char *)self)[12]){void *p=FUN_020352a4(*(void **)0x02108cf4,*(unsigned int *)(self+8));if(p){char *q=FUN_020a3eb8(p);if(q){Position pos=*(Position *)(q+28);FUN_02033658(4,12,&pos);}}}}
