// flags: -O4,s
typedef unsigned int U;
typedef struct Node {
    struct Node *child, *next;
    int x, y;
    unsigned short angle, pad;
    int sx, sy, px, py;
    U color, flags;
} Node;

extern const short DAT_020ed83c[];
extern int FUN_overlay_11__021204d8(void *, const void *, unsigned int, int);
extern int FUN_overlay_11__0212061c(void *, const void *, unsigned int, int);
extern int FUN_overlay_11__0212057c(void *, const void *, unsigned int, int);
extern U FUN_overlay_11__0212041c(void *, U, U);
extern void FUN_overlay_11__021200a8(void *);
extern void FUN_overlay_11__021200c4(void *, int, int);
extern void FUN_overlay_11__0212013c(void *, int, int);
extern void FUN_overlay_11__02120310(void *, int, int);
extern void FUN_overlay_11__02120780(void *, void *, const void *, unsigned int, int);

unsigned char *FUN_overlay_11__021208e4(
    unsigned char *self,
    unsigned char *out,
    Node *node,
    unsigned char ***cursor,
    int time,
    U color,
    int hidden
) {
    U parent_color = color;
    int parent_hidden = hidden;
    int skip;
    U parent_color2 = color;
    int x, y;
    int angle;
    int product;
    int *matrix;

    do {
        if (node->flags & 16) {
            hidden = parent_hidden | ((node->flags & 0x8000) != 0);
        } else {
            hidden = (node->flags & 0x8000) != 0;
        }
        if (!hidden) {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 24)) {
                hidden = FUN_overlay_11__021204d8(self, *(void **)(track + 72), *(unsigned short *)(track + 24), time);
            }
        }
        if (hidden && !node->child) {
            *(int *)(out + 48) = 8192;
            *(U *)(out + 60) &= ~192U;
            out += 160;
            ++*cursor;
            goto next;
        }
        skip = hidden;
        FUN_overlay_11__021200a8(self);
        matrix = *(int **)(self + 0x384);
        switch (node->flags & 0x300) {
        case 0:
            matrix[4] = 0;
            matrix[5] = 0;
            break;
        case 0x100:
            matrix[5] = 0;
            break;
        case 0x200:
            matrix[4] = 0;
            break;
        }
        {
            unsigned char *track = **cursor;
            if (*(unsigned short *)track) {
                x = FUN_overlay_11__021204d8(self, *(void **)(track + 48), *(unsigned short *)track, time);
            } else {
                x = node->x;
            }
        }
        {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 4)) {
                y = FUN_overlay_11__021204d8(self, *(void **)(track + 52), *(unsigned short *)(track + 4), time);
            } else {
                y = node->y;
            }
        }
        FUN_overlay_11__021200c4(self, x, y);
        if (!(node->flags & 2)) {
            matrix[0] = matrix[10];
            matrix[1] = matrix[11];
            matrix[2] = matrix[12];
            matrix[3] = matrix[13];
            matrix[6] = 4096;
            matrix[7] = 0;
            matrix[8] = 0;
            matrix[9] = 4096;
        }
        {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 16)) {
                angle = FUN_overlay_11__021204d8(self, *(void **)(track + 64), *(unsigned short *)(track + 16), time);
                angle = (unsigned short)((int)((U)angle << 16) / 360);
            } else {
                angle = node->angle;
            }
        }
        if (angle) {
            FUN_overlay_11__0212013c(self, DAT_020ed83c[(angle >> 4) * 2], DAT_020ed83c[(angle >> 4) * 2 + 1]);
        }
        switch (node->flags & 0xc00) {
        case 0:
            matrix[0] = matrix[6];
            matrix[1] = matrix[7];
            matrix[2] = matrix[8];
            matrix[3] = matrix[9];
            matrix[10] = 4096;
            matrix[11] = 0;
            matrix[12] = 0;
            matrix[13] = 4096;
            break;
        case 0x400:
            matrix[2] = matrix[8];
            matrix[3] = matrix[9];
            matrix[13] = 4096;
            break;
        case 0x800:
            matrix[0] = matrix[6];
            matrix[1] = matrix[7];
            matrix[10] = 4096;
            break;
        }
        {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 8)) {
                x = (int)((U)FUN_overlay_11__021204d8(self, *(void **)(track + 56), *(unsigned short *)(track + 8), time) << 7);
            } else {
                x = node->sx;
            }
        }
        {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 12)) {
                y = (int)((U)FUN_overlay_11__021204d8(self, *(void **)(track + 60), *(unsigned short *)(track + 12), time) << 7);
            } else {
                y = node->sy;
            }
        }
        FUN_overlay_11__02120310(self, x, y);
        product = matrix[10] * matrix[13];
        if (!product) {
            skip = 1;
        } else {
            U cull = 1;
            U shifted;
            if (product > 0) {
                cull = 2;
            }
            shifted = cull << 6;
            *(U *)(out + 60) = shifted | (*(U *)(out + 60) & ~192U);
        }
        {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 20)) {
                color = FUN_overlay_11__0212061c(self, *(void **)(track + 68), *(unsigned short *)(track + 20), time);
            } else {
                color = node->color;
            }
        }
        if ((node->flags & 8) && parent_color != ~0U) {
            if (color == ~0U) {
                color = parent_color2;
            } else {
                color = FUN_overlay_11__0212041c(self, parent_color2, color);
            }
        }
        if (!(color >> 27)) {
            skip = 1;
        } else {
            *(U *)(out + 60) = ((color >> 27) << 16) | (*(U *)(out + 60) & 0xffe0ffff);
            *(U *)(out + 68) = (U)((unsigned short)(((color >> 19) & 31) | (((color >> 11) & 31) << 5) | (((color >> 3) & 31) << 10))) << 16;
        }
        if (!skip) {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 28)) {
                *(int *)(out + 76) = FUN_overlay_11__0212057c(self, *(void **)(track + 76), *(unsigned short *)(track + 28), time);
            }
            track = **cursor;
            if (*(unsigned short *)(track + 32)) {
                *(int *)(out + 100) = FUN_overlay_11__0212057c(self, *(void **)(track + 80), *(unsigned short *)(track + 32), time);
            }
            track = **cursor;
            if (*(unsigned short *)(track + 36)) {
                *(int *)(out + 120) = FUN_overlay_11__0212057c(self, *(void **)(track + 84), *(unsigned short *)(track + 36), time);
            }
            track = **cursor;
            if (*(unsigned short *)(track + 40)) {
                *(int *)(out + 140) = FUN_overlay_11__0212057c(self, *(void **)(track + 88), *(unsigned short *)(track + 40), time);
            }
        }
        if (!skip) {
            unsigned char *track = **cursor;
            if (*(unsigned short *)(track + 44)) {
                FUN_overlay_11__02120780(self, out + 52, *(void **)(track + 92), *(unsigned short *)(track + 44), time);
            }
        }
        *(U *)(out + 60) = (*(U *)(self + 0x2bac) << 24) | (*(U *)(out + 60) & 0xc0ffffff);
        ++*cursor;
        if (skip || (node->flags & 1)) {
            *(int *)(out + 48) = 8192;
            *(U *)(out + 60) &= ~192U;
        } else {
            FUN_overlay_11__021200c4(self, -node->px, -node->py);
            *(int *)(out + 4) = (matrix[0]) + (((matrix[0]) < 0) ? -1 : 0);
            *(int *)(out + 8) = matrix[1];
            *(int *)(out + 16) = matrix[2];
            *(int *)(out + 20) = (matrix[3]) + (((matrix[3]) < 0) ? -1 : 0);
            *(int *)(out + 40) = (matrix[4]) + (((matrix[0]) < 0) ? -1 : 0);
            *(int *)(out + 44) = (matrix[5]) + (((matrix[3]) < 0) ? -1 : 0);
            *(int *)(out + 48) = *(int *)(self + 0x2ba8);
            if (node->child) {
                FUN_overlay_11__021200c4(self, node->px, node->py);
            }
        }
        out += 160;
        if (node->child) {
            out = FUN_overlay_11__021208e4(self, out, node->child, cursor, time, color, hidden);
        }
        *(unsigned char **)(self + 0x384) -= 56;
next:
        node = node->next;
    } while (node);
    return out;
}
