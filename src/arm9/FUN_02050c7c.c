// flags: -O4,s
#pragma thumb off
extern int FUN_0201cc18(void *);
extern int FUN_0201d774(void *);
#pragma thumb on
typedef struct { int f0; void *p4; int f8; unsigned char f0c; unsigned char f0d; } S;
int FUN_02050c7c(S *self) {
    if (self->f0d == 0) {
        void *p = self->p4;
        if (p != 0 && FUN_0201cc18(p) == 1) {
            self->f0d = 1;
            self->f8 = FUN_0201d774(p);
            return 1;
        }
    }
    return 0;
}
