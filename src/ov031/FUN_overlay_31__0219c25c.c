// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_0204734c(void *);
extern void *FUN_0203ffe8(void *, int, unsigned);
extern void FUN_0203666c(void *);
extern void FUN_0204b268(void *, void *);
extern void FUN_020473e8(void *, void *, int);
void *FUN_overlay_31__0219c25c(int *self, void *position, int *vector, int value, int *identifier) {
    int request[25];
    void *entry;
    FUN_0204734c(self);
    self[0] = 0x0219d058;
    *(Vec *)(self + 65) = *(Vec *)vector;
    entry = FUN_0203ffe8(*(void **)0x02108d5c, 66, 4);
    FUN_0203666c(request);
    request[22] = *identifier;
    *(Vec *)(request + 8) = *(Vec *)position;
    FUN_0204b268(request, entry);
    request[7] |= 0x4000;
    request[5] = value;
    if (vector[1] > 0) ((unsigned short *)request)[28] = 0x8000;
    FUN_020473e8(self, request, 0);
    self[43] = 2;
    return self;
}
