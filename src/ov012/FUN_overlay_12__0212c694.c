// FUN_overlay_12__0212c694 @ 0x0212c694 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c694 @ 0x0212c694 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load global resource using receiver-stored three parameters when initialized.
 * Field identities remain provisional.
 */
extern void FUN_020c2b84(void *,const void *,unsigned int,unsigned int,unsigned int);
void FUN_overlay_12__0212c694(const void *resource) {unsigned int *p=*(unsigned int **)0x0213f2c4;if(p)FUN_020c2b84(p,resource,p[1],p[2],p[3]);}
