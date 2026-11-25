// flags: -O4,s
#pragma opt_propagation off
extern int FUN_0207f334(void *, int);
extern void FUN_0207f34c(void *, int, int, int, int, int);
void FUN_0207f270(void *self, signed char *desc) {
    if (FUN_0207f334(self, desc[5])) {
        int a = desc[6];
        FUN_0207f34c(self, a, *(short *)(desc + 8), desc[1], desc[10] == 1, 0);
    }
}