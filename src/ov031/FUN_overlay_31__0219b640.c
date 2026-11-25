// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// FUN_overlay_31__0219b640 @ 0x0219b640
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Resolve three game child objects and
 * coordinate table-selected state transition. Exact guards preserved.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch382.md.
 */
extern int data_0219c68c[];
extern void FUN_overlay_31__0219b724(void *,void **);extern int FUN_overlay_31__0219883c(void *);extern void FUN_overlay_31__0219991c(void *,int);
void FUN_overlay_31__0219b640(int *self) { void *children[3];int *spec;int count,i;if(self[79]>=5)return;FUN_overlay_31__0219b724(self,children);spec=data_0219c68c+2*self[79];count=spec[1];for(i=0;i<count;i++){void *p=children[((int *)spec[0])[i]];if(!p || !FUN_overlay_31__0219883c((char *)p+0xf0))self[79]=5;}for(i=0;i<3;i++)if(children[i])FUN_overlay_31__0219991c(children[i],self[79]);self[79]=6; }
