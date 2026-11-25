// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_overlay_29__02199318 @ 0x02199318
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219bd5c[];
extern int D_0219c020[];
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base object and register special kind thirty-six in shared state.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,int,int);
int *FUN_overlay_29__02199318(int *p,int id,int kind) {FUN_020352dc(p,id,kind);p[0]=0x0219bd00;p[53]=0;p[54]=0;if(kind==36){p[53]=1;*D_0219bd5c=p[3];*D_0219c020=0;}return p;}
