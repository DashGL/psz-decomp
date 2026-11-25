// FUN_overlay_26__0219a658 @ 0x0219a658 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a658 @ 0x0219a658 (code 0x9a, pool extent 0xa0, thumb)
// check: vers=2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Initialize game controller and seven
 * independently nullable owned components; preserve allocation/store order.
 * Full behavior and ABI: notes/sessions/coverage-overlays-2026-11-05-batch367.md.
 */
extern void FUN_02037760(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_26__0219a6f8(void *);
extern void *FUN_overlay_26__0219a70c(void *);
extern void *FUN_overlay_26__0219a720(void *);
extern void *FUN_overlay_26__0219a734(void *);
extern void *FUN_overlay_26__0219a748(void *);
extern void *FUN_overlay_26__0219a75c(void *);
extern void *FUN_overlay_26__0219a770(void *);

void *FUN_overlay_26__0219a658(int *self) {
    void *p;
    FUN_02037760(self);
    self[0]=0x0219b7a8;
    self[12]=0;
    self[13]=0;
    self[14]=0;
    self[15]=0;
    self[16]=0;
    self[17]=0;
    self[18]=0;
    self[19]=-1;
    self[20]=0;
    self[21]=0;
    self[22]=0;
    p=FUN_020ba894(24);
    if(p) p=FUN_overlay_26__0219a6f8(p);
    self[12]=(int)p;
    p=FUN_020ba894(36);
    if(p) p=FUN_overlay_26__0219a70c(p);
    self[13]=(int)p;
    p=FUN_020ba894(16);
    if(p) p=FUN_overlay_26__0219a720(p);
    self[15]=(int)p;
    p=FUN_020ba894(20);
    if(p) p=FUN_overlay_26__0219a734(p);
    self[14]=(int)p;
    p=FUN_020ba894(36);
    if(p) p=FUN_overlay_26__0219a748(p);
    self[16]=(int)p;
    p=FUN_020ba894(12);
    if(p) p=FUN_overlay_26__0219a75c(p);
    self[17]=(int)p;
    p=FUN_020ba894(16);
    if(p) p=FUN_overlay_26__0219a770(p);
    self[18]=(int)p;
    return self;
}
