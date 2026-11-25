// FUN_020302f8 @ 0x020302f8 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020302f8 @ 0x020302f8 (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/020302f8.txt.
 */
extern void FUN_02044864(void *);extern void FUN_02044920(void *);extern void FUN_02034714(void *);extern void FUN_020ba8ac(void *);extern void FUN_02030d94(void *);
void *FUN_020302f8(char *s){void *p;*(unsigned int *)s=0x020f6bfc;p=*(void **)(s+20);if(p){if(p){FUN_02044864(p);FUN_020ba8ac(p);}*(void **)(s+20)=0;}p=*(void **)(s+16);if(p){if(p){FUN_02044920(p);FUN_020ba8ac(p);}*(void **)(s+16)=0;}p=*(void **)(s+12);if(p){if(p){FUN_02034714(p);FUN_020ba8ac(p);}*(void **)(s+12)=0;}FUN_02030d94(s);return s;}
