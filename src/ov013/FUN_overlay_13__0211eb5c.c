// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// FUN_overlay_13__0211eb5c @ 0x0211eb5c (thumb)
// check: 2.0/sp2p3 target=0xd0 candidate=0xd0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_020c3564(void *),*FUN_020a4448(void),*FUN_020ba894(unsigned),*FUN_020b3044(void *),*FUN_0205e070(void),*FUN_0205e0c4(void),*FUN_0205e35c(void);
extern void FUN_020a47bc(void *,int),FUN_020907f8(void),FUN_020a4b64(void),FUN_020a5000(unsigned),FUN_020a5034(void),FUN_0206557c(unsigned,void *,unsigned),FUN_020c35ac(void *,unsigned),FUN_020c35d4(void *,void *),FUN_020c38f0(void *,unsigned),FUN_overlay_13__0211ef30(void *,int);
char *FUN_overlay_13__0211eb5c(char *self,unsigned mode){
    /* ROM0211ebf4..0211ec00 copies one32-byte text configuration in four paired iterations. */
    struct Config { unsigned words[8]; } config;void *manager,*child;
    *(unsigned *)self=0x0211faa8;*(unsigned *)(self+4)=mode;*(unsigned *)(self+8)=0;*(unsigned *)(self+12)=1;
    FUN_020c3564(self+16);*(unsigned *)(self+76)=0;*(unsigned *)(self+80)=90;*(unsigned *)(self+84)=0;
    if(*(unsigned *)(self+4)==0){manager=FUN_020a4448();if(manager)FUN_020a47bc(manager,0);*(unsigned *)(self+12)=0;}
    FUN_020907f8();child=FUN_020ba894(8);if(child)child=FUN_020b3044(child);*(void **)(self+76)=child;
    FUN_020a4b64();FUN_020a5000(5);FUN_020a5034();FUN_0206557c(0,FUN_0205e070(),2048);
    FUN_020c35ac(self+16,1);FUN_0206557c(0,FUN_0205e0c4(),2048);FUN_0206557c(0,FUN_0205e35c(),32);
    config=*(const struct Config *)0x0211f9a8;
    FUN_020c35d4(self+16,&config);FUN_020c38f0(self+16,0);FUN_overlay_13__0211ef30(self,0);return self;
}
