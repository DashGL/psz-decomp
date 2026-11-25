// FUN_overlay_12__0212f0b8 @ 0x0212f0b8 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f0b8 @ 0x0212f0b8 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Draw selection descriptor at one of two vertical offsets.
 * Field identities remain provisional.
 */
typedef struct {short a,b,c,d;int x,y;} D;
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_12__0212f0b8(void *unused,int alternate) {D d;FUN_02071d0c(&d);FUN_02090b44(&d);d.x=0;d.y=(alternate?197:5)<<12;d.a=2;FUN_020c32b4(&d,FUN_overlay_12__02131ad0(4));}
