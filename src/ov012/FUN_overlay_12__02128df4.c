// FUN_overlay_12__02128df4 @ 0x02128df4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128df4 @ 0x02128df4 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release stored resource handle through resident manager unless sentinel.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,unsigned int *);
void FUN_overlay_12__02128df4(unsigned int *p) {if(p[4]!=~0U)FUN_020c2624(FUN_020c1fc8(),p+4);}
