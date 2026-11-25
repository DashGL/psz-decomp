// FUN_02083618 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02083618 @ 0x02083618 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch receiver slot with signed record byte and third-argument subobject +10.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083618.txt.
 */
unsigned int FUN_02083618(void *self,char *arg,char *value) { signed char *record=*(signed char **)(arg+12); unsigned int (**table)(void *,int,void *)=*(unsigned int (***)(void *,int,void *))self; return table[12](self,record[0],value+16); }
