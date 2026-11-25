// flags: -O4,s -lang c++
enum { E0 = 0, E1 = 1 };

extern "C" {
extern int FUN_02051bd4(void *, int);
extern int FUN_02051c10(void *);
#pragma thumb off
extern void *FUN_0200c2dc(int, int, int, int, int);
#pragma thumb on
extern void *FUN_020352a4(void *, int);
extern void *FUN_020352c0(void *);
extern void FUN_02036348(void *, const void *, const void *);
extern void FUN_02037390(int *, const void *);
extern void FUN_020ba8b4(void *);

extern void *DAT_0210e24c;
extern void *DAT_02108cf4;
int FUN_020b7d2c(int p0, const void *p1, const int *p2, int *p3, int *p4, int p5);
}

struct Sub10_b7d2c {
    char pad[0x2c];
    unsigned int f2c;
};

struct Obj_b7d2c {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18();
    virtual int v1c(int *, int *, int);
    char pad[0xc];
    Sub10_b7d2c *f10;
};

int FUN_020b7d2c(int p0, const void *p1, const int *p2, int *p3, int *p4, int p5) {
    int v38[3];
    int v2c[3];
    int v28;
    int dist;
    int cur_id;
    int count = 0;
    int max_i;
    int idx;
    int *arr;

    if (p3 != 0 && p5 > 0) {
        void *mgr = DAT_0210e24c;
        cur_id = FUN_02051bd4(mgr, count);
        max_i = FUN_02051c10(mgr);
        if (cur_id == -1) {
            return 0;
        }
        arr = (int *)FUN_0200c2dc(p5, 4, 0, 0, 0);
        for (int j = 0; j < p5; j++) {
            arr[j] = *p2;
            p3[j] = -1;
        }
        for (idx = 0; idx < max_i; idx++, cur_id++) {
            Obj_b7d2c *obj;
            if (cur_id == p0) {
                continue;
            }
            obj = (Obj_b7d2c *)FUN_020352c0(FUN_020352a4(DAT_02108cf4, cur_id));
            if (obj == 0 || obj->f10 == 0 || ((obj->f10->f2c & 2) ? E1 : E0) != 0) {
                continue;
            }
            if (!obj->v1c(v38, &v28, p0)) {
                continue;
            }
            FUN_02036348(v2c, v38, p1);
            FUN_02037390(&dist, v2c);
            for (int j = 0; j < p5; j++) {
                if ((dist < arr[j]) ? E1 : E0) {
                    for (int k = p5 - 1; k > j; k--) {
                        p3[k] = p3[k - 1];
                        arr[k] = arr[k - 1];
                    }
                    p3[j] = cur_id;
                    arr[j] = dist;
                    break;
                }
            }
        }
        for (int j = 0; j < p5; j++) {
            if (p3[j] != -1) {
                count++;
                if (p4 != 0) {
                    p4[j] = arr[j];
                }
            }
        }
        if (arr != 0) {
            FUN_020ba8b4(arr);
        }
    }
    return count;
}
