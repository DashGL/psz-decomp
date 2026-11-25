// flags: -O4,p
// USA ARM9: initialize render object, fixed-point transforms and callback fields.
// 02018a84 consumes destination/resource; 0205abac consumes matrix/sine/cosine.
extern const short DAT_020ed83c[];
extern void FUN_02018a84(void *,void *);
extern void FUN_0205abac(void *,int,int);
#define W(o) (*(unsigned int *)(self+(o)))
#define H(o) (*(unsigned short *)(self+(o)))
void *FUN_0206e4d0(char *self,void *resource,unsigned int arg2,unsigned int id,unsigned int arg4) {
    unsigned int angle;
    const short *trig=DAT_020ed83c;
    W(0)=0x020f9818; W(4)=0; W(8)=0; W(12)=0; W(16)=0;
    H(0x14)=(unsigned short)id; W(0x18)=0; H(0xb4)=0; H(0xb6)=0;
    W(0xb8)=0; W(0xbc)=0; W(0xc0)=0; W(0xc4)=0; W(0xc8)=arg4;
    *(void **)(self+0x1c)=resource; W(0x20)=arg2;
    FUN_02018a84(self+0x24,*(void **)(self+0x1c));
    W(0x78)=4096; W(0x84)=4096; W(0x7c)=4096; W(0x88)=4096; W(0x80)=4096; W(0x8c)=W(0x80);
    W(0x6c)=0; W(0x70)=0; W(0x74)=0;
    angle=H(0xb4)>>4;
    FUN_0205abac(self+0x90,trig[angle*2],trig[angle*2+1]);
    W(0x18)|=1;
    return self;
}
