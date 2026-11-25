// FUN_0204644c @ 0x0204644c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_0204644c @ 0x0204644c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/0204644c.txt.
 */
extern struct { unsigned int state; unsigned int pad0[4]; void *zarc; unsigned int pad1[3]; unsigned int ref_count; } DAT_02108d6c;
void FUN_0204644c(void) { void *p; DAT_02108d6c.ref_count=0; p=DAT_02108d6c.zarc; if(p) { if(p) ((void (*)(void *))(*(void ***)p)[1])(p); DAT_02108d6c.zarc=0; } DAT_02108d6c.state=0; }
