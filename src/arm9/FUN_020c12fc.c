// flags: -O4,s
extern void FUN_020c4434(void *), FUN_020c062c(void *);
void *FUN_020c12fc(char *self) {
    char *record, *end;
    *(unsigned short *)(self + 4) = 0;
    *(unsigned short *)(self + 22) = 0;
    record = self + 0x358;
    end = self + 0x1058;
    do {
        *(unsigned short *)(record + 16) = 0;
        *(unsigned short *)(record + 34) = 0;
        FUN_020c4434(record + 36);
        FUN_020c062c(record);
        record += 52;
    } while (record < end);
    return self;
}
