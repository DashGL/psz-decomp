// flags: -O4,s
typedef struct { unsigned char b[20]; } Name;
typedef struct { int d, e; } Pair;
typedef struct { Name name; int a, b, c; Pair de; } Record;
extern void *data_0210e24c;
extern int FUN_02078198(int), FUN_02051aa4(void *, void *, int, int);
extern void FUN_overlay_4__0212b3ec(void *, void *), FUN_02051c5c(void *, int);
int FUN_overlay_4__0212b2d0(char *self, int *entry) {
    Record record;
    int id, selector;
    if (entry) {
        id = entry[16];
        selector = entry[14];
        if (FUN_02078198(id)) {
            if (FUN_02051aa4(data_0210e24c, &record, id, selector) == 1) {
                FUN_overlay_4__0212b3ec(self, &record);
                *(Name *)(self + 92) = record.name;
                *(int *)(self + 112) = record.a;
                *(int *)(self + 116) = record.b;
                *(int *)(self + 120) = record.c;
                *(Pair *)(self + 124) = record.de;
                *(int *)(self + 68) = 0;
                return 1;
            }
            FUN_02051c5c(data_0210e24c, id);
        }
    }
    return 0;
}