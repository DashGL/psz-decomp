// FUN_02048efc @ 0x02048efc (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048efc @ 0x02048efc (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 42.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b42/02048efc.txt.
 */
typedef struct{unsigned int w[3];} Vector;typedef struct{unsigned int w[9];} Matrix;extern int FUN_02047440(void *);
int FUN_02048efc(char *s){int r=FUN_02047440(s);if(!r){Vector v=*(Vector *)(s+92);Matrix m=*(Matrix *)(s+112);char *p=*(char **)(s+260);if(p){*(Vector *)(p+92)=v;p=*(char **)(s+260);*(Matrix *)(p+112)=m;}}return r;}
