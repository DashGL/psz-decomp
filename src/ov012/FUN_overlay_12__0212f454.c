// FUN_overlay_12__0212f454 @ 0x0212f454 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *data_02108d5c;
extern int FUN_overlay_12__0212f49c(void *);
extern void FUN_020357f4(void *),FUN_0203fdb0(void *,int);
void FUN_overlay_12__0212f454(int *self)
{
    int resource;int *child;
    if(self[66]){
        resource=FUN_overlay_12__0212f49c((void *)self[66]);FUN_020357f4((void *)self[66]);
        child=(int *)self[66];if(child)((void *(*)(void *))(*(unsigned **)child)[1])(child);
        self[66]=0;FUN_0203fdb0(data_02108d5c,resource);
    }
}
