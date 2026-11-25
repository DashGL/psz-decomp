// flags: -O4,s
struct SrcItem_0207f934 {
    int a;
    int b;
};
struct Src_0207f934 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    struct SrcItem_0207f934 arr[2];
};
struct DstItem_0207f934 {
    unsigned char b;
    int a;
};
struct Dst_0207f934 {
    unsigned char f0;
    unsigned char f1;
    unsigned char pad[2];
    int f4;
    struct DstItem_0207f934 arr[2];
};
void FUN_0207f934(struct Src_0207f934 *src, struct Dst_0207f934 *dst) {
    int i;
    struct SrcItem_0207f934 *sp;
    struct DstItem_0207f934 *dp;
    dst->f0 = src->f4;
    dst->f1 = src->f10;
    dst->f4 = src->fc;
    sp = src->arr;
    dp = dst->arr;
    for (i = 0; i < 2; i++) {
        dp[i].b = sp[i].b;
        dp[i].a = sp[i].a;
    }
}
