// flags: -O4,p
typedef struct {
    unsigned char pad[6];
    unsigned short port;
    unsigned int ip;
    unsigned int key;
} Entry;
typedef struct {
    unsigned char pad[0x110];
    Entry entries[200];
} Self;
typedef struct {
    unsigned short pad;
    unsigned short port;
    unsigned int ip;
} Endpoint;
int FUN_020d71f8(Self *self, Endpoint *ep, unsigned int key) {
    int i;
    for (i = 0; i < 200; i++) {
        if (ep->ip == self->entries[i].ip &&
            ep->port == self->entries[i].port &&
            key == self->entries[i].key) {
            self->entries[i].ip = 0;
            self->entries[i].port = 0;
            return 1;
        }
    }
    return 0;
}
