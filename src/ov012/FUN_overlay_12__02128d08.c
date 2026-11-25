// FUN_overlay_12__02128d08 @ 0x02128d08 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128d08 @ 0x02128d08 (code 0x44, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Draw the state-dependent marker using resource bank three.
 * Field identities remain provisional.
 */
typedef struct{unsigned short graphic,a,b,pad;int x,y;}Draw;extern int FUN_overlay_12__02131ad0(int);extern void FUN_020c32b4(void *,int);
void FUN_overlay_12__02128d08(int *self){int handle=FUN_overlay_12__02131ad0(3);Draw draw;draw.graphic=0;draw.a=0;draw.b=0;draw.graphic=0;draw.a=0;draw.b=0;draw.x=0;draw.y=0;draw.x=0;draw.y=20480;draw.graphic=self[2]==0?2:1;FUN_020c32b4(&draw,handle);}
