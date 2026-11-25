// FUN_overlay_17__0211f9a0 @ 0x0211f9a0 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211f9a0 @ 0x0211f9a0 (code 0x94, full extent 0x94, thumb)
// check: vers=2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch456.md.
 */
typedef struct {unsigned kind,destination,source,count,extra;} Record;extern void FUN_020673f0(unsigned,unsigned);extern void FUN_02068450(void);extern void FUN_overlay_17__0211f958(void *,unsigned);extern void FUN_overlay_17__0211f980(void *,void *);extern void FUN_overlay_17__0211f96c(void *,unsigned);
unsigned FUN_overlay_17__0211f9a0(void *self,Record *record) { Record local;unsigned remaining;if(!record)return 0;local=*record;FUN_020673f0(local.source,local.count);while((remaining=local.count)>0xa000){local.count=0xa000;FUN_02068450();FUN_overlay_17__0211f958(self,local.kind);FUN_overlay_17__0211f980(self,&local);FUN_overlay_17__0211f96c(self,local.kind);local.count=remaining-0xa000;local.source+=0xa000;local.destination+=0xa000;}FUN_02068450();FUN_overlay_17__0211f958(self,local.kind);FUN_overlay_17__0211f980(self,&local);FUN_overlay_17__0211f96c(self,local.kind);return record->destination; }
