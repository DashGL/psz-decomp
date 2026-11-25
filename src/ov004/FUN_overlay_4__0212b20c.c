// flags: -O4,s
typedef struct { unsigned char b[4]; } Tag;
typedef struct { unsigned int x, y, z; } Triple;
typedef struct { Tag tag; Triple values; } Record;
extern void *FUN_0204f3b8(void);
extern int FUN_0204f464(void *);
extern void FUN_0204f478(void *, void *);
extern void FUN_overlay_4__0212b480(void *, void *);
int FUN_overlay_4__0212b20c(char *self) {
    Record record;
    if (FUN_0204f464(FUN_0204f3b8())) {
        FUN_0204f478(FUN_0204f3b8(), &record);
        FUN_overlay_4__0212b480(self, &record);
        *(Tag *)(self + 0x4c) = record.tag;
        *(Triple *)(self + 0x50) = record.values;
        *(int *)(self + 0x44) = 0;
        return 1;
    }
    return 0;
}
