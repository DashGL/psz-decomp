// flags: -O4,s
extern void *FUN_0208555c(int);
extern void *FUN_02084638(void *);
extern int FUN_0204edc8(void *, int);
extern int FUN_0203ae60(void *);
extern void FUN_0204e438(int, int, int);
typedef struct { unsigned char b[4]; } Rec;
int FUN_0204ef9c(int id, Rec *src) {
    int result = 0;
    void *object = FUN_0208555c(id);
    Rec record;
    void *p;
    record = *src;
    p = FUN_02084638(&record);
    if (p && object && FUN_0204edc8(p, 2048) && !FUN_0203ae60(object)) {
        FUN_0204e438(id, id, 1);
        result = 1;
    }
    return result;
}
