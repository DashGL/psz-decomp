// FUN_02051468 @ 0x02051468 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02051468 @ 0x02051468 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/02051468.txt.
 */
extern int FUN_020514ac(void *);
void FUN_02051468(char *s,short *arg) { int i=arg[2]; if(i>=0 && i<**(int **)(s+12)) { char *p=*(char **)(s+8)+12*i; if(FUN_020514ac(p)) { char *r=*(char **)s+8*(*(signed char *)p); r[4]=i-*(short *)r; r[5]=*(signed char *)(r+5)|8; } } }
