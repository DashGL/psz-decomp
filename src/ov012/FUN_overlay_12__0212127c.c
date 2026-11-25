// FUN_overlay_12__0212127c @ 0x0212127c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212127c @ 0x0212127c (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Save previous state, install next, and request resident mode on state two.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__02121298(void *);
extern int FUN_020c2d94(int,int,int);
void FUN_overlay_12__0212127c(unsigned int *p,unsigned int state) {p[5]=p[4];p[4]=state;if(state==2)FUN_020c2d94(FUN_overlay_12__02121298(p),2,0);}
