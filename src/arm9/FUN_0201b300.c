// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef void (*Hook)(void *);
extern int DAT_020f687c[], DAT_020f6888[], DAT_0210571c[], DAT_02105768[];
extern char DAT_020f6850[], DAT_020f684c[];
extern int DAT_020f6858[];
extern void FUN_0205c8cc(void *, void *);
extern void FUN_0201c9d4(int, void *, int), FUN_0201c8a0(void), FUN_0205b194(void *, void *), FUN_0205bb68(void *, void *, void *), FUN_02065554(void *, void *, int);
extern int FUN_0205e8c4(void *), FUN_0205c86c(void *);
extern void *FUN_020198f8(void), *FUN_02019930(void), *FUN_0201985c(void);
#define W(o) (*(u32 *)(self + (o)))
#define FIFO (*(volatile u32 *)0x04000400)

void FUN_0201b300(char *self, int mode) {
    int size = 2, stage, skip;
    int matrix[16], first[16], second[16];
    int *trans = DAT_020f687c;
    int *scale = DAT_020f6888;
    int *rot = DAT_020f6858;
    u32 flags;

    if (W(8) & 0x200) {
        if (mode == 0x40 || mode == 0x60) ++size;
        if (mode == 0x20 || mode == 0x60) ++size;
        W(0) += size;
        return;
    }

    if (mode == 0x40 || mode == 0x60) {
        ++size;
        if (!(W(8) & 0x100)) {
            int parameter;
            if (mode == 0x40) parameter = ((unsigned char *)W(0))[2];
            else parameter = ((unsigned char *)W(0))[3];
            FUN_0201c9d4(0x14, &parameter, 1);
        }
    }

    stage = W(0x2c) ? (unsigned char)self[0x94] : 0;
    if (stage == 1) {
        W(8) &= ~0x40;
        ((Hook)W(0x2c))(self);
        stage = W(0x2c) ? (unsigned char)self[0x94] : 0;
        skip = W(8) & 0x40;
    } else {
        skip = 0;
    }

    if (!(W(8) & 0x100) && !skip) {
        FUN_0201c8a0();
        FIFO = 0x151110;
        FIFO = 0;
        FIFO = 0;
        while (FUN_0205e8c4(matrix) != 0) {}
        flags = DAT_0210571c[0x3f];
        if (flags & 1) {
            FUN_0205b194(FUN_020198f8(), first);
            FUN_0205bb68(matrix, first, matrix);
        } else if (flags & 2) {
            FUN_0205b194(DAT_02105768, second);
            FUN_0205bb68(matrix, second, matrix);
        }
        trans[0] = matrix[12];
        trans[1] = matrix[13];
        trans[2] = matrix[14];
        scale[0] = FUN_0205c86c(matrix);
        scale[1] = FUN_0205c86c(matrix + 4);
        scale[2] = FUN_0205c86c(matrix + 8);
        if (matrix[5] != 0 || matrix[6] != 0) {
            FUN_0205c8cc(matrix + 4, rot + 3);
            rot[7] = -rot[5];
            rot[8] = rot[4];
        } else {
            FUN_0205c8cc(matrix + 8, rot + 6);
            rot[5] = -rot[7];
            rot[4] = rot[8];
        }
        flags = DAT_0210571c[0x3f];
        if (flags & 1) {
            FIFO = 0x171012;
            FUN_02065554(DAT_020f6850, (void *)0x04000400, 8);
            FUN_02065554(FUN_02019930(), (void *)0x04000400, 48);
            FIFO = 0x1b19;
            FUN_02065554(DAT_020f6858, (void *)0x04000400, 60);
        } else if (flags & 2) {
            FIFO = 0x171012;
            FUN_02065554(DAT_020f6850, (void *)0x04000400, 8);
            FUN_02065554(FUN_0201985c(), (void *)0x04000400, 48);
            FIFO = 0x1b19;
            FUN_02065554(DAT_020f6858, (void *)0x04000400, 60);
        } else {
            FUN_02065554(DAT_020f684c, (void *)0x04000400, 72);
        }
    }

    if (stage == 3) {
        W(8) &= ~0x40;
        ((Hook)W(0x2c))(self);
        skip = W(8) & 0x40;
    } else {
        skip = 0;
    }

    if (mode == 0x20 || mode == 0x60) {
        ++size;
        if (!skip && !(W(8) & 0x100)) {
            int parameter = ((unsigned char *)W(0))[2];
            FUN_0201c9d4(0x13, &parameter, 1);
        }
    }
    W(0) += size;
}
