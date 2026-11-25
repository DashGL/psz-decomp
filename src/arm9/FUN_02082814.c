// flags: -O4,s
typedef struct {
    unsigned int value[12];
} Table;

extern Table DAT_020f2e70;
extern unsigned int FUN_020832b4(unsigned int);

int FUN_02082814(void *unused, int level)
{
    Table table = DAT_020f2e70;
    unsigned int *row, total, value;
    int index, i;

    if (level <= 3) index = 0;
    else if (level <= 6) index = 1;
    else index = 2;
    row = table.value + 4 * index;
    value = FUN_020832b4(100);
    total = 0;
    for (i = 0; i < 4; i++) {
        total += row[i];
        if (value < total) return i;
    }
    return 0;
}
