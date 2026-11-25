// flags: -O4,s
extern int FUN_020bbf94(unsigned int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_overlay_4__02128940(void *);
void FUN_overlay_4__02128584(int *self, int *index, int count) {
    int changed = 0;
    if (FUN_020bbf94(128)) { changed = 1; (*index)++; if (*index >= count) *index = 0; }
    else if (FUN_020bbf94(64)) { changed = 1; (*index)--; if (*index < 0) *index = count - 1; }
    if (changed == 1) {
        FUN_020c193c(0, 2, 0, 0, -1);
        if (self[2] != 1) FUN_overlay_4__02128940(self);
    }
}
