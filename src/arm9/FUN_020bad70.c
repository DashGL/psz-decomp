// flags: -O4,p
typedef struct {
    char pad0[12];
    char flags[52];
    void *ptrs[3];
    int state;
} Obj;
extern int FUN_020ba9d8(void *, void *, int);
extern void FUN_020bb054(void *);
void FUN_020bad70(Obj *s, int index, void *data, int size) {
    switch (s->state) {
    case 1:
        if (data != 0) {
            if (!FUN_020ba9d8(s->ptrs[index - 1], data, size)) {
                s->state = 3;
            }
        } else {
            s->flags[index] = 0;
            FUN_020bb054(s);
        }
        break;
    case 2:
        if (data != 0) {
            if (!FUN_020ba9d8(s->ptrs[0], data, size)) {
                s->state = 3;
            }
        } else {
            s->state = 3;
        }
        break;
    }
}
