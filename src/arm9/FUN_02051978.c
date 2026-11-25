// FUN_02051978 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02051978 @ 0x02051978 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Forward argument to optional global receiver at base+4.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02051978.txt.
 */
extern char G_0210E248[];
extern void FUN_02051990(void *,void *);
void FUN_02051978(void *arg) { void *object=((void **)G_0210E248)[1]; if(object) FUN_02051990(object,arg); }
