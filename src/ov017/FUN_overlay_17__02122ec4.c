// flags: -O4,s
extern unsigned int FUN_overlay_17__02122e3c(void *);
extern void FUN_overlay_17__02122828(void *);
typedef struct {
    char pad[0x9d3c];
    signed char ch;
    char pad2[3];
    volatile unsigned int res;
} Obj;
unsigned int FUN_overlay_17__02122ec4(Obj *self) {
    unsigned int value = FUN_overlay_17__02122e3c(self);
    while (self->ch == '+' || self->ch == '-') {
        switch (self->ch) {
        case '+':
            FUN_overlay_17__02122828(self);
            value += FUN_overlay_17__02122e3c(self);
            break;
        case '-':
            FUN_overlay_17__02122828(self);
            value -= FUN_overlay_17__02122e3c(self);
            break;
        }
    }
    self->res = value;
    return self->res;
}
