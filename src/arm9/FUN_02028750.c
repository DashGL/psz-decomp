// flags: -O4,p -noThumb
struct PollItem28750 {
    int fd;
    short events;
    short revents;
};

extern int FUN_02027db0(int);
extern void FUN_02066c68(int);

int FUN_02028750(struct PollItem28750 *fds, unsigned int nfds, long long timeout) {
    struct PollItem28750 *p;
    unsigned int i;
    int ready;
    int has_timeout = (timeout != -1LL);
    for (;;) {
        ready = 0;
        p = fds;
        for (i = 0; i < nfds; i++) {
            int mask = p->events | 0xe0;
            int rev = mask & FUN_02027db0(p->fd);
            p->revents = (short)rev;
            if (rev != 0) {
                ready++;
            }
            p++;
        }
        if (ready > 0 || (has_timeout && timeout <= 0)) {
            break;
        }
        FUN_02066c68(1);
        timeout -= 0x20b;
    }
    return ready;
}
