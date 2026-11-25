// FUN_02045920 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02045920 @ 0x02045920
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/02045920.txt.
 */
extern char DAT_02108e00[];
extern int FUN_02078188(int); extern int FUN_020458f8(void *,void *);
int FUN_02045920(int id,void *out) { int result=0; if(FUN_02078188(id)) result=FUN_020458f8(out,DAT_02108e00+4*id); return result; }
