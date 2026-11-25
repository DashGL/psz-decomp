// flags: -O4,s
extern void *FUN_020ba894(unsigned int);

int FUN_0208eefc(int **slots, int key)
{
    int i = 0;
    do {
        if (!slots[i]) {
            int *record = FUN_020ba894(12);
            if (record) {
                record[0] = 0;
                record[1] = -1;
                record[2] = -1;
            }
            slots[i] = record;
            slots[i][1] = i;
            slots[i][2] = key;
            goto found;
        }
        if (slots[i][2] == key) return -10;
        i++;
    } while (i <= 17);
    return -1;
found:
    return i;
}
