// flags: -O4,s
extern int FUN_02047440(void *);
extern void FUN_02036848(void *, void *);
extern void FUN_0204bf88(void *);
extern int DAT_overlay_31__0219cb3c;
extern int DAT_overlay_31__0219cb40[];

int FUN_overlay_31__02198084(int *self)
{
    int result = FUN_02047440(self);
    if (result == 0) {
        unsigned ok = (self[1] == 4);
        if (ok) {
            int damping;
            FUN_02036848(self + 23, self + 65);
            damping = DAT_overlay_31__0219cb3c;
            self[65] = (int)(((long long)self[65] * damping + 2048) >> 12);
            self[66] = (int)(((long long)self[66] * damping + 2048) >> 12);
            self[67] = (int)(((long long)self[67] * damping + 2048) >> 12);
            FUN_02036848(self + 65, DAT_overlay_31__0219cb40);
            ((unsigned short *)self)[53] += 1536;
            FUN_0204bf88(self);
        }
    }
    return result;
}
