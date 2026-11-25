// flags: -O4,s
typedef struct {
    int valid;
    int value;
} Slot;

typedef struct {
    unsigned char pad0[216];
    Slot entries[2][3];
    int selected;
} State;

typedef struct {
    unsigned char pad0[3320];
    Slot entries[2][3];
} Save;

extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern Save *FUN_020870c4(void *);

void FUN_02077cd8(State *s, int value, int group, int slot) {
    if (value == -1) {
        s->entries[group][slot].valid = 0;
    } else {
        s->entries[group][slot].valid = 1;
    }
    s->entries[group][slot].value = value;
    if (s->selected != 0) {
        if (value == 0) {
            return;
        }
        s->selected = value;
    }
    if (value != 0 && FUN_02087138(FUN_02086e3c())) {
        Save *save = FUN_020870c4(FUN_02086e3c());
        save->entries[group][slot].value = value;
        save->entries[group][slot].valid = s->entries[group][slot].valid;
    }
}
