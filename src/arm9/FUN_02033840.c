// FUN_02033840 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02033840 @ 0x02033840
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_02108c6c[];
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * OR mask into global flags and return resulting word.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02033840.txt.
 */
unsigned int FUN_02033840(unsigned int mask) { unsigned int value=*D_02108c6c| mask; *D_02108c6c=value; return value; }
