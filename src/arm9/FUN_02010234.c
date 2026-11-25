// flags: -O4,p -noThumb
extern unsigned int FUN_0200ede0(int);
extern unsigned int FUN_0200f18c(unsigned int, unsigned int, void *, void *, int);
extern void FUN_02010884(void *);
extern void FUN_02010b68(void);
struct Rec {
    unsigned char pad0[292];
    unsigned char cnt;
    unsigned char pad1;
    unsigned char arr[6];
    unsigned int memory;
    unsigned int size;
    unsigned char pad2[372 - 308];
};
extern struct Rec DAT_0210316c[4];

int FUN_02010234(unsigned int archive) {
    int i, j;
    unsigned int size, memory;
    unsigned char *record;
    for (i = 0; i < 4; i++) {
        record = (unsigned char *)FUN_0200ede0(i);
        if (record) {
            DAT_0210316c[i].cnt = record[0];
            for (j = 0; j < record[0]; j++) {
                DAT_0210316c[i].arr[j] = record[1 + j];
            }
            if (archive) {
                size = DAT_0210316c[i].cnt << 11;
                memory = FUN_0200f18c(archive, size, (void *)FUN_02010b68, &DAT_0210316c[i], 0);
                if (!memory) return 0;
                FUN_02010884(&DAT_0210316c[i]);
                DAT_0210316c[i].memory = memory;
                DAT_0210316c[i].size = size;
            }
        }
    }
    return 1;
}
