//cpp
// flags: -O4,s
extern "C" void FUN_020c3788(void *, void *, int, int, int);
class Renderer_02127e94 {
public:
    virtual void v0();
    virtual void v1();
    virtual void *get();
    virtual void *lookup(int);
};
struct Self_02127e94 {
    int pad[5];
    Renderer_02127e94 r;
};
extern "C" void FUN_overlay_12__02127e94(Self_02127e94 *self) {
    void *text = self->r.get();
    if (text) {
        int y = 31;
        for (int i = 0; i < 2; i++, y += 17) {
            FUN_020c3788(text, self->r.lookup(i), 10, y, 2);
        }
        FUN_020c3788(text, self->r.lookup(21), 18, 177, 2);
    }
}
