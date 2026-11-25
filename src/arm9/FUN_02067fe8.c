// flags: -O4,p -noThumb
typedef unsigned long long U64;
typedef long long S64;

typedef struct Node {
    int words[3];
    U64 fire;
    struct Node *prev;
    struct Node *next;
    U64 period;
    U64 start;
} Node;

extern struct {
    int word;
    Node *head;
    Node *tail;
} DAT_021184e4;

extern U64 FUN_02067e0c(void);
extern void FUN_02067ebc(Node *);

void FUN_02067fe8(Node *alarm, U64 fire) {
    Node *next;

    if (alarm->period > 0) {
        U64 t = FUN_02067e0c();
        fire = alarm->start;
        if (fire < t) {
            fire += alarm->period * ((t - fire) / alarm->period + 1);
        }
    }

    alarm->fire = fire;
    for (next = DAT_021184e4.head; next; next = next->next) {
        if ((S64)(fire - next->fire) < 0) {
            alarm->prev = next->prev;
            next->prev = alarm;
            alarm->next = next;
            if (alarm->prev) {
                alarm->prev->next = alarm;
            } else {
                DAT_021184e4.head = alarm;
                FUN_02067ebc(alarm);
            }
            return;
        }
    }

    alarm->next = 0;
    {
        Node *prev = DAT_021184e4.tail;
        DAT_021184e4.tail = alarm;
        alarm->prev = prev;
        if (prev) {
            prev->next = alarm;
        } else {
            DAT_021184e4.head = DAT_021184e4.tail = alarm;
            FUN_02067ebc(alarm);
        }
    }
}
