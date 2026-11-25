// FUN_overlay_18__0211e97c @ 0x0211e97c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211e97c @ 0x0211e97c (code 0x40, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Reset dispatch table, release display and resources, destroy holders and free receiver.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void FUN_020c3588(void *);
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_overlay_18__0211ede0(void *);
extern void *FUN_overlay_18__0211e68c(void *);
char *FUN_overlay_18__0211e97c(char *p) {*(int *)p=0x02123a4c;FUN_020c38f0(p+8,0);FUN_020c3588(p+8);FUN_overlay_18__0211ede0(p);FUN_overlay_18__0211e68c(p+72);FUN_020c3578(p+8);FUN_020c2b68(p+4);FUN_020ba8ac(p);return p;}
