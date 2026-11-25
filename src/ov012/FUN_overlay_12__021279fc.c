// FUN_overlay_12__021279fc @ 0x021279fc (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__021279fc @ 0x021279fc (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release two valid resource handles and restore invalid sentinels.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,int *);
void FUN_overlay_12__021279fc(int *p) {if(p[2]!=-1){FUN_020c2624(FUN_020c1fc8(),p+2);p[2]=-1;}if(p[3]!=-1){FUN_020c2624(FUN_020c1fc8(),p+3);p[3]=-1;}}
