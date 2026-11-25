// flags: -O4,p
extern void FUN_overlay_15__0213596c(void *, int, int, int);
typedef struct {
    void *arr[4];
    char pad[7];
    unsigned char mode;
} State;
extern State *DAT_0213e788;
extern unsigned char DAT_02139da4[];
extern unsigned char DAT_02139d96[][2];
typedef struct { unsigned short x; unsigned short y; } Entry;
extern Entry DAT_02139d80[];
void FUN_overlay_15__02124f28(int y) {
    int count = DAT_02139da4[DAT_0213e788->mode];
    int i;
    FUN_overlay_15__0213596c(DAT_0213e788->arr[2], -1, 0, y);
    for (i = 0; i < count; i++) {
        State *st = DAT_0213e788;
        int index = DAT_02139d96[st->mode][i];
        int x = DAT_02139d80[index].x;
        FUN_overlay_15__0213596c(st->arr[i], -1, x, y + 4);
    }
}
