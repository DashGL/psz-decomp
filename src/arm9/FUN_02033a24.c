// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_02033a24 @ 0x02033a24 (inventory code 0x28, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/02033a24.txt.
 */
extern int FUN_0201cc18(void *);
struct S_02033a24 { char pad[8]; void *p; char pad2[12]; unsigned short b0 : 1; unsigned short rest : 15; };
void FUN_02033a24(struct S_02033a24 *s) { if(!s->b0) { if(s->p && FUN_0201cc18(s->p)) s->b0=1; } }
