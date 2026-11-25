// FUN_overlay_26__02198d88 @ 0x02198d88 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_26__02198d88 @ 0x02198d88 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Scale supplied vector by receiver fixed-point speed and apply resulting motion.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vector;
extern int FUN_02036c34(void *);
extern void FUN_02091cc0(Vector *,const Vector *,const int *);
extern void FUN_02036fbc(void *,const Vector *);
void FUN_overlay_26__02198d88(void *p,const Vector *vector) {int speed=FUN_02036c34(p);Vector scaled;FUN_02091cc0(&scaled,vector,&speed);FUN_02036fbc(p,&scaled);}
