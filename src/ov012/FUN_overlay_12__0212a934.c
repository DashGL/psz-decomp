// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
extern Pair DAT_020ebb98;
void *FUN_overlay_12__0212a934(unsigned int *self) {
    *(Pair *)(self + 18) = DAT_020ebb98;
    *(Pair *)(self + 20) = DAT_020ebb98;
    return self;
}
