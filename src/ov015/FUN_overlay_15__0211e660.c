// flags: -O4,s
typedef struct {
    unsigned char pad0[4];
    unsigned short len;
    unsigned char str[256];
    short f106;
    short f108;
    short f10a;
    short f10c;
    short f10e;
    unsigned char pad110[6];
    unsigned char status;
} Request;

extern void *DAT_overlay_15__0213d0a0, *DAT_overlay_15__0213d0ac;
extern void *DAT_overlay_15__0213c2c0[];
extern int DAT_overlay_15__0213a844[];
extern void FUN_overlay_15__0211f180(void);
extern void *FUN_overlay_15__0211e640(unsigned int);
extern void FUN_overlay_15__0211e650(void *);
extern int FUN_overlay_15__0211f528(int);
extern int FUN_overlay_15__0211e750(void *);
extern void FUN_overlay_15__0212076c(int);

int FUN_overlay_15__0211e660(Request *request)
{
    int result;
    unsigned int length;
    if (request->f106 == 0 || request->f106 < -1 ||
        request->f108 < -1 || request->f10a == 0 ||
        request->f10a < -1 || request->f10c < -1 ||
        request->f10e < -1 ||
        (length = request->len) == 0 || length > 256 ||
        request->str[length - 1] != 0) result = -1;
    else result = 0;
    if (!DAT_overlay_15__0213d0a0 || !DAT_overlay_15__0213d0ac) result = -1;
    if (result == -1) {
        request->status = 15;
        FUN_overlay_15__0211f180();
        return -1;
    }
    DAT_overlay_15__0213c2c0[5] = FUN_overlay_15__0211e640(0x5f8);
    if (!DAT_overlay_15__0213c2c0[5]) {
        request->status = 15;
        FUN_overlay_15__0211f180();
        return -1;
    }
    FUN_overlay_15__0211f528(-1);
    result = FUN_overlay_15__0211e750(request);
    FUN_overlay_15__0211e650(DAT_overlay_15__0213c2c0[5]);
    FUN_overlay_15__0211f180();
    if (DAT_overlay_15__0213a844[0] != -1) FUN_overlay_15__0212076c(DAT_overlay_15__0213a844[0]);
    return result;
}
