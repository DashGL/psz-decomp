// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
// FUN_overlay_15__02135b98 @ 0x02135b98 (code 0x36, pool extent 0x36, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Enqueue circular-buffer element under interrupt mask, panicking on full queue.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02065e30(unsigned int);
extern unsigned int FUN_02065e00(unsigned int);
extern int FUN_0205c73c(int,int);
extern void FUN_02068728(void);
struct Q_ov15_35b98 { unsigned short cap; unsigned char head; unsigned char tail; void *buf[1]; };
void FUN_overlay_15__02135b98(struct Q_ov15_35b98 *p,void *value) {unsigned int mask=FUN_02065e30(1);int next=FUN_0205c73c(p->tail+1,p->cap);if(next==p->head)FUN_02068728();p->buf[p->tail]=value;p->tail=next;FUN_02065e00(mask);}
