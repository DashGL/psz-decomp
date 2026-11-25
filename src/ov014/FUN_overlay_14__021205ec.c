// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_14__021205ec @ 0x021205ec (code 0x1c, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Apply value to nonnull child at valid signed index zero through two.
 * Field identities remain provisional.
 */
extern void FUN_02078ff0(void *,unsigned int);
struct S_ov14_205ec { unsigned int pad[16]; void *children[3]; };
void FUN_overlay_14__021205ec(struct S_ov14_205ec *p,int index,unsigned int value) {if(index>=0 && index<3){void *child=p->children[index];if(child)FUN_02078ff0(child,value);}}
