// FUN_overlay_10__02122068 @ 0x02122068 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_10__02122068 @ 0x02122068 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and construct receiver, returning embedded subobject at byte144 when successful.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_10__021218a4(void *,int);
void *FUN_overlay_10__02122068(int option) {char *p=FUN_020ba894(164);if(p)p=FUN_overlay_10__021218a4(p,option);if(p)p+=144;return p;}
