// FUN_overlay_12__02121d58 @ 0x02121d58 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121d58 @ 0x02121d58 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear words +c90/+c98 then copy +c98 into +58; target reload retained for later codegen work.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02121d58(char *self) { *(unsigned int *)(self+0xc90)=0; *(unsigned int *)(self+0xc98)=0; *(unsigned int *)(self+0x58)=*(unsigned int *)(self+0xc98); return self; }
