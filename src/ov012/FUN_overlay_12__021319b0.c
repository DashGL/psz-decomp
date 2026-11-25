// FUN_overlay_12__021319b0 @ 0x021319b0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int *data_0213f2d4;
extern void FUN_overlay_12__02136808(int,void *);
void FUN_overlay_12__021319b0(void)
{
    int *self=data_0213f2d4;
    if(self){FUN_overlay_12__02136808(self[118],self);self[118]=-1;}
}
