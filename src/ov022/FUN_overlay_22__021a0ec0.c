// FUN_overlay_22__021a0ec0 @ 0x021a0ec0 (0xc4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0ec0 @ 0x021a0ec0 (code 0x94, full extent 0xc4, thumb)
// check: vers=2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch502.md.
 */
typedef struct {int x,y;} Pair;extern void FUN_overlay_22__02199f90(void *,int,int);
void FUN_overlay_22__021a0ec0(void) { volatile Pair local;int first,second;int *out=(int *)0x021a10b4;FUN_overlay_22__02199f90((void *)0x021a106c,-40960,-40960);FUN_overlay_22__02199f90((void *)0x021a1074,0,-40960);FUN_overlay_22__02199f90((void *)0x021a107c,40960,-40960);FUN_overlay_22__02199f90((void *)0x021a1084,-40960,0);FUN_overlay_22__02199f90((void *)0x021a108c,0,0);FUN_overlay_22__02199f90((void *)0x021a1094,40960,0);FUN_overlay_22__02199f90((void *)0x021a109c,-40960,40960);FUN_overlay_22__02199f90((void *)0x021a10a4,0,40960);FUN_overlay_22__02199f90((void *)0x021a10ac,40960,40960);first=((int *)0x020ebb98)[0];second=((int *)0x020ebb98)[1];local.x=first;out[0]=first;out[1]=second;out[2]=first;out[3]=second;out[4]=first;out[5]=second;out[8]=first;out[9]=second;out[10]=first;out[11]=second;out[14]=first;out[15]=second;out[20]=first;local.y=second;out[21]=second; }
