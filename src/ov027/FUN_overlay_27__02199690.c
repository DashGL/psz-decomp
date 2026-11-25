// flags: -O4,s
extern int FUN_0207f770(void *);
extern void FUN_02043f74(void *, int, int);

void FUN_overlay_27__02199690(unsigned char *self)
{
    int value, sum;
    if (FUN_0207f770(self + 100) == 1) return;
    switch (*(unsigned int *)(self + 212)) {
    case 0:
        *(unsigned short *)(self + 216) += 455;
        if (*(unsigned short *)(self + 216) >= 5461) {
            *(unsigned short *)(self + 216) = 5461;
            *(int *)(self + 212) = 1;
        }
        break;
    case 1:
        if (*(int *)(self + 220)) *(int *)(self + 212) = 2;
        break;
    case 2:
        value = *(unsigned short *)(self + 218);
        sum = value + *(unsigned short *)(self + 216);
        if (value <= 65536 && sum >= 65536) *(int *)(self + 212) = 3;
        break;
    case 3:
        value = *(unsigned short *)(self + 216) - 231;
        if (value < 231) value = 231;
        *(unsigned short *)(self + 216) = value;
        value = *(unsigned short *)(self + 218);
        sum = value + *(unsigned short *)(self + 216);
        if (value <= 65536 && sum >= 65536) {
            *(unsigned short *)(self + 216) = 0;
            *(unsigned short *)(self + 218) = 0;
            *(int *)(self + 212) = -1;
        }
        break;
    }
    *(unsigned short *)(self + 218) += *(unsigned short *)(self + 216);
    FUN_02043f74(self, 0, *(unsigned short *)(self + 218));
}
