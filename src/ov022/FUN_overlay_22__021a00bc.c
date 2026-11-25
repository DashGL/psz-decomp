// flags: -O4,p
// FUN_overlay_22__021a00bc @ 0x021a00bc (code 0x98, pool extent 0xa4, thumb)
/* USA ROM reconstruction, 2026-11-05. Configure controller from signed global
 * selector, copy six configuration bytes, allocate four nullable components.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch368.md.
 */
extern unsigned char DAT_0211a3c4[];
extern unsigned char DAT_021a0e84[];
extern unsigned char DAT_021a16ec[];
extern void FUN_02037760(void *);
extern void *FUN_020ba894(unsigned int);
extern void FUN_overlay_22__021a0160(void *,const void *);
extern void *FUN_overlay_22__021a0188(void *);
extern void *FUN_overlay_22__021a01ac(void *);
extern void *FUN_overlay_22__021a01c0(void *);
extern void *FUN_overlay_22__021a01d4(void *);

void *FUN_overlay_22__021a00bc(int *self) {
    void *p;
    FUN_02037760(self);
    self[0]=((unsigned int)DAT_021a16ec);
    self[12]=0;self[13]=0;self[14]=0;
    self[15]=(int)((char *)DAT_021a0e84+20*((signed char *)DAT_0211a3c4)[13]);
    self[18]=0;self[19]=0;self[20]=0;self[21]=0;self[22]=0;
    *(short *)((char *)self+0x5c)=0;
    self[24]=4096;self[25]=0;self[26]=0;self[27]=0;self[28]=0;
    FUN_overlay_22__021a0160(self+16,(char *)DAT_021a0e84+20*((signed char *)DAT_0211a3c4)[13]+8);
    p=FUN_020ba894(12);
    if(p) p=FUN_overlay_22__021a0188(p);
    self[25]=(int)p;
    p=FUN_020ba894(16);
    if(p) p=FUN_overlay_22__021a01ac(p);
    self[26]=(int)p;
    p=FUN_020ba894(12);
    if(p) p=FUN_overlay_22__021a01c0(p);
    self[27]=(int)p;
    p=FUN_020ba894(12);
    if(p) p=FUN_overlay_22__021a01d4(p);
    self[28]=(int)p;
    return self;
}
