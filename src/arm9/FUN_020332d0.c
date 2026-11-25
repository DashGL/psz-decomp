//cpp
// flags: -O4,s
struct Self {};
typedef void (Self::*Pmf)(void *);
struct Dispatch {
    Pmf pmf;
    unsigned int flags;
};
extern "C" {
extern char *FUN_0200d16c(void);
extern char *FUN_0203339c(void *);
extern const Dispatch DAT_020ec2f8[15];
void FUN_020332d0(void *queue, Self *self) {
    unsigned int mask = 0;
    int mode = *(int *)(FUN_0200d16c() + 12);
    char *message;
    if (mode == 1) mask |= 1;
    if (mode == 8) mask |= 2;
    for (;;) {
        message = FUN_0203339c(queue);
        if (message == 0) break;
        {
            int index = *(int *)(message + 4);
            if (index < 0 || index >= 15) continue;
            {
                const Dispatch *entry = &DAT_020ec2f8[index];
                if ((entry->flags & mask) && entry->pmf) {
                    (self->*(entry->pmf))(message);
                }
            }
        }
    }
}
}
