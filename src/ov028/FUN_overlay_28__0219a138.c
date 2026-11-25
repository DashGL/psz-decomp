// FUN_overlay_28__0219a138 @ 0x0219a138 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a138 @ 0x0219a138 (code 0x50, full extent 0x54, thumb)
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full game initialization procedure.
 * Behavior and inherited ABI: notes/sessions/coverage-overlays-2026-11-05-batch372.md.
 */
extern void *FUN_020352dc(void *,unsigned int,unsigned int);extern void FUN_02044570(void *,int,int);extern void FUN_02035880(void *,int,int,int,int);extern void FUN_020358e8(void *,int,int,void *);
void * FUN_overlay_28__0219a138(int *self,unsigned int id,unsigned int resource) { FUN_020352dc(self,id,resource);self[0]=0x0219c1dc;self[53]=1;self[54]=0;
FUN_02044570(self,1,1);FUN_02044570(self,0,0);
FUN_02035880(self,0,4,0,0);FUN_020358e8(self,0,4,0);return self; }
