//cpp
// flags: -O4,p
struct B_020bef74 {
    unsigned char pad[0xc];
    int fc;
};
extern "C" void FUN_020beff8(void *, B_020bef74 *);
extern "C" void FUN_020bf078(B_020bef74 *);
extern "C" void FUN_020bef74(void *a, B_020bef74 *b) {
    int empty = (b->fc == 0) ? 1 : 0;
    if (empty == 0) {
        FUN_020beff8(a, b);
        FUN_020bf078(b);
    }
}
