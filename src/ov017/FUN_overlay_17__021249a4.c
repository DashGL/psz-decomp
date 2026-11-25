// FUN_overlay_17__021249a4 @ 0x021249a4 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__021249a4 @ 0x021249a4 (code 0x44, full extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI initialization, command
 * packaging or state transition; exact sequential getter/call behavior.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch394.md.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);extern void *FUN_overlay_17__02120980(void);extern void FUN_overlay_17__02120eb4(void *,unsigned int,unsigned int);
void FUN_overlay_17__021249a4(void *self) { unsigned int a=FUN_overlay_17__02123eec(self),b=FUN_overlay_17__02123eec(self),c=FUN_overlay_17__02123eec(self),d=FUN_overlay_17__02123eec(self),e=FUN_overlay_17__02123eec(self);FUN_overlay_17__02120eb4(FUN_overlay_17__02120980(),e,(a<<24)+(d<<16)+(c<<8)+b); }
