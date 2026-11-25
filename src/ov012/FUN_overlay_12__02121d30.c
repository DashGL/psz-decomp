// FUN_overlay_12__02121d30 @ 0x02121d30 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121d30 @ 0x02121d30 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Configure resident display, persist result and mark receiver active on success.
 * Field identities remain provisional.
 */
extern int FUN_020c2d94(int,int,int);
int FUN_overlay_12__02121d30(char *p) {*(int *)(p+3236)=FUN_020c2d94(0,2,0);if(*(int *)(p+3236))*(int *)(p+3112)=1;return *(int *)(p+3236);}
