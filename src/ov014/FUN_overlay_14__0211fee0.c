// FUN_overlay_14__0211fee0 @ 0x0211fee0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211fee0 @ 0x0211fee0 (thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_14__0211e968(void);
extern int FUN_overlay_14__0211ef68(void *);
int FUN_overlay_14__0211fee0(unsigned *self){
    if(!self[1]){
        FUN_overlay_14__0211ef68(FUN_overlay_14__0211e968());
        return 1;
    }
    return 0;
}
