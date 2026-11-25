// FUN_overlay_4__02128ec8 @ 0x02128ec8 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02128ec8 @ 0x02128ec8 (code 0x4e, pool extent 0x4e, thumb)
// check: vers=2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Clear displays and render shared text resource when manager is present.
 * Field identities remain provisional.
 */
extern void *FUN_02086e3c(void);
extern int FUN_02087254(void *);
extern void FUN_020c38f0(void *,int);
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern int FUN_02077d98(void *);
extern void *FUN_0208efa8(void *,int,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_4__02128ec8(int *p) {void *m,*text;FUN_02087254(FUN_02086e3c());FUN_020c38f0((void *)p[2],0);FUN_020c38f0((void *)p[1],0);m=FUN_0208f068();if(m){text=FUN_0208efa8(m,FUN_02077d98(FUN_02077930()),0,17);FUN_020c3788((void *)p[1],text,0,0,2);p[4]=3;}}
