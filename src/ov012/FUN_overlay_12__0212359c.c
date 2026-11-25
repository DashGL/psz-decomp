// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_12__0212359c @ 0x0212359c (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned D_0213ecdc;
extern void *FUN_overlay_12__02122e00(void *,int,int);
extern void FUN_overlay_12__02122e14(void *,int);
#pragma thumb off
extern void FUN_0200c594(void *,void (*)(void *,int),void *);
#pragma thumb on
void *FUN_overlay_12__0212359c(char *self){
    int state=*(int *)(self+148);
    if(state>=0 && state<2)return self+96+state*20;
    if(!(D_0213ecdc&1)){
        FUN_overlay_12__02122e00((void *)0x0213d588,1,1);
        FUN_0200c594((void *)0x0213d588,FUN_overlay_12__02122e14,(void *)0x0213ecf4);
        D_0213ecdc|=1;
    }
    return (void *)0x0213d588;
}
