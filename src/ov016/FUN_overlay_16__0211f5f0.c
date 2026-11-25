// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// FUN_overlay_16__0211f5f0 @ 0x0211f5f0 (arm)
// flags: -noThumb -O4,p
extern int FUN_0205a038(void *),FUN_0205a160(void *,int,int),FUN_0205a150(void *,void *,int);
int FUN_overlay_16__0211f5f0(char *self,void *destination,unsigned size){
    if((unsigned char)self[16]==1){
        FUN_0205a038(*(void **)(self+12));
        FUN_0205a160(*(void **)(self+12),*(int *)(self+8),0);
        self[16]=0;
    }
    if(FUN_0205a150(*(void **)(self+12),destination,(int)size)==-1)return 0;
    *(unsigned *)(self+8)+=size;
    return 1;
}
