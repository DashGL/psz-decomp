// FUN_overlay_18__02122540 @ 0x02122540 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__02122540 @ 0x02122540 (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay18 ROM reconstruction, 2026-11-05.
 * Release two non-sentinel handles, embedded slot, return self.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch354.md.
 */
extern void FUN_overlay_18__0211f8fc(unsigned int);
extern void *FUN_020c2b68(void *);extern void FUN_020ba8ac(void *);
void *FUN_overlay_18__02122540(int *self) {self[0]=0x02124154;if(self[3]!=-1)FUN_overlay_18__0211f8fc(self[3]);if(self[4]!=-1)FUN_overlay_18__0211f8fc(self[4]);FUN_020c2b68(self+1);return self;}
