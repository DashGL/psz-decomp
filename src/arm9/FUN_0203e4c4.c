// flags: -O4,p
extern void FUN_0203ae74(void *);
struct S_0203e4c4 {
    unsigned char pad[0x26c];
    volatile unsigned int count;
};
void FUN_0203e4c4(struct S_0203e4c4 *s) {
    FUN_0203ae74(s);
    s->count++;
    if (s->count > 30) {
        s->count = 0;
    }
}
