// FUN_overlay_12__02120f78 @ 0x02120f78 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_020c1fc8(void),*FUN_0208f068(void);
extern void FUN_020c2624(void *,int *),FUN_0208efd4(void *,int);
void FUN_overlay_12__02120f78(int *self)
{
    int *child;void *manager;
    self[17]=0;
    if(self[7]!=-1){FUN_020c2624(FUN_020c1fc8(),self+7);self[7]=-1;}
    if(self[8]!=-1){FUN_020c2624(FUN_020c1fc8(),self+8);self[8]=-1;}
    child=(int *)self[9];if(child){if(child)((void *(*)(void *))(*(unsigned **)child)[1])(child);self[9]=0;}
    manager=FUN_0208f068();if(manager&&self[10]>=0){FUN_0208efd4(manager,self[10]);self[10]=-1;}
}
