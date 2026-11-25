// flags: -O4,p -noThumb
typedef char *va_list;
#define __va_start(parm) ((va_list)(((unsigned int)(&parm) & ~3u) + 4u))
#define __va_arg(ap, type) (*(type *)((ap += 4) - 4))
struct Wrap52 { int pad; char *mgr; };
extern struct Wrap52 DAT_02110b00;
extern int FUN_02052f80(void);
extern void FUN_020673d4(void *, int);

int FUN_02052fe4(unsigned int count, ...) {
    int status = FUN_02052f80();
    va_list ap; unsigned short value; int result;
    if (status) return status;
    FUN_020673d4(*(void **)(DAT_02110b00.mgr + 4), 2);
    value = **(unsigned short **)(DAT_02110b00.mgr + 4);
    ap = __va_start(count);
    result = 3;
    while (count) {
        if (__va_arg(ap, unsigned int) == value) result = 0;
        count--;
    }
    return result;
}
