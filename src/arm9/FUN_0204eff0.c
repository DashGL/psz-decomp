// flags: -O4,s
typedef struct { unsigned char b[4]; } Rec4;
extern void *FUN_0208555c(int);
extern void *FUN_02084638(void *);
extern int FUN_0204edc8(void *, int);
extern int FUN_0203ae60(void *);
extern void FUN_0204e608(int, int, int, int);
int FUN_0204eff0(int id, unsigned char *src) {
    int result = 0;
    void *object = FUN_0208555c(id);
    Rec4 record;
    void *p;
    record = *(Rec4 *)src;
    p = FUN_02084638(&record);
    if (p && object && FUN_0204edc8(p, 4096) && FUN_0203ae60(object)) {
        FUN_0204e608(id, id, 1, 34);
        result = 1;
    }
    return result;
}
