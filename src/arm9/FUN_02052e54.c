// flags: -O4,p -noThumb
typedef char *va_list;
#define __va_start(parm) ((va_list)(((unsigned int)(&parm) & ~3u) + 4u))
#define __va_arg(ap, type) (*(type *)((ap += sizeof(type)) - sizeof(type)))
extern unsigned char DAT_02110b08[];
typedef struct {
    unsigned short tag;
    unsigned short pad;
    unsigned int args[63];
} Packet;
extern Packet *FUN_02052dfc(void);
extern void FUN_020673f0(void *, int);
extern void FUN_02066f34(void *, void *, int);
extern int FUN_020688c0(int, void *, int);

int FUN_02052e54(unsigned short tag, unsigned short count, ...) {
    int result;
    va_list ap;
    int i;
    Packet *p = FUN_02052dfc();
    if (!p) return 8;
    p->tag = tag;
    ap = __va_start(count);
    for (i = 0; i < count; i++) {
        p->args[i] = __va_arg(ap, unsigned int);
    }
    FUN_020673f0(p, 256);
    result = FUN_020688c0(10, p, 0);
    FUN_02066f34(DAT_02110b08, p, 1);
    return result < 0 ? 8 : 2;
}
