// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *, int);
extern void FUN_0200c394(void *, int, int, void (*)(void), void (*)(void));
extern void FUN_020656b8(void *, int, int);
#pragma thumb on
extern void FUN_020bf2d8(void);
extern void FUN_020bf2fc(void);

struct Node4c {
    int f0;
    struct Node4c *next;
    char pad[0x44];
};
struct Pool {
    char a[0x60];
    char b[0x1380];
    char c[0x60];
    char d[0x1080];
    struct Node4c *head;
    struct Node4c nodes[0x60];
};

void *FUN_020bf138(struct Pool *param_1) {
    int i;
    FUN_0200c938(param_1->a, 0x60);
    FUN_0200c938(param_1->c, 0x60);
    FUN_0200c394(param_1->d, 0x60, 0x2c, FUN_020bf2d8, FUN_020bf2fc);
    FUN_020656b8(param_1->a, 0, 0x60);
    FUN_020656b8(param_1->b, 0, 0x1380);
    FUN_020656b8(param_1->c, 0, 0x60);
    FUN_020656b8(param_1->d, 0, 0x1080);
    FUN_020656b8(param_1->nodes, 0, 0x1c80);
    param_1->head = param_1->nodes;
    for (i = 0; i < 0x5f; i++) {
        param_1->nodes[i].next = &param_1->nodes[i + 1];
    }
    return param_1;
}
