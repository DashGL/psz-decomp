// flags: -O4,s
#pragma always_inline on
typedef struct Config { int words[6]; } Config;
extern void FUN_overlay_12__02132410(void);
extern void FUN_overlay_12__021323b0(void *, Config *);
extern char *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *, int);
extern int FUN_0203a1fc(void *);
extern int FUN_020b0494(void *);
extern int FUN_020b00e8(void *, void *, int, int *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned);
#pragma thumb reset

static inline char *get_inv(void)
{
    return FUN_02086e3c() + 16;
}

void FUN_overlay_12__02128600(int *self)
{
    FUN_overlay_12__02132410();
    if (self[1] == 0) {
        int full, count, oldcount, amount, i;
        char *storage, *player, *inventory;
        inventory = get_inv();
        if (self[2] == 0) storage = FUN_02086e3c() + 40;
        else storage = FUN_02086e3c() + 28;
        player = FUN_02086e3c();
        full = 0;
        oldcount = *(short *)(storage + 8);
        if (oldcount == FUN_020b0494(storage)) full = 1;
        count = *(short *)(inventory + 8);
        for (i = 0; i < count; i++) {
            void *item = FUN_020b00ac(inventory, i);
            if (!FUN_0203a1fc(item)) {
                int needs = 0;
                int status;
                Config config;
                amount = FUN_020b00e8(storage, item, 1, &needs);
                status = 1;
                if (amount == 0) status = 0;
                else if (amount < 0) { amount = -1; status = -1; }
                else if (full && needs) { amount = 0; status = 0; }
                FUN_0200c938(&config, 24);
                config.words[0] = i;
                config.words[1] = (i >= 0 && i < *(short *)(player + 12)) ? ((*(void ***)(player + 8))[i] != 0 ? 1 : 0) : 0;
                config.words[3] = status;
                config.words[4] = status;
                config.words[2] = amount;
                FUN_overlay_12__021323b0(item, &config);
            }
        }
    } else {
        int full, count, oldcount, i;
        char *inventory, *storage;
        inventory = FUN_02086e3c() + 16;
        if (self[2] == 0) storage = FUN_02086e3c() + 40;
        else storage = FUN_02086e3c() + 28;
        full = 0;
        oldcount = *(short *)(inventory + 8);
        if (oldcount == FUN_020b0494(inventory)) full = 1;
        count = *(short *)(storage + 8);
        for (i = 0; i < count; i++) {
            void *item = FUN_020b00ac(storage, i);
            if (!FUN_0203a1fc(item)) {
                int needs = 0;
                int amount = FUN_020b00e8(inventory, item, 0, &needs);
                int status = 1;
                Config config;
                if (amount == 0) status = 0;
                else if (amount < 0) { amount = -1; status = -1; }
                else if (full && needs) { amount = 0; status = 0; }
                FUN_0200c938(&config, 24);
                config.words[3] = status;
                config.words[4] = status;
                config.words[0] = i;
                config.words[2] = amount;
                FUN_overlay_12__021323b0(item, &config);
            }
        }
    }
}
