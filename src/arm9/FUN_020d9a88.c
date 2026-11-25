// flags: -O4,p
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
struct Field { const char *name; int kind; };
extern void FUN_020d86cc(void *, u8);
extern void FUN_020d86d0(void *, u32, u16);
extern void FUN_020d86d8(void *, u32);
extern void FUN_020d86dc(void *, u8);
extern u8 FUN_020d86e0(void *);
extern int FUN_020c6e0c(void *);
extern struct Field *FUN_020c6e10(void *, int);
extern int FUN_020d8134(void *, const char *, int);
extern int FUN_020d810c(void *, const char *, const char *);
extern unsigned int FUN_02003c70(const char *);

int FUN_020d9a88(unsigned char *self, void *peer, const unsigned char *packet, int size, int indexed)
{
    u32 ip;
    u16 sval;
    u16 port;
    u8 flags = (u8)packet[0];
    int i, count, orig_size = size;
    const unsigned char *p = packet;
    FUN_020d86cc(peer, flags);
    p += 5;
    size -= 5;
    if (flags & 0x10) {
        p += 2;
        size -= 2;
    }
    if (flags & 2) {
        { u8 *d = (u8 *)&ip; d[0] = (u8)p[0]; d[1] = (u8)p[1]; d[2] = (u8)p[2]; d[3] = (u8)p[3]; }
        p += 4;
        size -= 4;
    } else {
        ip = 0;
    }
    if (flags & 0x20) {
        { u8 *d = (u8 *)&port; d[0] = (u8)p[0]; d[1] = (u8)p[1]; }
        p += 2;
        size -= 2;
    } else {
        port = *(u16 *)(self + 0x6ac);
    }
    FUN_020d86d0(peer, ip, port);
    if (flags & 8) {
        { u8 *d = (u8 *)&ip; d[0] = (u8)p[0]; d[1] = (u8)p[1]; d[2] = (u8)p[2]; d[3] = (u8)p[3]; }
        p += 4;
        size -= 4;
        FUN_020d86d8(peer, ip);
    }
    if (flags & 0x40) {
        count = FUN_020c6e0c(*(void **)(self + 8));
                for (i = 0; i < count; i++) {
            struct Field *field = FUN_020c6e10(*(void **)(self + 8), i);
            switch (field->kind) {
            case 1:
                FUN_020d8134(peer, field->name, (u8)*p);
                p++;
                size--;
                break;
            case 2:
                { u8 *d = (u8 *)&sval; d[0] = (u8)p[0]; d[1] = (u8)p[1]; }
                FUN_020d8134(peer, field->name, (u16)((((int)sval >> 8) & 0xff) | (((int)sval << 8) & 0xff00)));
                p += 2;
                size -= 2;
                break;
            case 0: {
                u8 index;
                if (indexed) {
                    index = (u8)*p++;
                    size--;
                } else {
                    index = 255;
                }
                if (index == 255) {
                    int len;
                    FUN_020d810c(peer, field->name, (const char *)p);
                    len = FUN_02003c70((const char *)p) + 1;
                    p += len;
                    size -= len;
                } else {
                    FUN_020d810c(peer, field->name, *(const char **)(self + 0x84 + index * 4));
                }
                break;
            }
            }
        }
        FUN_020d86dc(peer, (u8)(FUN_020d86e0(peer) | 1));
    }
    if (flags & 0x80) {
        while (*(const signed char *)p != 0 && size > 0) {
            const char *key = (const char *)p;
            int len = FUN_02003c70((const char *)p) + 1;
            p += len;
            size -= len;
            FUN_020d810c(peer, key, (const char *)p);
            len = FUN_02003c70((const char *)p) + 1;
            p += len;
            size -= len;
        }
        size--;
        FUN_020d86dc(peer, (u8)(FUN_020d86e0(peer) | 2));
    }
    {
        u8 sf = FUN_020d86e0(peer);
        if (!(flags & 0xc0) && (sf & 3)) {
            FUN_020d86dc(peer, (u8)(sf & 0xfc));
        }
    }
    return orig_size - size;
}
