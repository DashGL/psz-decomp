// FUN_overlay_15__02127318 @ 0x02127318 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__02127318 @ 0x02127318 (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Enable new selected entry, disable previous entry and store selected byte.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__021275e8(int,int);
void FUN_overlay_15__02127318(int value) {if(value!=(*(signed char **)0x0213e7e0)[98]){FUN_overlay_15__021275e8(value,1);FUN_overlay_15__021275e8((*(signed char **)0x0213e7e0)[98],0);(*(signed char **)0x0213e7e0)[98]=value;}}
