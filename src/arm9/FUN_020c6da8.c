// flags: -O4,s
typedef struct {
    int count;
    int capacity;
    int stride;
    int growth;
    void (*destroy)(void *);
    char *data;
} Array;
extern void *FUN_020c7bcc(unsigned int);
Array *FUN_020c6da8(int stride, int capacity, void (*destroy)(void *)) {
    Array *a = FUN_020c7bcc(24);
    if (!capacity) capacity = 8;
    a->count = 0;
    a->capacity = capacity;
    a->stride = stride;
    a->growth = capacity;
    a->destroy = destroy;
    if (a->capacity)
        a->data = FUN_020c7bcc(a->capacity * a->stride);
    else
        a->data = 0;
    return a;
}
