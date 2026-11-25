// FUN_02031704 @ 0x02031704 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031704 @ 0x02031704 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/02031704.txt.
 */
extern void FUN_020a0bbc(void *); extern void FUN_0209e000(void); extern void FUN_02042858(void *); extern void FUN_02030f50(void *); extern void FUN_020334dc(void); extern void FUN_02032960(void *); extern void FUN_02041570(void *);
void FUN_02031704(void) { void *p; FUN_020a0bbc((void *)0x0211a640); FUN_0209e000(); FUN_02042858(*(void **)0x02108d68); p=*(void **)0x02108c58; if(p) FUN_02030f50(p); FUN_020334dc(); FUN_02032960(*(void **)0x02108c64); p=*(void **)0x02108d64; if(p) FUN_02041570(p); }
