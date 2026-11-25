// FUN_020bc894 @ 0x020bc894 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020bc894 @ 0x020bc894 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three indexed eight-byte records to supplied outputs.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc894.txt.
 */
extern void FUN_020bc8c8(void *,void *);void FUN_020bc894(char *self,int index,void *a,void *b,void *c){unsigned short *record=(unsigned short *)(*(char **)(self+52)+8*index);char *table=*(char **)(self+20);FUN_020bc8c8(a,table+8*record[0]);FUN_020bc8c8(b,table+8*record[1]);FUN_020bc8c8(c,table+8*record[2]);}
