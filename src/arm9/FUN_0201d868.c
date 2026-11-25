// flags: -O4,s -noThumb
extern unsigned int FUN_0201d8dc(unsigned int, unsigned int);
unsigned int FUN_0201d868(unsigned int self, unsigned int index, unsigned int time) {
    unsigned int p = FUN_0201d8dc(self, index), n, table, count;
    int rate = *(short *)(p + 4);
    table = self + *(unsigned short *)(p + 6);
    n = ((unsigned int)rate * time) >> 12;
    while (n && *(unsigned short *)(table + 4 * n) >= time) --n;
    count = *(unsigned short *)p;
    while (n + 1 < count && *(unsigned short *)(table + 4 * n + 4) <= time) ++n;
    return table + 4 * n;
}
