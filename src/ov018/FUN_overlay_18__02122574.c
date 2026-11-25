// FUN_overlay_18__02122574 @ 0x02122574 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_18__02122574 @ 0x02122574 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay18 ROM reconstruction, 2026-11-05.
 * Release two non-sentinel handles, embedded slot, then free self.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch354.md.
 */
extern void FUN_overlay_18__0211f8fc(unsigned int);
extern void *FUN_020c2b68(void *);extern void FUN_020ba8ac(void *);
void *FUN_overlay_18__02122574(int *self) {self[0]=0x02124154;if(self[3]!=-1)FUN_overlay_18__0211f8fc(self[3]);if(self[4]!=-1)FUN_overlay_18__0211f8fc(self[4]);FUN_020c2b68(self+1);FUN_020ba8ac(self);return self;}
