// flags: -O4,s
extern void *FUN_02093c00(int);
extern unsigned int FUN_02093b2c(void *, int, int);
extern void FUN_020b2330(void *, unsigned int);
typedef struct { int f00, f04; char pad[0x58]; short f60, f62; int f64, f68, f6c; } Obj;
typedef struct { short a, b; int c; } Out;
int FUN_overlay_18__02122c8c(Obj *self, Out *output) {
    int ret = 0;
    if (!self->f6c) {
        if (!self->f04) {
            void *p;
            self->f68 = 0;
            p = FUN_02093c00(0);
            if (p) FUN_020b2330(self, FUN_02093b2c(p, 0, 0));
            self->f6c = 1;
            return 1;
        }
        output->a = self->f60;
        output->b = self->f62;
        output->c = self->f64;
        ret = 1;
    }
    return ret;
}
