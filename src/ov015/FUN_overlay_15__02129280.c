// flags: -O4,p
// Three touch regions, accept/cancel buttons and selection movement.
extern const unsigned short DAT_0213a25e[];
extern unsigned short DAT_0213a276[];
extern unsigned short DAT_0213a278[];
extern unsigned short DAT_0213a27a[];
extern unsigned short DAT_0213a27c[];
extern unsigned char DAT_0213e828[];
extern int FUN_overlay_15__02136a68(const unsigned short *);
extern int FUN_overlay_15__02136978(unsigned int),FUN_overlay_15__021369a8(unsigned int);
extern void FUN_overlay_15__02124ec4(int),FUN_overlay_15__0212949c(int);
extern void FUN_overlay_15__021254e0(unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_15__02129280(void)
{
    const unsigned short *region=DAT_0213a25e;
    unsigned int i;
    for(i=0;i<3;i++,region+=4) {
        if(FUN_overlay_15__02136a68(region)) {
            unsigned int index;
            FUN_overlay_15__02124ec4(1);
            *DAT_0213e828=(unsigned char)i;
            index=*DAT_0213e828;
            FUN_overlay_15__021254e0((DAT_0213a276)[index*4],
                (DAT_0213a27a)[index*4],
                (DAT_0213a278)[index*4],
                (DAT_0213a27c)[index*4]);
            return;
        }
    }
    if(FUN_overlay_15__02136978(1)) { FUN_overlay_15__02124ec4(1);return; }
    if(FUN_overlay_15__02136978(2)) { FUN_overlay_15__02124ec4(0);return; }
    if(FUN_overlay_15__021369a8(0x40)) { FUN_overlay_15__0212949c(1);return; }
    if(FUN_overlay_15__021369a8(0x80)) FUN_overlay_15__0212949c(3);
}
