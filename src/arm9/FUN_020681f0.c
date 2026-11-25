// flags: -O4,p -noThumb
struct Alarm {
    int f0;
    char pad[0x10];
    struct Alarm *prev;
    struct Alarm *next;
    int f1c;
    int f20;
};

struct AlarmQueue {
    int f0;
    struct Alarm *head;
    struct Alarm *tail;
};

extern struct AlarmQueue DAT_021184e4;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_02067ebc(struct Alarm *);

void FUN_020681f0(struct Alarm *r5) {
    struct Alarm *next;
    struct Alarm *prev;
    int r4 = FUN_020683d4();
    if (r5->f0 == 0) {
        FUN_020683e8(r4);
        return;
    }
    next = r5->next;
    if (next == 0) {
        DAT_021184e4.tail = r5->prev;
    } else {
        next->prev = r5->prev;
    }
    prev = r5->prev;
    if (prev != 0) {
        prev->next = next;
    } else {
        DAT_021184e4.head = next;
        if (next != 0) {
            FUN_02067ebc(next);
        }
    }
    r5->f0 = 0;
    r5->f1c = 0;
    r5->f20 = 0;
    FUN_020683e8(r4);
}
