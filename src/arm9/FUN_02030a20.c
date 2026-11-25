// FUN_02030a20 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02030a20 @ 0x02030a20 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02030a20.txt.
 */
extern char G_02108C50[];
extern void FUN_02030900(void *); extern void FUN_020ba8ac(void *);
void *FUN_02030a20(void **s) { void *p; ((unsigned int *)G_02108C50)[1]=0; p=s[1]; if(p) { if(p) { FUN_02030900(p); FUN_020ba8ac(p); } s[1]=0; } p=s[0]; if(p) { if(p) { FUN_02030900(p); FUN_020ba8ac(p); } s[0]=0; } return s; }
