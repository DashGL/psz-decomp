// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int type; Vec position; int value, timer; short a, b, c, pad; } Entry;
extern void FUN_02071ab8(void *, void *);

int FUN_020719d8(Entry *slots, Entry *input) {
    int i, best, time;
    if (input) {
        if (input->value > 9999 || input->value < 0) return -1;
        if (input->type == 8 || input->type == 6) input->timer = 45;
        if (input->type == -1) return 0;
        if (input->type == 10) {
            for (i = 0; i < 20; i++) {
                if (slots[i].type == 10) {
                    FUN_02071ab8(&slots[i], input);
                    return i;
                }
            }
        }
        for (i = 0; i < 20; i++) {
            if (slots[i].type == -1) {
                FUN_02071ab8(&slots[i], input);
                return i;
            }
        }
        best = 0;
        time = 30;
        for (i = 1; i < 20; i++) {
            if (slots[i].timer < time) {
                time = slots[i].timer;
                best = i;
            }
        }
        slots[best].type = ((volatile Entry *)input)->type;
        slots[best].position = input->position;
        slots[best].value = input->value;
        slots[best].timer = input->timer;
        slots[best].a = input->a;
        slots[best].b = input->b;
        slots[best].c = input->c;
        slots[best].timer = 30;
        return best;
    }
    return -1;
}
