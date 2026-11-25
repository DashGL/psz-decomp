// flags: -O4,p
extern const unsigned int DAT_020f4abc[][3][2];
extern int FUN_0209e31c(void *);
unsigned int FUN_0209e2e8(signed char *self) {
    if (FUN_0209e31c(self)) return 0;
    return DAT_020f4abc[self[32]][self[34]][self[33]];
}
