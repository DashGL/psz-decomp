// flags: -O4,s
typedef struct {
    char pad[0x38];
    int slots[2];
    int pad2[2];
    int main_slot;
} Obj;
extern void *FUN_0208f068(void);
extern void FUN_0208efd4(void *, int);
void FUN_0203208c(Obj *s) {
    void *manager = FUN_0208f068();
    if (manager) {
        int i;
        if (s->main_slot >= 0) {
            FUN_0208efd4(manager, s->main_slot);
            s->main_slot = -1;
        }
        for (i = 0; i < 2; i++) {
            if (s->slots[i] >= 0) {
                FUN_0208efd4(manager, s->slots[i]);
                s->slots[i] = -1;
            }
        }
    }
}
