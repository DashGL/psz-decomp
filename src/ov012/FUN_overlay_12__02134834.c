// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x34 exact_bytes=0 bad_relocs=0
// Observed arguments: notes/sessions/matching-resume2-overlays-2026-11-12-receivers-wide.json
// flags: -O4,s
extern void FUN_020ba8b4(void *),FUN_020ba8ac(void *),FUN_020c14dc(void *);
void *FUN_overlay_12__02134834(int *self)
{
    int *child;void *rng;
    if(self[3])FUN_020ba8b4((void *)self[3]);
    child=(int *)self[4];if(child){if(child)((void *(*)(void *))(*(unsigned **)child)[1])(child);}
    rng=(void *)self[7];if(rng){if(rng){FUN_020c14dc(rng);FUN_020ba8ac(rng);}}
    return self;
}
