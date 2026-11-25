// FUN_overlay_15__02134a78 @ 0x02134a78 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02134a78 @ 0x02134a78 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay15 ROM reconstruction, 2026-11-05.
 * Poll asynchronous status and transition game controller state.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch359.md.
 */
extern void FUN_overlay_15__02134a10(void);extern void FUN_overlay_15__02134568(void);
int FUN_overlay_15__02134a78(void) { unsigned int state=(*(unsigned char **)0x0213e8e8)[0xa90];if(state==1 || state==26 || state==29){FUN_overlay_15__02134a10();FUN_overlay_15__02134568();(*(unsigned char **)0x0213e8e8)[0xa90]=2;return 1;}return 0; }
