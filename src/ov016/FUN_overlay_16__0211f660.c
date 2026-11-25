// FUN_overlay_16__0211f660 @ 0x0211f660 (0x7c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211f660 @ 0x0211f660 (arm)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb -O4,s
extern int FUN_0205a160(void *,int,int),FUN_0205a140(void *,void *,int);
unsigned FUN_overlay_16__0211f660(char *self,void *destination,unsigned size){
    unsigned position=*(unsigned *)(self+8),aligned=position&~511u;
    unsigned offset=position-aligned,total=size+offset;
    if(total&511)total=(total&~511u)+512;
    FUN_0205a160(*(void **)(self+12),(int)aligned,0);
    if(FUN_0205a140(*(void **)(self+12),destination,(int)total)==-1)return 0;
    *(unsigned *)(self+8)+=size;
    self[16]=1;
    return offset;
}
