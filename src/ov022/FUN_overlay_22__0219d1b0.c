// flags: -O4,s
typedef struct {
    unsigned char pad0[4];
    void *obj;
    unsigned char pad1[0x56];
    struct {
        signed char flag;
        unsigned char pad[3];
    } slots[4];
    unsigned char pad2[0x52];
    int val_c0;
} Self;

typedef struct {
    unsigned char cmd[4];
} Cmd;

extern int FUN_overlay_22__0219a638(int, int);
extern unsigned int FUN_02035b60(unsigned int);
extern int FUN_overlay_22__0219a680(void);
extern void FUN_overlay_22__0219c900(Cmd *);
extern void FUN_overlay_22__0219f190(void *, Cmd *);

int FUN_overlay_22__0219d1b0(Self *self) {
    int selected = -1;
    int count = 0;
    int i = 0;
    int candidates[4];
    do {
        if (self->slots[i].flag && FUN_overlay_22__0219a638(i, 1)) {
            candidates[count] = i;
            count++;
        }
        i++;
    } while (i < 4);
    if (count != 0) {
        selected = candidates[FUN_02035b60(count)];
    }
    if (selected == -1 && self->val_c0 >= 8) {
        selected = FUN_overlay_22__0219a680();
    }
    if (selected != -1) {
        Cmd cmd;
        FUN_overlay_22__0219c900(&cmd);
        cmd.cmd[0] = 13;
        cmd.cmd[1] = (unsigned char)selected;
        FUN_overlay_22__0219f190(self->obj, &cmd);
        return 1;
    }
    return 0;
}
