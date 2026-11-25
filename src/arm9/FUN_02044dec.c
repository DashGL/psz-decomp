// flags: -O4,p
typedef struct {
    unsigned int w[9];
} Mat33;

extern unsigned char DAT_021057d8[];
extern unsigned int DAT_0210579c[];
extern int FUN_0201cb44(void *, void *, void *, int);
extern void FUN_020197fc(void *);
extern void FUN_0206564c(void *, void *);
extern void FUN_0201982c(void *);
extern void FUN_02019784(void);
extern void FUN_0201a178(void *);

void FUN_02044dec(char *s) {
    unsigned int matrix[12];
    Mat33 basis;
    char *owner = *(char **)(s + 0x130);
    int active = 1;
    int idx;
    void (*callback)(void *);
    if (owner) {
        active = *(int *)(owner + 0xfc);
    }
    if (!active || !*(void **)(s + 0x1c) || !(*(unsigned int *)(s + 0x18) & 1)) {
        return;
    }
    idx = *(int *)(s + 0x138);
    if (idx != -1 && *(void **)(s + 0x134)) {
        FUN_0201cb44(*(void **)(s + 0x134), matrix, &basis, idx);
        *(unsigned int *)(s + 0x6c) = matrix[9];
        *(unsigned int *)(s + 0x70) = matrix[10];
        *(unsigned int *)(s + 0x74) = matrix[11];
        *(Mat33 *)(s + 0x90) = basis;
    }
    FUN_020197fc(s + 0x6c);
    FUN_0206564c(s + 0x90, DAT_021057d8);
    DAT_0210579c[0x7c / 4] &= ~0xa4u;
    FUN_0201982c(s + 0x78);
    FUN_02019784();
    callback = *(void (**)(void *))(s + 0xb8);
    if (callback) {
        callback(*(void **)(s + 0xc0));
    }
    FUN_0201a178(s + 0x24);
    callback = *(void (**)(void *))(s + 0xbc);
    if (callback) {
        callback(*(void **)(s + 0xc4));
    }
}
