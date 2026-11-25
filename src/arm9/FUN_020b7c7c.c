// flags: -O4,s -lang c++
enum { E0 = 0, E1 = 1 };

extern "C" {
extern int FUN_02051bd4(void *, int);
extern int FUN_02051c10(void *);
extern void *FUN_020352a4(void *, int);
extern void *FUN_020352c0(void *);
extern void FUN_02036348(void *, const void *, const void *);
extern void FUN_02037390(volatile int *, const void *);

extern void *DAT_0210e24c;
extern void *DAT_02108cf4;
int FUN_020b7c7c(int p0, const void *p1, const int *p2);
}

struct Sub10_b7c7c {
    char pad[0x2c];
    unsigned int f2c;
};

struct Obj_b7c7c {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18();
    virtual int v1c(int *, int *, int);
    char pad[0xc];
    Sub10_b7c7c *f10;
};

int FUN_020b7c7c(int p0, const void *p1, const int *p2) {
    int v_pos[3];
    int v_diff[3];
    int v_tmp;
    volatile int dist;
    void *mgr = DAT_0210e24c;
    int cur_id = FUN_02051bd4(mgr, 0);
    int count = FUN_02051c10(mgr);
    if (cur_id == -1) {
        return -1;
    }
    int best_id = -1;
    int best_dist = *p2;
    for (int i = 0; i < count; i++, cur_id++) {
        Obj_b7c7c *obj;
        if (cur_id == p0) {
            continue;
        }
        obj = (Obj_b7c7c *)FUN_020352c0(FUN_020352a4(DAT_02108cf4, cur_id));
        if (obj == 0 || obj->f10 == 0 || ((obj->f10->f2c & 2) ? E1 : E0) != 0) {
            continue;
        }
        if (!obj->v1c(v_pos, &v_tmp, p0)) {
            continue;
        }
        FUN_02036348(v_diff, v_pos, p1);
        FUN_02037390(&dist, v_diff);
        if ((best_dist > dist) ? E1 : E0) {
            best_dist = dist;
            best_id = cur_id;
        }
    }
    return best_id;
}
