// flags: -O4,p
struct PollRecord { unsigned int fd; short events; short result; };
#pragma thumb off
extern int FUN_02028750(struct PollRecord *, unsigned int, unsigned int, unsigned int);
#pragma thumb on

int FUN_020c75b4(unsigned int fd, int *readable, int *writable, int *error) {
    struct PollRecord p;
    int result;
    p.fd = fd;
    p.events = 0;
    if (readable) p.events |= 1;
    if (writable) p.events |= 8;
    p.result = 0;
    result = FUN_02028750(&p, 1, 0, 0);
    if (result < 0) return -1;
    if (readable) {
        if (result > 0 && (p.result & 0x41)) *readable = 1;
        else *readable = 0;
    }
    if (writable) {
        if (result > 0 && (p.result & 8)) *writable = 1;
        else *writable = 0;
    }
    if (error) {
        if (result > 0 && (p.result & 0x20)) *error = 1;
        else *error = 0;
    }
    return result;
}
