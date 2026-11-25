// flags: -O4,s
extern void FUN_02041a08(void *, const void *);
extern int FUN_0206d3dc(const int *, int *);
extern void *FUN_0206d1ec(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
void FUN_02041bcc(void *out, const int *record) {
    int index;
    FUN_02041a08(out, record);
    index = -1;
    if (FUN_0206d3dc(record, &index)) {
        switch (index) {
        case 0: FUN_0206d1ec(out, 0, 0, 4, 4, 1); break;
        case 1: FUN_0206d1ec(out, 0, 0, 4, 4, 3); break;
        case 2: FUN_0206d1ec(out, 0, 0, 4, 4, 4); break;
        case 3: FUN_0206d1ec(out, 0, 0, 4, 4, 5); break;
        case 4: FUN_0206d1ec(out, 0, 0, 4, 4, 6); break;
        case 5: FUN_0206d1ec(out, 0, 0, 4, 4, 2); break;
        }
    } else if (record[0] == 8 && record[1] == 1) {
        FUN_0206d1ec(out, 8, 1, 0, 1, 1);
    }
}
