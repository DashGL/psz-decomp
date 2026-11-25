// flags: -O4,s
extern char DAT_020fa148[];
extern void FUN_0203020c(void *, void *, int), FUN_020304b8(void *, void *);
void *FUN_02076dec(unsigned int *self, void *arg) {
    unsigned int position[3];
    FUN_0203020c(self, arg, 2);
    *(void **)self = DAT_020fa148;
    self[12] = *(unsigned int *)self[1];
    position[0] = 0; position[1] = 40960; position[2] = 0;
    FUN_020304b8(self, position);
    return self;
}
