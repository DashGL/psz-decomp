//cpp
// flags: -O4,s
extern "C" {
extern void FUN_0206e2a4(void *);
extern void FUN_0206e248(void *);
extern int FUN_0206e344(void *);
extern void FUN_02051358(void *, int);
void FUN_0206e19c(void *self) {
    FUN_0206e2a4(self);
    FUN_0206e248(self);
    if ((FUN_0206e344(self) == 0 ? 1 : 0) != 0) {
        FUN_02051358(self, 1);
    }
}
}
