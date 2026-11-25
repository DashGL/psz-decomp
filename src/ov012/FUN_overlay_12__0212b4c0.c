// FUN_overlay_12__0212b4c0 @ 0x0212b4c0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212b4c0 @ 0x0212b4c0 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Compare valid player and selection identifiers against current context.
 * Field identities remain provisional.
 */
extern int FUN_02084cc0(void *);
int FUN_overlay_12__0212b4c0(int *p,int player,int selection) {if(player!=-1 && selection!=-1 && player==FUN_02084cc0((void *)0x0211a51c) && selection==p[111])return 1;return 0;}
