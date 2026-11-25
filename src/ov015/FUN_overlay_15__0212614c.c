// FUN_overlay_15__0212614c @ 0x0212614c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212614c @ 0x0212614c (code 0x2e, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Enable new selected entry, disable previous entry and store selected byte.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__0212650c(int,int);
void FUN_overlay_15__0212614c(int value) {if(value!=(*(signed char **)0x0213e7dc)[287]){FUN_overlay_15__0212650c(value,1);FUN_overlay_15__0212650c((*(signed char **)0x0213e7dc)[287],0);(*(signed char **)0x0213e7dc)[287]=value;}}
