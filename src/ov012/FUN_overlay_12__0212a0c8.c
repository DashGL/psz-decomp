// flags: -O4,s
typedef struct { unsigned char b[4]; } Hdr;
typedef struct { Hdr h; int a; int b; } Desc;
int FUN_overlay_12__0212a0c8(const Desc *p) {
    int fields[4]; int a, b; int v, i;
    Hdr h = p->h; Hdr *hp = &h; v = hp->b[3]; if (v < 0 || v >= 33) return 0; v = hp->b[2]; if (v < 0 || v >= 5) return 0;
    a = p->a;
    if ((((a & (int)0xfe000000) >> 25) & 0x7f) > 100) return 0;
    b = p->b;
    if (((b & 0x7f000000) >> 24) + (((a & 0x000007f0) >> 4) + (((a & 0x01fc0000) >> 18) + ((a & 0x0003f800) >> 11))) > 100) return 0;
    fields[0] = a & 0xf;
    fields[1] = (b & 0x000f0000) >> 16;
    fields[2] = (b & 0x00f00000) >> 20;
    fields[3] = (b & 0x0000f000) >> 12;
    for (i = 0; i < 4; i++) { if (fields[i] < 0 || fields[i] >= 10) return 0; }
    if (((b & 0x00000f00) >> 8) >= 12) return 0;
    if (((int)(b & 0x1c) >> 2) < 0 || ((int)(b & 0x1c) >> 2) >= 5) return 0;
    return 1;
}
