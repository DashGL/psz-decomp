// FUN_0204a8fc @ 0x0204a8fc (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a8fc @ 0x0204a8fc (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/0204a8fc.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;typedef struct{unsigned int w[12];} Matrix;extern void FUN_0205aaa4(void *,Matrix *);extern void FUN_0205b16c(Matrix *);extern void FUN_0205b68c(Matrix *,Matrix *,Matrix *);extern void FUN_0205b1c8(Matrix *,Matrix *,unsigned int,unsigned int,unsigned int);extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);
void FUN_0204a8fc(Vector *out,char *s,void *rotation,Vector *shift){Matrix a,b;Vector v;FUN_0205aaa4(rotation,&a);FUN_0205b16c(&b);FUN_0205b68c(&b,&a,&b);FUN_0205b1c8(&b,&b,shift->x,shift->y,shift->z);FUN_02035408(&v,*(unsigned int *)(s+36)+b.w[9],*(unsigned int *)(s+40)+b.w[10],*(unsigned int *)(s+44)+b.w[11]);*out=v;}
