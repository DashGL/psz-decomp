// FUN_overlay_4__02126504 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__02126504 @ 0x02126504 (code 0x4c, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Render descriptor with table-selected x position unless state is ten.
 * Field identities remain provisional.
 */
typedef struct {int v[4];} T;
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_4__02126504(int *p) {T positions;int t[4];if(p[0]!=10){positions=*(T *)0x0212d96c;FUN_02071d0c(t);*(short *)t=p[0]==3?2:3;t[2]=positions.v[p[25]];t[3]=0xeb000;FUN_020c32b4(t,p[37]);}}
