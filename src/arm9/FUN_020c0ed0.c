// flags: -O4,s
struct Key12 { unsigned char b[12]; };
struct Rec52 { unsigned int f0; unsigned int f4; unsigned long long id; unsigned char rest[36]; };
extern struct Key12 DAT_0211b444[64];
extern struct Rec52 DAT_0211b744[64];
extern int FUN_020dd6c4(const void *);
extern int FUN_020dd920(const void *, const void *);
extern void FUN_020c06ac(void *, const void *);

int FUN_020c0ed0(const void *key, unsigned long long id, const void *text) {
    int i;
    if (FUN_020dd6c4(key) == 1) {
        for (i = 0; i < 64; ++i) {
            if (FUN_020dd6c4(&DAT_0211b444[i]) == 1 && FUN_020dd920(key, &DAT_0211b444[i]) == 1) {
                struct Rec52 *rec = &DAT_0211b744[i];
                if (rec->id == 0 && id != 0) {
                    rec->id = id;
                }
                FUN_020c06ac(rec, text);
                return 1;
            }
        }
    }
    return 0;
}
