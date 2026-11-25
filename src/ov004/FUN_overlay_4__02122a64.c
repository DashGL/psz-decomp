// FUN_overlay_4__02122a64 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__02122a64 @ 0x02122a64 (code 0x80, pool extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Draw copied static descriptor entries and position selection marker.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_4__02122a64(int *p,int count) {struct E {int x,y;unsigned short kind,pad;};struct A {struct E e[4];} entries=*(struct A *)0x0212d7c8;struct B {int x[4];} positions=*(struct B *)0x0212d798;struct D {unsigned short a,b,c,pad;int x,y;} d;int i;FUN_02071d0c(&d);for(i=0;i<count;i++){d.a=entries.e[i].kind;d.x=entries.e[i].x;d.y=entries.e[i].y;FUN_020c32b4(&d,p[29]);}d.a=2;d.x=positions.x[p[23]];d.y=entries.e[p[23]].y-4096;FUN_020c32b4(&d,p[29]);}
