// FUN_overlay_20__02197fac @ 0x02197fac (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_20__02197fac @ 0x02197fac (code 0x6c, full extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch427.md.
 */
extern void FUN_020352dc(void *,int,int);extern void FUN_overlay_20__021986e0(void *);extern void FUN_overlay_20__0219bc40(void *);extern void FUN_overlay_20__0219d400(void *);extern void FUN_overlay_20__0219df1c(void *);extern void FUN_overlay_20__0219e630(void *);
void * FUN_overlay_20__02197fac(int *self,int identifier) { FUN_020352dc(self,identifier,61);self[0]=0x0219f8d4;self[53]=0;self[54]=0;self[55]=0;self[56]=0;self[57]=0;self[58]=*(int *)0x020fc988;self[59]=768;self[45]=8;FUN_overlay_20__021986e0(self);FUN_overlay_20__0219bc40(self);FUN_overlay_20__0219d400(self);FUN_overlay_20__0219df1c(self);FUN_overlay_20__0219e630(self);return self; }
