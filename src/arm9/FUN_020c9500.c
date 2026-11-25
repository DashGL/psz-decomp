typedef unsigned int u32;

#pragma thumb off
extern char *FUN_02003fa8(const char *, const char *);
extern void *FUN_020014d4(void *, const void *, u32);
extern void *FUN_020014f4(void *, const void *, u32);
extern int FUN_02005898(const char *);
extern int FUN_02003f38(const char *, const char *, u32);
#pragma thumb reset

extern unsigned long long FUN_020c7824(void);
extern int FUN_020cd4b0(void *, void *);
extern int FUN_020cb474(void *, int, void *, int *, int, const char *);
extern int FUN_020cb330(void *, int, void *, int *, int *, const char *);
extern u32 FUN_020d1b58(void *, u32, const char *);
extern void FUN_020cb778(void *, int, int);
extern void *FUN_020c7bdc(void *, int);
extern u32 FUN_020d1b74(void *, const char *);
extern int FUN_020ce808(void *, void **, u32);
extern int FUN_020ce860(void *, void *, const char *);
extern int FUN_020d1888(void *, const char *, int);
extern int FUN_020c995c(void *, const char *);
extern int FUN_020ca330(void *, const char *);
extern int FUN_020d191c(const char *, const char *, char *, int);
extern int FUN_020ce838(void *);
extern void FUN_020c7864(u32);
extern int FUN_020cb184(void *, void *, const char *);
extern const char DAT_020fced8[];
extern const char DAT_020fcedc[];
extern const char DAT_020fcf08[];
extern const char DAT_020fcf10[];
extern const char DAT_020fcf20[];
extern const char DAT_020fcf28[];
extern const char DAT_020fcf30[];
extern const char DAT_020fcf38[];
extern const char DAT_020fcf40[];
extern const char DAT_020fcf48[];
extern const char DAT_020fcf70[];

int FUN_020c9500(unsigned char **self)
{
    void *request;
    int count;
    int eof = 0;
    unsigned char *state = *self;
    int status, more;
    u32 now = (u32)FUN_020c7824();
    char *end, *text, *grown;

    do {
        FUN_020cd4b0(self, state + 0x210);
        if (*(int *)(state + 0x218) > 0) {
            *(u32 *)(state + 0x630) = now;
        }
        status = FUN_020cb474(self, *(int *)(state + 0x1f0), state + 0x210, &eof, 1, DAT_020fced8);
        if (status) {
            return status;
        }
        status = FUN_020cb330(self, *(int *)(state + 0x1f0), state + 0x1f8, &count, &eof, DAT_020fced8);
        if (status) {
            if (status != 3) {
                return status;
            }
            FUN_020d1b58(self, 5, DAT_020fcedc);
            FUN_020cb778(self, 3, 1);
            return 3;
        }
        end = FUN_02003fa8(*(char **)(state + 0x1f8), DAT_020fcf08);
        while (end) {
            *(u32 *)(state + 0x630) = now;
            *end = 0;
            count = (int)(end - *(char **)(state + 0x1f8));
            if (count > *(int *)(state + 0x20c)) {
                int add = count;
                if (add < 2048) {
                    add = 2048;
                }
                *(int *)(state + 0x20c) += add;
                grown = FUN_020c7bdc(*(char **)(state + 0x208), *(int *)(state + 0x20c) + 1);
                if (!grown) {
                    FUN_020d1b74(self, DAT_020fcf10);
                    return 1;
                }
                *(char **)(state + 0x208) = grown;
            }
            FUN_020014d4(*(char **)(state + 0x208), *(char **)(state + 0x1f8), count + 1);
            *(int *)(state + 0x200) -= (int)(end + 7 - *(char **)(state + 0x1f8));
            FUN_020014f4(*(char **)(state + 0x1f8), end + 7, *(int *)(state + 0x200) + 1);
            text = *(char **)(state + 0x208);
            end = FUN_02003fa8(text, DAT_020fcf20);
            if (end) {
                if (FUN_020ce808(self, &request, FUN_02005898(end + 4))) {
                    status = FUN_020ce860(self, request, *(char **)(state + 0x208));
                    if (status) {
                        return status;
                    }
                }
            } else {
                if (FUN_020d1888(self, text, 1)) {
                    return 4;
                }
                text = *(char **)(state + 0x208);
                if (!FUN_02003f38(text, DAT_020fcf28, 4)) {
                    status = FUN_020c995c(self, text);
                    if (status) {
                        return status;
                    }
                } else if (FUN_02003f38(text, DAT_020fcf30, 4)) {
                    if (!FUN_02003f38(text, DAT_020fcf38, 4)) {
                        FUN_020d191c(text, DAT_020fcf38, (char *)state + 0x610, 25);
                    } else if (!FUN_02003f38(text, DAT_020fcf40, 5)) {
                        status = FUN_020ca330(self, text);
                        if (status) {
                            return status;
                    }
                    }
                }
            }
            end = FUN_02003fa8(*(char **)(state + 0x1f8), DAT_020fcf08);
        }
        if (eof && *(int *)(state + 0x1f4) != 5) {
            FUN_020d1b58(self, 7, DAT_020fcf48);
            FUN_020cb778(self, 3, 1);
            return 0;
        }
        more = FUN_020ce838(self);
        if (more) {
            FUN_020c7864(10);
        }
    } while (more);
    if (now - *(u32 *)(state + 0x630) > 120000u) {
        FUN_020cb184(self, state + 0x210, DAT_020fcf70);
        *(u32 *)(state + 0x630) = now;
    }
    return 0;
}
