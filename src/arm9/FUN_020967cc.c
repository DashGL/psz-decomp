// flags: -O4,p
extern int FUN_020967f0(void *, int);
int FUN_020967cc(char *self, int id) {
    if (FUN_020967f0(self, id) < *(int *)(self + 4))
        return (*(unsigned short *)(self + 38) & (1u << id)) != 0;
    return 0;
}
