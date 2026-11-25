// flags: -O4,p
//cpp
struct Child {
    virtual ~Child();
    virtual int update();
};
extern "C" {
extern void *FUN_02077f3c(void);
extern int FUN_02077fec(void *), FUN_02078038(void *);
extern void FUN_02091708(void);
extern int FUN_020c2e38(void), FUN_020bbf6c(unsigned);
extern void FUN_overlay_12__02127e28(void *), FUN_overlay_12__02127e94(void *), FUN_overlay_12__021279fc(void *), FUN_overlay_12__02127ab8(void *), FUN_overlay_12__02127a3c(void *);
extern int FUN_overlay_12__02127d64(void *);
extern Child *FUN_overlay_12__02127dec(void *, int);
extern void FUN_020c2d94(int, int, int), FUN_020c193c(int, int, int, int, int), FUN_020c2b84(void *, void *, int, int, int), FUN_020c38f0(void *, int);
extern char DAT_overlay_12__0213dee8[];
extern char DAT_overlay_12__0213decc[];
extern char DAT_overlay_12__0213de80[];

int FUN_overlay_12__02127bec(char *self) {
    void *handles = FUN_02077f3c();
    if (FUN_02077fec(handles) != -1 && FUN_02078038(handles) != -1) FUN_02091708();
    int done = 0;
    Child *child;
    if (FUN_020c2e38()) {
        if (*(int *)(self + 4) == 0) FUN_overlay_12__02127e28(self);
        return 0;
    }
    switch (*(int *)(self + 4)) {
    case 0:
        FUN_overlay_12__02127e28(self);
        if (FUN_overlay_12__02127d64(self)) {
            FUN_020c2d94(0, 2, 0);
            *(int *)(self + 8) = *(int *)(self + 4);
            *(int *)(self + 4) = 2;
        }
        if (FUN_020bbf6c(2)) {
            FUN_020c2d94(0, 2, 0);
            FUN_020c193c(0, 1, 0, 0, -1);
            done = 1;
        }
        break;
    case 1:
        child = *(Child **)(self + 16);
        if (child && child->update()) {
            FUN_020c2d94(0, 2, 0);
            *(int *)(self + 8) = *(int *)(self + 4);
            *(int *)(self + 4) = 2;
        }
        break;
    case 2:
        FUN_020c2d94(0, 1, 0);
        if (*(int *)(self + 8) == 1) {
            child = *(Child **)(self + 16);
            if (child) {
                delete child;
                *(Child **)(self + 16) = 0;
            }
            FUN_020c2b84(self + 40, DAT_overlay_12__0213dee8, 3, 1, 4);
            FUN_020c2b84(self + 44, DAT_overlay_12__0213decc, 7, 1, 4);
            FUN_overlay_12__02127ab8(self + 20);
            FUN_overlay_12__02127a3c(self + 20);
            FUN_overlay_12__02127e94(self);
            *(int *)(self + 8) = *(int *)(self + 4);
            *(int *)(self + 4) = 0;
        } else if (*(int *)(self + 8) == 0) {
            FUN_overlay_12__021279fc(self + 20);
            FUN_020c2b84(self + 40, DAT_overlay_12__0213de80, 3, 1, 4);
            if (*(void **)(self + 36)) FUN_020c38f0(*(void **)(self + 36), 0);
            if (!*(Child **)(self + 16)) *(Child **)(self + 16) = FUN_overlay_12__02127dec(self, *(int *)(self + 12));
            *(int *)(self + 8) = *(int *)(self + 4);
            *(int *)(self + 4) = 1;
        }
        break;
    }
    return done;
}
}
