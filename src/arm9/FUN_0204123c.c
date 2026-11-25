//cpp
// flags: -O4,s

struct Self;
typedef void (Self::*ActionFn)(void *, void *);

struct ActionEntry {
    ActionFn one_shot;
    ActionFn start;
    ActionFn tick;
    ActionFn end;
};

struct Self {
    unsigned char pad[0x98];
    unsigned char *f98;
};

struct Record {
    signed char f00;
    signed char f01;
    signed char f02;
    signed char f03;
    int f04;
    int f08;
    signed char *f0c;
};

struct Descriptor {
    int f00;
    int f04;
    Record *records;
    int count;
};

struct Slot {
    int state;
    int pad[4];
};

struct Sequence {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int pad[4];
    Slot slots[1];
};

extern "C" {
extern ActionEntry DAT_020f8c64[];
extern ActionFn DAT_020ebb98;
extern int FUN_020424b4(void *, int);
extern void FUN_02040b30(void *);
}

extern "C" void FUN_0204123c(Self *self, Descriptor *desc, Sequence *seq) {
    ActionFn action;
    ActionFn tick;
    int frame = FUN_020424b4(*(void **)(self->f98 + 0x70 * seq->f08), 0);
    int count = desc->count;
    int key;
    int when;
    int next;
    int i;

    for (i = 0; i < count; i++) {
        Slot *slot = &seq->slots[i];
        int done = 1;
        if (slot->state >= 0 && slot->state < 2) {
            done = 0;
        }
        if (done != 0) {
            continue;
        }
        Record *rec = &desc->records[i];
        ActionEntry *entry = &DAT_020f8c64[rec->f02];
        int is_idle = !slot->state;
        if (is_idle != 0) {
            key = rec->f00;
            when = rec->f04;
            int is_oneshot = !rec->f03;
            if (is_oneshot != 0) {
                next = 2;
                action = entry->one_shot;
                tick = DAT_020ebb98;
            } else {
                next = 1;
                action = entry->start;
                tick = DAT_020ebb98;
            }
        } else {
            int is_active = !(slot->state != 1);
            if (is_active != 0) {
                key = rec->f01;
                when = rec->f08;
                next = 2;
                action = entry->end;
                tick = entry->tick;
            }
        }

        int before = (seq->f14 < key || (seq->f14 == key && seq->f18 < when))
                  || ((seq->f14 == seq->f0c && frame < seq->f18) && seq->f0c == key);
        int reached = (seq->f0c > key || (seq->f0c == key && frame >= when));

        if (before != 0 && reached != 0) {
            if (rec->f02 == 4) {
                int s0 = !slot->state;
                if (s0 != 0) {
                    *(unsigned int *)((char *)seq + 0x110) |= 1u << rec->f0c[0];
                }
            }
            slot->state = next;
            if (action != 0) {
                (self->*action)(rec, slot);
            }
        } else {
            if (tick != 0) {
                (self->*tick)(rec, slot);
            }
        }

        if (slot->state == 2 && seq->f20 != 0) {
            int os = !rec->f03;
            if (os != 0 || (seq->f0c == rec->f00 && seq->f0c == rec->f01)) {
                FUN_02040b30(slot);
                slot->state = 0;
            }
        }
    }
}
