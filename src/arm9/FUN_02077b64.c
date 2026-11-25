// flags: -O4,s
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern char *FUN_020870c4(void *);

typedef struct {
    int valid;
    int val;
} Slot77b64;

typedef struct {
    unsigned char pad[0xd8];
    Slot77b64 slots[2][3];
} S77b64;

typedef struct {
    unsigned char pad[0xcfc];
    Slot77b64 slots[2][3];
} P77b64;

void FUN_02077b64(S77b64 *s) {
    if (FUN_02087138(FUN_02086e3c())) {
        P77b64 *p = (P77b64 *)FUN_020870c4(FUN_02086e3c());
        int i, j;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                s->slots[i][j].val = p->slots[i][j].valid;
                if (s->slots[i][j].val != -1) {
                    s->slots[i][j].valid = 1;
                } else {
                    s->slots[i][j].valid = 0;
                }
            }
        }
    }
}
