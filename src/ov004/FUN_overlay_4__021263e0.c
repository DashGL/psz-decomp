typedef struct { unsigned char tag[4]; unsigned int v[3]; } Record;
typedef struct { int a, b; int pad[11]; int direct; int items[11]; int group; } Obj;
extern const char data_02195f90[], data_021965d0[];
extern void *FUN_02088c7c(void), *FUN_0203955c(void *);
extern void FUN_02088dd8(void *, const void *, int, int), FUN_02088e10(void *, const void *, int, int), FUN_02088cd0(void *, void *);
void FUN_overlay_4__021263e0(Obj *self) {
    Record empty;
    int index, group;
    if (self->a == 10 || self->b == 10) {
        FUN_02088dd8(FUN_02088c7c(), data_02195f90 + self->direct * 20, 0, -1);
    } else {
        group = self->group;
        index = self->items[group];
        if (index >= 0) FUN_02088dd8(FUN_02088c7c(), data_021965d0 + group * 1600 + index * 20, 0, -1);
        else {
            FUN_0203955c(&empty);
            FUN_02088e10(FUN_02088c7c(), &empty, 0, -1);
        }
    }
    FUN_02088cd0(FUN_02088c7c(), 0);
}