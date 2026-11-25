// flags: -O4,s
extern int FUN_02073fd8(void *);
extern void FUN_02074984(void *);
extern void FUN_020bce3c(void *);
typedef struct {
    signed char f0;
    signed char f1;
    char pad[58];
} Slot;
typedef struct {
    char pad[112];
    Slot slots[4];
} S;
void FUN_020749a4(S *s, char *packet) {
    int index = *(int *)(packet + 4);
    int current;
    int reply[3];
    if (index != *(signed char *)(packet + 1) || index < 0 || index >= 4) return;
    current = FUN_02073fd8(s);
    index = *(int *)(packet + 4);
    if (index == current || *(int *)(packet + 8) != current) return;
    {
        Slot *slot = &s->slots[index];
        slot->f1 = 1;
        switch (slot->f0) {
        case 2:
            slot->f0 = 3;
            break;
        case 4:
            FUN_02074984(reply);
            reply[1] = current;
            reply[2] = *(int *)(packet + 4);
            FUN_020bce3c(reply);
            break;
        }
    }
}
