// flags: -O4,p -noThumb
struct Entry {
    unsigned int active;
    unsigned char pad[6];
    unsigned short port;
};

struct Node {
    unsigned char pad0[0x68];
    struct Node *next;
    unsigned char pad1[0x38];
    struct Entry *entry;
};

struct GlobalList {
    unsigned int pad[2];
    struct Node *head;
};

struct GlobalPort {
    unsigned int pad[2];
    unsigned short port;
};

extern struct GlobalList DAT_021181a0;
extern struct GlobalPort DAT_02107054;

unsigned short FUN_02023e84(void) {
    int found;
    struct Node *p;
    do {
        found = 0;
        DAT_02107054.port++;
        if (DAT_02107054.port < 1024 || DAT_02107054.port >= 5000) {
            DAT_02107054.port = 1024;
        }
        for (p = DAT_021181a0.head; p != 0; p = p->next) {
            struct Entry *e = p->entry;
            if (e != 0 && e->active != 0 && e->port == DAT_02107054.port) {
                found = 1;
                break;
            }
        }
    } while (found);
    return DAT_02107054.port;
}
