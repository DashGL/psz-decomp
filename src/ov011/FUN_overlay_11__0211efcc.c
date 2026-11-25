// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern void FUN_overlay_11__0211fa8c(void *);

int FUN_overlay_11__0211efcc(char *self) {
    if (((*(unsigned int *)(self + 168) != 0) ? E1 : E0) == 0) {
        switch (*(unsigned int *)(self + 164)) {
        case 1: {
            int wide = 0;
            if (*(unsigned int *)self <= 3 && ((1U << *(unsigned int *)self) & 11)) {
                wide = 1;
            }
            if (wide == 0) {
                int index = *(short *)(self + 162);
                if (index >= 0 && index < *(int *)(self + 144)) {
                    (*(unsigned char **)(self + 140))[index] = (unsigned char)*(unsigned short *)(self + 160);
                    if (*(unsigned short *)(self + 160)) {
                        *(short *)(self + 162) = (short)(*(short *)(self + 162) + 1);
                    }
                }
            } else {
                int index = *(short *)(self + 162);
                if (index >= 0 && index < *(int *)(self + 144)) {
                    (*(unsigned short **)(self + 136))[index] = *(unsigned short *)(self + 160);
                    if (*(unsigned short *)(self + 160)) {
                        *(short *)(self + 162) = (short)(*(short *)(self + 162) + 1);
                    }
                }
            }
            break;
        }
        case 2:
            *(unsigned int *)(self + 168) = 1;
            break;
        case 3:
            *(unsigned int *)(self + 168) = 2;
            break;
        }
    }
    FUN_overlay_11__0211fa8c(self);
    *(unsigned int *)(self + 164) = 0;
    if (((*(unsigned int *)(self + 168) != 0) ? E1 : E0) == 0) {
        return 1;
    }
    return 0;
}
