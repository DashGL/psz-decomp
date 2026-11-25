// FUN_overlay_9__0211f9cc @ 0x0211f9cc (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f9cc @ 0x0211f9cc (code 0x40, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Process selected record, update selected value or clear enabled state.
 * Field identities remain provisional.
 */
extern int FUN_020b2200(void *,void *);
extern void FUN_020b2234(void *,void *);
int FUN_overlay_9__0211f9cc(int *p,short *record) {if(FUN_020b2200(p,record)){if(record[1]==0){p[29]=*(int *)(record+2);FUN_020b2234(record,(void *)0x02120de8);}else if(record[1]==-1)FUN_020b2234(record,(void *)0x02120de8);else p[26]=0;return 1;}return 0;}
