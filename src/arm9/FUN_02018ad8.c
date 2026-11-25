// flags: -O4,p -noThumb
struct Node18AD8 {
    int pad[4];
    struct Node18AD8 *next;
    int pad2;
    unsigned char key;
};

void FUN_02018ad8(struct Node18AD8 **head, struct Node18AD8 *list) {
    struct Node18AD8 *p = *head;
    struct Node18AD8 *n;
    struct Node18AD8 *tail;
    if (!p) {
        *head = list;
        return;
    }
    n = p->next;
    if (!n) {
        if (p->key > list->key) {
            tail = list;
            if (tail->next) {
                do {
                    tail = tail->next;
                } while (tail->next);
            }
            tail->next = p;
            *head = list;
        } else {
            p->next = list;
        }
        return;
    }
    while (n) {
        if (n->key >= list->key) {
            tail = list;
            if (tail->next) {
                do {
                    tail = tail->next;
                } while (tail->next);
            }
            p->next = list;
            tail->next = n;
            return;
        }
        p = n;
        n = n->next;
    }
    p->next = list;
}
