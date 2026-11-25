// flags: -O4,s
struct Obj {
    unsigned char pad[0x9d24];
    int counter;
};
void FUN_overlay_17__02123d6c(struct Obj *p, int direction) {
    if (direction == 1) {
        p->counter++;
    } else {
        p->counter--;
    }
    p->counter = (p->counter < 0) ? 0 : p->counter;
}
