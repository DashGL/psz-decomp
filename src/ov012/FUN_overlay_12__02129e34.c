// flags: -O4,s
typedef struct { int x, y, z; } Triple;
typedef struct { unsigned char b[4]; } Four;
typedef struct {
    unsigned char header[4];
    volatile signed char sender, subject;
    volatile short index;
    Four bytes;
    Triple triple;
} Message;
extern void FUN_02036094(void *);
extern void FUN_020360a4(void *, int, int, int);
extern int FUN_02084cc0(void *);
extern unsigned int FUN_020bce3c(void *);
void FUN_overlay_12__02129e34(const char *self, int index) {
    Message m;
    FUN_02036094(&m);
    m.sender = -1;
    m.subject = -1;
    m.index = -1;
    FUN_020360a4(&m, 9, 0, 24);
    m.sender = FUN_02084cc0((void *)0x0211a51c);
    m.subject = *(const int *)(self + 0x1bc);
    m.index = index;
    m.bytes = *(const Four *)(self + index * 20 + 0x70);
    m.triple = *(const Triple *)(self + index * 20 + 0x74);
    FUN_020bce3c(&m);
}
