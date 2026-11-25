// flags: -O4,s
// near: switch on 0..4 with inline boolean helper calls (register/branch materialization)
extern int FUN_02030700(void *);
extern int *DAT_0211a61c;

enum { E0 = 0, E1 = 1 };
int FUN_020767ec(void *param_1, int param_2) {
    switch (param_2) {
    case 0: {
        int b = (**(unsigned char **)((char *)param_1 + 0x48) & 1) ? E1 : E0;
        if (b) {
            return 1;
        }
        break;
    }
    case 1:
        if (FUN_02030700((char *)param_1 + 0x54) != 0) {
            return 1;
        }
        break;
    case 2:
        if (FUN_02030700((char *)param_1 + 0x5c) != 0) {
            return 1;
        }
        break;
    case 3: {
        int b1 = (**(unsigned char **)((char *)param_1 + 0x48) & 2) ? E1 : E0;
        if (b1) {
            return 1;
        }
        int b2 = (DAT_0211a61c != 0 && *DAT_0211a61c == 3) ? 1 : 0;
        if (b2) {
            return 1;
        }
        break;
    }
    case 4: {
        int b1 = (**(unsigned char **)((char *)param_1 + 0x48) & 2) ? E1 : E0;
        if (b1) {
            return 1;
        }
        break;
    }
    default:
        return 0;
    }
    return 0;
}
