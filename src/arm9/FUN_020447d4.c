// FUN_020447d4 @ 0x020447d4 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020447d4 @ 0x020447d4 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b36/020447d4.txt.
 */
typedef struct { int x,y,z; } Vector;extern void *FUN_020be450(void);extern char *FUN_020be584(void *,int,int);extern void FUN_020bf818(void *,int *);
int FUN_020447d4(char *s,int index,Vector *out) {if(index>=0 && index<*(int *)(s+0xa4)) {void *m=FUN_020be450();char *p=FUN_020be584(m,*(int *)(*(char **)(s+0xa0)+52*index),0);if(p) {int pair[2];FUN_020bf818(p+12,pair);out->x=pair[0];out->y=0;out->z=pair[1];return 1;}}return 0;}
