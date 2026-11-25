// FUN_overlay_16__0211f5a4 @ 0x0211f5a4 (0x4c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211f5a4 @ 0x0211f5a4 (arm)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb -O4,s
extern int FUN_0205a038(void *),FUN_0205a160(void *,int,int);
int FUN_overlay_16__0211f5a4(char *self,int position){
    if((unsigned char)self[16]==1){FUN_0205a038(*(void **)(self+12));self[16]=0;}
    if(!FUN_0205a160(*(void **)(self+12),position,0))return 0;
    *(int *)(self+8)=position;
    return 1;
}
