// FUN_02041e98 @ 0x02041e98 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041e98 @ 0x02041e98 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/02041e98.txt.
 */
extern void FUN_02042388(void *); extern void FUN_020ba8c4(void *); extern void FUN_0206e5bc(void *); extern void FUN_020ba8ac(void *);
void *FUN_02041e98(char *s) { *(unsigned int *)s=0x020f8e08; FUN_02042388(s); if(*(void **)(s+0xf8)) FUN_020ba8c4(*(void **)(s+0xf8)); if(*(void **)(s+0xf4)) FUN_020ba8c4(*(void **)(s+0xf4)); FUN_0206e5bc(s); FUN_020ba8ac(s); return s; }
