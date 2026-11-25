// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_overlay_18__0211f9dc @ 0x0211f9dc
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. UI resource state selection or
 * game-script expression evaluation with original token/field semantics.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch395.md.
 */
extern void FUN_overlay_18__0212079c(void *,void *,void *);
void FUN_overlay_18__0211f9dc(int *self,int index) { if(index>=0){self[0x2ba4/4]=1;self[0x394/4]=0;self[0x2ba0/4]=0;self[0x398/4]=0;self[0x390/4]=index;self[0x38c/4]=(((int *)self[0x388/4])+self[0x390/4])[1];FUN_overlay_18__0212079c(self,(char *)self+0x3a0,(void *)self[0x38c/4]);} }
