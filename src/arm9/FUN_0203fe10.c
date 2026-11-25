// flags: -O4,s
//cpp
extern "C" {
extern void *DAT_02108c84;
extern void FUN_02037b88(void *, unsigned int), FUN_02037c5c(void *, unsigned int), FUN_02037d20(void *, unsigned int);
extern void FUN_020ba8b4(void *), FUN_02045f84(void *), FUN_0203f8b8(void *);
}

struct VObj {
    virtual ~VObj();
};

extern "C" void FUN_0203fe10(char *owner, char *s) {
    char *header, *entry;
    void *m, *p;
    VObj *vp;
    int group, i, count, current, index;
    if (!*(int *)(s + 16)) return;
    header = *(char **)(s + 8);
    if (header) {
        m = DAT_02108c84;
        for (group = 0; group < 7; group++) {
            count = *(int *)(*(char **)(header + 4) + 8 * group + 4);
            for (i = 0; i < count; i++) {
                unsigned short *elem = (unsigned short *)(*(char **)(s + 20 + 4 * group) + 4 * i);
                if (group == 0)
                    FUN_02037b88(m, *elem);
                else if (group == 1)
                    FUN_02037c5c(m, *elem);
                else
                    FUN_02037d20(m, *elem);
            }
            p = *(void **)(s + 20 + 4 * group);
            if (p) {
                FUN_020ba8b4(p);
                *(void **)(s + 20 + 4 * group) = 0;
            }
        }
        if (*(void **)(s + 48)) {
            for (i = 0; i < *(int *)(header + 36); i++) {
                entry = *(char **)(s + 48) + 20 * i;
                if (*(int *)(entry + 16)) *(unsigned short *)(entry + 2) = 65535;
                FUN_02045f84(*(char **)(s + 48) + 20 * i);
            }
            FUN_020ba8b4(*(void **)(s + 48));
        }
    }
    vp = *(VObj **)s;
    if (vp) {
        delete vp;
        *(void **)s = 0;
    }
    FUN_0203f8b8(s);
    current = *(int *)(owner + 16);
    index = (int)((unsigned int)s - *(unsigned int *)(owner + 4)) / 52;
    if (current == index) {
        (*(int **)(owner + 12))[current] = -1;
        *(int *)(owner + 16) = -1;
    }
}
