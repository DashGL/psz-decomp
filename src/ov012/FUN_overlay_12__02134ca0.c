// flags: -O4,s
extern int FUN_overlay_12__02134214(void), FUN_overlay_12__021341fc(void), FUN_overlay_12__0213220c(void), FUN_overlay_12__021344e4(void);
extern int *FUN_overlay_12__021344bc(int);
extern void *FUN_02086e3c(void);
extern int *FUN_020870c4(void *);
extern int FUN_02084900(void *), FUN_02084944(void *), FUN_overlay_12__0213221c(void *);
#pragma thumb off
extern long long FUN_0200a3a0(int, int);
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern void FUN_overlay_12__021323b0(void *, void *);
typedef struct { unsigned char b[4]; } Item;

int FUN_overlay_12__02134ca0(void)
{
    int alt, currency, money, count, i, limit, afford;
    int enabled, selected;
    Item item;
    int cfg[6];
    int *row;
    if (FUN_overlay_12__02134214() == 2) {
        alt = FUN_overlay_12__021341fc() == 4;
        currency = FUN_overlay_12__0213220c();
        money = FUN_020870c4(FUN_02086e3c())[13];
        count = FUN_overlay_12__021344e4();
        i = 0;
        if (count > 0) {
            for (; i < count; i++) {
                row = FUN_overlay_12__021344bc(i);
                item = *(Item *)row;
                limit = 1;
                if (FUN_02084900(&item)) {
                    limit = FUN_02084944(&item);
                    limit -= FUN_overlay_12__0213221c(&item);
                    if (alt) afford = (int)FUN_0200a3a0(currency, row[4]);
                    else afford = (int)FUN_0200a3a0(money, row[4]);
                    if (afford <= limit) limit = afford;
                }
                enabled = 1;
                selected = 1;
                if (limit <= 0) { selected = 0; enabled = 0; }
                FUN_0200c938(cfg, 24);
                cfg[0] = i;
                cfg[3] = selected;
                cfg[2] = limit;
                cfg[4] = enabled;
                cfg[5] = row[4];
                FUN_overlay_12__021323b0(row, cfg);
            }
        }
        return 1;
    }
    return 0;
}
