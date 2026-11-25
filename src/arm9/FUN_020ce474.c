// flags: -O4,p
typedef unsigned int u32;
struct Cb_ce474 {
    u32 fn;
    void *param;
};
#pragma thumb off
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void *FUN_020c7bcc(u32);
extern void *FUN_02001540(void *, int, u32);
#pragma thumb reset
extern unsigned int FUN_020d1b74(void *, const char *);
extern int FUN_020cb81c(void *, struct Cb_ce474, void *, void *, int);
extern const char DAT_020fddec[], DAT_020fde00[], DAT_020fddc4[];
extern const char DAT_020fde10[], DAT_020fde24[], DAT_020fde38[], DAT_020fde48[];

int FUN_020ce474(unsigned char **self, unsigned char *request) {
    unsigned char *state = *self;
    struct Cb_ce474 cb;

    if (!self) {
        FUN_02000edc(DAT_020fddec, DAT_020fde00, DAT_020fddc4, 0x22);
    }
    if (!*self) {
        FUN_02000edc(DAT_020fde10, DAT_020fde00, DAT_020fddc4, 0x23);
    }
    if (!request) {
        FUN_02000edc(DAT_020fde24, DAT_020fde00, DAT_020fddc4, 0x24);
    }

    cb = *(struct Cb_ce474 *)(request + 0xc);
    if (cb.fn != 0) {
        switch (*(u32 *)request) {
        case 0: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(0x20);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
            FUN_02001540(result, 0, 0x20);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            if (*(u32 *)(state + 0x5b8) == 0x201) {
                *(u32 *)(result + 4) = *(u32 *)(state + 0x1a0);
                *(u32 *)(state + 0x1a0) = 0;
            }
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        case 1: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(8);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
            __builtin__clear(result, 8);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        case 5: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(8);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
            __builtin__clear(result, 8);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        case 2: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(0x204);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
            FUN_02001540(result, 0, 0x204);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        case 3: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(0x10);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
__builtin__clear(result, 16);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            *(u32 *)(result + 0xc) = 0;
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        case 4: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(4);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
            __builtin__clear(result, 4);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        case 6: {
            unsigned char *result = (unsigned char *)FUN_020c7bcc(4);
            int ret;
            if (!result) {
                FUN_020d1b74(self, DAT_020fde38);
                return 1;
            }
            __builtin__clear(result, 4);
            *(u32 *)result = *(u32 *)(request + 0x1c);
            ret = FUN_020cb81c(self, cb, result, request, 0);
            if (ret != 0) return ret;
            break;
        }
        default:
            FUN_02000edc(DAT_020fde48, DAT_020fde00, DAT_020fddc4, 0x82);
            break;
        }
    }
    return 0;
}
