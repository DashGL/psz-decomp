// flags: -O4,s
typedef unsigned int U;
typedef struct Node {
    struct Node *child, *next;
    int x, y;
    unsigned short angle, pad;
    int sx, sy, px, py;
    U color, flags;
} Node;
extern const short data_020ed83c[];
extern int FUN_overlay_18__0211fed0(void *, const void *, unsigned int, int);
extern int FUN_overlay_18__02120014(void *, const void *, unsigned int, int);
extern int FUN_overlay_18__0211ff74(void *, const void *, unsigned int, int);
extern U FUN_overlay_18__0211fe14(void *, U, U);
extern void FUN_overlay_18__0211faa0(void *);
extern void FUN_overlay_18__0211fabc(void *, int, int);
extern void FUN_overlay_18__0211fb34(void *, int, int);
extern void FUN_overlay_18__0211fd08(void *, int, int);
extern void FUN_overlay_18__02120178(void *, void *, const void *, unsigned int, int);

unsigned char *FUN_overlay_18__021202dc(unsigned char *self, unsigned char *out, Node *node, unsigned char ***cursor, int time, U parent_color, int parent_hidden) {
    U orig_color = parent_color;
    int orig_hidden = parent_hidden;
    int skip;
    U orig_color2 = parent_color;
    int x, y, angle, product;
    unsigned char *track;
    int *matrix;
    do {
        if (node->flags & 16) {
            parent_hidden = orig_hidden | ((node->flags & 0x8000) != 0);
        } else {
            parent_hidden = (node->flags & 0x8000) != 0;
        }
        if (!parent_hidden) {
            track = **cursor;
            if (*(unsigned short *)(track + 24)) {
                parent_hidden = FUN_overlay_18__0211fed0(self, *(void **)(track + 72), *(unsigned short *)(track + 24), time);
            }
        }
        if (parent_hidden && !node->child) {
            *(int *)(out + 48) = 8192;
            *(U *)(out + 60) &= ~192U;
            ++*cursor;
            out += 160;
            goto next;
        }
        skip = parent_hidden;
        FUN_overlay_18__0211faa0(self);
        matrix = *(int **)(self + 0x384);
        switch (node->flags & 0x300) {
        case 0: matrix[4] = 0; matrix[5] = 0; break;
        case 0x100: matrix[5] = 0; break;
        case 0x200: matrix[4] = 0; break;
        }
        track = **cursor;
        x = *(unsigned short *)track ? FUN_overlay_18__0211fed0(self, *(void **)(track + 48), *(unsigned short *)track, time) : node->x;
        track = **cursor;
        y = *(unsigned short *)(track + 4) ? FUN_overlay_18__0211fed0(self, *(void **)(track + 52), *(unsigned short *)(track + 4), time) : node->y;
        FUN_overlay_18__0211fabc(self, x, y);
        if (!(node->flags & 2)) {
            matrix[0] = matrix[10]; matrix[1] = matrix[11]; matrix[2] = matrix[12]; matrix[3] = matrix[13];
            matrix[6] = 4096; matrix[7] = 0; matrix[8] = 0; matrix[9] = 4096;
        }
        track = **cursor;
        if (*(unsigned short *)(track + 16)) {
            angle = FUN_overlay_18__0211fed0(self, *(void **)(track + 64), *(unsigned short *)(track + 16), time);
            angle = (unsigned short)((int)((U)angle << 16) / 360);
        } else {
            angle = node->angle;
        }
        if (angle) {
            FUN_overlay_18__0211fb34(self, data_020ed83c[(angle >> 4) * 2], data_020ed83c[(angle >> 4) * 2 + 1]);
        }
        switch (node->flags & 0xc00) {
        case 0:
            matrix[0] = matrix[6]; matrix[1] = matrix[7]; matrix[2] = matrix[8]; matrix[3] = matrix[9];
            matrix[10] = 4096; matrix[11] = 0; matrix[12] = 0; matrix[13] = 4096;
            break;
        case 0x400: matrix[2] = matrix[8]; matrix[3] = matrix[9]; matrix[13] = 4096; break;
        case 0x800: matrix[0] = matrix[6]; matrix[1] = matrix[7]; matrix[10] = 4096; break;
        }
        track = **cursor;
        x = *(unsigned short *)(track + 8) ? (U)FUN_overlay_18__0211fed0(self, *(void **)(track + 56), *(unsigned short *)(track + 8), time) << 7 : node->sx;
        track = **cursor;
        y = *(unsigned short *)(track + 12) ? (U)FUN_overlay_18__0211fed0(self, *(void **)(track + 60), *(unsigned short *)(track + 12), time) << 7 : node->sy;
        FUN_overlay_18__0211fd08(self, x, y);
        product = (U)matrix[10] * (U)matrix[13];
        if (!product) {
            skip = 1;
        } else {
            U cull = 1;
            if (product > 0) cull = 2;
            *(U *)(out + 60) = (cull << 6) | (*(U *)(out + 60) & ~192U);
        }
        track = **cursor;
        parent_color = *(unsigned short *)(track + 20) ? FUN_overlay_18__02120014(self, *(void **)(track + 68), *(unsigned short *)(track + 20), time) : node->color;
        if ((node->flags & 8) && orig_color != ~0U) {
            if (parent_color == ~0U) parent_color = orig_color2;
            else parent_color = FUN_overlay_18__0211fe14(self, orig_color2, parent_color);
        }
        if (!(parent_color >> 27)) {
            skip = 1;
        } else {
            *(U *)(out + 60) = (*(U *)(out + 60) & 0xffe0ffff) | ((parent_color >> 27) << 16);
            *(U *)(out + 68) = (U)(unsigned short)(((parent_color >> 19) & 31) | (((parent_color >> 11) & 31) << 5) | (((parent_color >> 3) & 31) << 10)) << 16;
        }
        if (!skip) {
            track = **cursor;
            if (*(unsigned short *)(track + 28)) *(int *)(out + 76) = FUN_overlay_18__0211ff74(self, *(void **)(track + 76), *(unsigned short *)(track + 28), time);
            track = **cursor;
            if (*(unsigned short *)(track + 32)) *(int *)(out + 100) = FUN_overlay_18__0211ff74(self, *(void **)(track + 80), *(unsigned short *)(track + 32), time);
            track = **cursor;
            if (*(unsigned short *)(track + 36)) *(int *)(out + 120) = FUN_overlay_18__0211ff74(self, *(void **)(track + 84), *(unsigned short *)(track + 36), time);
            track = **cursor;
            if (*(unsigned short *)(track + 40)) *(int *)(out + 140) = FUN_overlay_18__0211ff74(self, *(void **)(track + 88), *(unsigned short *)(track + 40), time);
        }
        if (!skip) {
            track = **cursor;
            if (*(unsigned short *)(track + 44)) FUN_overlay_18__02120178(self, out + 52, *(void **)(track + 92), *(unsigned short *)(track + 44), time);
        }
        *(U *)(out + 60) = (*(U *)(self + 0x2bac) << 24) | (*(U *)(out + 60) & 0xc0ffffff);
        ++*cursor;
        if (skip || (node->flags & 1)) {
            *(int *)(out + 48) = 8192;
            *(U *)(out + 60) &= ~192U;
        } else {
            FUN_overlay_18__0211fabc(self, -node->px, -node->py);
            *(int *)(out + 4) = matrix[0] + ((matrix[0] < 0) ? -1 : 0);
            *(int *)(out + 8) = matrix[1];
            *(int *)(out + 16) = matrix[2];
            *(int *)(out + 20) = matrix[3] + ((matrix[3] < 0) ? -1 : 0);
            *(int *)(out + 40) = matrix[4] + ((matrix[0] < 0) ? -1 : 0);
            *(int *)(out + 44) = matrix[5] + ((matrix[3] < 0) ? -1 : 0);
            *(int *)(out + 48) = *(int *)(self + 0x2ba8);
            if (node->child) FUN_overlay_18__0211fabc(self, node->px, node->py);
        }
        out += 160;
        if (node->child) out = FUN_overlay_18__021202dc(self, out, node->child, cursor, time, parent_color, parent_hidden);
        *(unsigned char **)(self + 0x384) -= 56;
next:
        node = node->next;
    } while (node);
    return out;
}
