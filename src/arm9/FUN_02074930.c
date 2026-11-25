// flags: -O4,s
typedef struct {
    signed char f0;
    signed char f1;
    char pad[0x3a];
} Slot;
typedef struct {
    char pad[0x70];
    Slot slots[4];
} State;
extern int FUN_02073fd8(void *);
extern void FUN_02074984(void *);
extern void FUN_020bce3c(void *);
int FUN_02074930(State *s, int index) {
    int current;
    int packet[3];
    Slot *slot;
    if (index >= 0 && index < 4) {
        current = FUN_02073fd8(s);
        if (index != current) {
            slot = &s->slots[index];
            if (slot->f0 == 1) {
                slot->f0 = slot->f1 ? 3 : 2;
                FUN_02074984(packet);
                packet[1] = current;
                packet[2] = index;
                FUN_020bce3c(packet);
                return 1;
            }
        }
    }
    return 0;
}
