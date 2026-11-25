// flags: -O4,s
#pragma thumb off
extern void FUN_020656b8(void *, int, int);
#pragma thumb on
extern void FUN_020c4434(void *), FUN_020bdef0(void *, void *, int), FUN_02074504(void *, void *), FUN_020743fc(void *, void *);
extern int FUN_02073218(int), FUN_02073fd8(void *), FUN_02074a08(void *, int), FUN_020bdf28(void *, int *, void *);
extern char *FUN_020c1138(int);

int FUN_0207441c(char *s, void *out, void *payload) {
    char *cache = s + 72;
    int refresh = 0, count, i, id, local[8];
    char *peer;
    void *manager;
    if (*(int *)(s + 64) == 90 || *(int *)(s + 68) == 2) refresh = 1;
    *(int *)(s + 68) = 0;
    if (refresh == 1) {
        int selected;
        FUN_020656b8(cache, 0, 40);
        selected = -1;
        FUN_020c4434(local + 3);
        FUN_020656b8(local + 3, 0, 20);
        manager = *(void **)(s + 44);
        count = 0;
        if (manager) {
            for (i = 0; i < 4 && count <= 3; i++) {
                if (FUN_02073218(i) == 1 && i != FUN_02073fd8(s)) {
                    id = FUN_02074a08(s, i);
                    if (id >= 0) {
                        local[count] = id;
                        count++;
                    }
                }
            }
            if (count >= 1 && count <= 3) FUN_020bdef0(manager, local, count);
            count = FUN_020bdf28(manager, &selected, local + 3);
        }
        if (count) {
            *(int *)cache = count;
            peer = FUN_020c1138(selected);
            if (peer) FUN_02074504(cache + 4, peer + 16);
            FUN_020743fc(cache + 24, local + 3);
            *(int *)(s + 64) = 0;
        }
    }
    if (*(int *)cache) {
        FUN_02074504(out, cache + 4);
        FUN_020743fc(payload, cache + 24);
    }
    return *(int *)cache;
}
