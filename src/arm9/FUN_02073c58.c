// flags: -O4,s
typedef unsigned long long u64;
typedef unsigned int u32;
extern u64 DAT_0211c844[3];
int FUN_02073c58(int a) {
    int arr[32];
    if (a != 0) {
        u32 cnt = 0;
        int i = 0;
        for (; cnt < 32 && i < 32 && a != 0; a >>= 1, i++) {
            if (a & 1) {
                arr[cnt] = i;
                cnt++;
            }
        }
        if (cnt != 0) {
            u64 n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
            DAT_0211c844[0] = n;
            if (cnt != 0) {
                n = (n >> 32) * cnt;
            }
            return arr[(u32)(n >> 32)];
        }
    }
    return -1;
}
