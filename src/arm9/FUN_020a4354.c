// FUN_020a4354 @ 0x020a4354 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern unsigned int *FUN_02072af0(void);
int FUN_020a4354(void){switch(FUN_02072af0()[2]){case 1:case 3:case 4:case 5:case 6:case 8:case 9:case 11:case 12:case 13:case 17:case 18:return 1;default:return 0;}}
