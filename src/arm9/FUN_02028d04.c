// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    u8 pad0[0x458];
    u32 f458;
    u32 f45c;
    u32 f460;
    u32 f464;
    u8 pad1[0x1c];
    u32 f484;
    u32 f488;
    u32 f48c;
    u32 f490;
    u8 f494[0x100];
    u32 f594;
    u8 f598[8];
    u32 f5a0;
    u32 f5a4;
    u32 f5a8;
    u8 f5ac;
    u8 f5ad;
    u8 f5ae;
    u8 f5af;
    u8 f5b0[0x100];
    u8 f6b0[0x100];
    u8 f7b0[0x5c];
    u32 f80c;
} CertCtx;

extern const char *UNK_020f69d4[];
extern int FUN_02028bc8(const u8 **);
extern u32 FUN_02003c70(const char *);
extern u32 FUN_02028c84(const u8 *, u32);
extern int FUN_020015ac(const void *, const void *, u32);
extern void FUN_02065774(const void *, void *, u32);
extern u32 FUN_02028c18(void *, const void *, u32);

int FUN_02028d04(CertCtx *self, const u8 **cursor, u32 depth, u32 ordinal, u32 mode)
{
    const u8 *p = *cursor;
    const u8 *end;
    u32 tag = *p++;
    int length = FUN_02028bc8(&p);
    int index;
    u32 date;

    if (length < 0 || length > 2000) {
        return 1;
    }

    switch (tag & 31) {
    case 2:
        if (self->f5ad) {
            if (ordinal == 0) {
                while (!*p) {
                    p++;
                    length--;
                }
                switch (mode) {
                case 0:
                    if (length <= 256) {
                        FUN_02065774(p, self->f494, (u32)length);
                        self->f594 = length;
                    }
                    break;
                case 2:
                    self->f484 = length;
                    self->f488 = (u32)p;
                    break;
                }
            } else if (ordinal == 1) {
                while (!*p) {
                    p++;
                    length--;
                }
                switch (mode) {
                case 0:
                    if (length <= 8) {
                        FUN_02065774(p, self->f598, (u32)length);
                        self->f5a0 = length;
                    }
                    break;
                case 2:
                    self->f48c = length;
                    self->f490 = (u32)p;
                    break;
                }
            }
        }
        p += length;
        break;
    case 3:
        if (depth == 1 && mode != 2) {
            self->f5a4 = (u32)(p + 1);
            self->f5a8 = length - 1;
        }
        if (self->f5ad) {
            p++;
            if (FUN_02028d04(self, &p, depth, 0, mode)) {
                return 1;
            }
            self->f5ad = 0;
        } else {
            p += length;
        }
        break;
    case 6: {
        const u8 *q = p;
        for (index = 0; index < 6; index++) {
            const char *oid = UNK_020f69d4[index];
            if (!FUN_020015ac(q, oid, FUN_02003c70(oid))) {
                switch (index) {
                case 1:
                case 2:
                    if (mode == 0) {
                        self->f45c = index;
                    }
                    self->f5ad = index;
                    break;
                case 3:
                case 4:
                    if (mode != 2) {
                        self->f458 = index;
                    }
                    break;
                case 5:
                    if (mode != 2) {
                        self->f5ae = index;
                    }
                    break;
                }
                break;
            }
        }
        p += length;
        break;
    }
    case 12:
    case 19:
    case 20:
    case 22:
        if (mode != 2) {
            if (self->f5ac) {
                FUN_02028c18(self->f6b0, p, length);
                if (self->f5ae == 5 && length <= 79) {
                    FUN_02065774(p, self->f7b0, length);
                    self->f7b0[length] = 0;
                }
            } else {
                FUN_02028c18(self->f5b0, p, length);
            }
        }
        self->f5ae = 0;
        p += length;
        break;
    case 23:
    case 24:
        if (mode != 2) {
            date = FUN_02028c84(p, tag & 31);
            if (ordinal == 0) {
                if (self->f80c >= date) {
                    self->f5af = 1;
                }
            } else {
                if (self->f80c > date) {
                    self->f5af = 0;
                }
            }
        }
        p += length;
        self->f5ac = 1;
        break;
    case 16:
        if (depth == 0 && ordinal == 0 && mode != 2) {
            self->f460 = (u32)p;
        }
        end = p + length;
        index = 0;
        while (p < end) {
            if (FUN_02028d04(self, &p, depth + 1, index++, mode)) {
                return 1;
            }
        }
        if (depth == 1 && ordinal == 0 && mode != 2) {
            self->f464 = (u32)p;
        }
        break;
    case 17:
        end = p + length;
        while (p < end) {
            if (FUN_02028d04(self, &p, depth + 1, 0, mode)) {
                return 1;
            }
        }
        break;
    default:
        if (tag == 0xa0) {
            end = p + length;
            while (p < end) {
                if (FUN_02028d04(self, &p, depth + 1, 0, mode)) {
                    return 1;
                }
            }
        } else {
            p += length;
        }
        break;
    }

    *cursor = p;
    return 0;
}
