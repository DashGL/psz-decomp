// FUN_02083608 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02083608 @ 0x02083608 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch receiver slot +2c with signed byte read through second argument +c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083608.txt.
 */
unsigned int FUN_02083608(void *self,char *arg) { signed char *record=*(signed char **)(arg+12); unsigned int (**table)(void *,int)=*(unsigned int (***)(void *,int))self; return table[11](self,record[0]); }
