// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_15__02135bd0 @ 0x02135bd0 (code 0x34, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Pop newest circular-buffer element while preserving interrupt mask.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02065e30(unsigned int);
extern unsigned int FUN_02065e00(unsigned int);
extern int FUN_0205c73c(int,int);
struct Q_ov15_35bd0 { unsigned short cap; unsigned char head; unsigned char tail; void *buf[1]; };
void *FUN_overlay_15__02135bd0(struct Q_ov15_35bd0 *p) {void *value=0;unsigned int mask=FUN_02065e30(1);if(p->head!=p->tail){p->tail=FUN_0205c73c(p->tail+p->cap-1,p->cap);value=p->buf[p->tail];}FUN_02065e00(mask);return value;}
