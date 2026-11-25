// FUN_0208bda0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_02129958(void);
void *FUN_0208bda0(void){if(!*(void **)0x02197f24)FUN_02129958();return *(void **)0x02197f24;}
