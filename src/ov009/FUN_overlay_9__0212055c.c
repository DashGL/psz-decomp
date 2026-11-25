// flags: -O4,s
extern int *FUN_overlay_9__021209d4(void *);
extern void FUN_overlay_9__02120a38(void *, int);
extern void FUN_overlay_9__0211e6a8(unsigned int, unsigned int);
extern void FUN_020c193c(int, int, int, int, int);

struct S_055c {
    unsigned int pad[8];
    unsigned int sel[2];
    unsigned int pad2;
    unsigned int avail[2];
    unsigned int pad3[17];
    unsigned int busy;
};

int FUN_overlay_9__0212055c(struct S_055c *s) {
    int result = 0;
    int *desc;
    int kind;
    if (s->busy == 0) {
        desc = FUN_overlay_9__021209d4(s);
        kind = desc[0];
        switch (kind) {
        case 0:
        case 1:
            if (s->avail[kind] & (1u << desc[1])) s->sel[kind] ^= (1u << desc[1]);
            else FUN_020c193c(0, 5, 0, 0, -1);
            break;
        case 2:
            if (s->sel[0] && s->sel[1]) {
                FUN_overlay_9__02120a38(s, 1);
                FUN_overlay_9__0211e6a8(s->sel[0], s->sel[1]);
                result = 1;
            } else {
                FUN_020c193c(0, 5, 0, 0, -1);
            }
            break;
        }
    }
    return result;
}
