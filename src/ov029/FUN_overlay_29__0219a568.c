// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// FUN_overlay_29__0219a568 @ 0x0219a568
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch470.md.
 */
extern void FUN_02075068(void *,int);extern void FUN_02072724(void *,int);extern void *FUN_02035518(void *);
void * FUN_overlay_29__0219a568(int *self) { int i;self[0]=0x0219be9c;for(i=0;i<3;i++){int *entry=(int *)((char *)self+i*24);if(entry[54]!=-1){FUN_02075068(self,entry[54]);entry[54]=-1;}if(entry[55]!=-1){FUN_02072724(self,entry[55]);entry[55]=-1;}}if(self[72]!=-1){FUN_02072724(self,self[72]);self[72]=-1;}if(self[73]!=-1){FUN_02072724(self,self[73]);self[73]=-1;}if(self[74]!=-1){FUN_02075068(self,self[74]);self[74]=-1;}FUN_02035518(self);return self; }
