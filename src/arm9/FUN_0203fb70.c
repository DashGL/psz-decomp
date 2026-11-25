// flags: -O4,s
extern void *DAT_02108c84;
extern unsigned int FUN_020bc508(void *, int);
extern char *FUN_020ba440(unsigned int);
extern void *FUN_020ba8a0(unsigned int);
extern unsigned int FUN_02037adc(void *, unsigned int, int);
extern unsigned int FUN_02037bd0(void *, unsigned int);
extern unsigned int FUN_02037c88(void *, unsigned int, int, int);
extern void FUN_02033f30(void *, unsigned int, unsigned int);
#pragma thumb off
extern void *FUN_0200c2dc(unsigned int, unsigned int, unsigned int, void (*)(void *), unsigned int);
#pragma thumb reset
extern void FUN_02045e90(void *, unsigned int *, int);
extern void FUN_0203fd88(void *);
extern void FUN_020456bc(void *, int);
extern void FUN_0203fda4(void *);
void FUN_0203fb70(void *unused, char *s) {
    char *header = FUN_020ba440(FUN_020bc508(*(void **)s, 0));
    void *manager;
    int group, i, j;
    *(char **)(s + 8) = header;
    manager = DAT_02108c84;
    for (group = 0; group < 7; group++) {
        char *table = *(char **)(header + 4) + 8 * group;
        char *records = *(char **)table;
        int count = *(int *)(table + 4);
        *(void **)(s + 20 + 4 * group) = FUN_020ba8a0((unsigned int)count << 2);
        for (i = 0; i < count; i++) {
            char *entry = *(char **)(s + 20 + 4 * group) + 4 * i;
            unsigned int resource;
            *(unsigned short *)entry = 65535;
            *(unsigned short *)(entry + 2) = 0;
            resource = FUN_020bc508(*(void **)s, *(signed char *)records);
            if (group == 0) *(unsigned short *)entry = FUN_02037adc(manager, resource, 0);
            else if (group == 1) *(unsigned short *)entry = FUN_02037bd0(manager, resource);
            else if (group == 2) *(unsigned short *)entry = FUN_02037c88(manager, resource, 0, 0);
            else if (group == 3) *(unsigned short *)entry = FUN_02037c88(manager, resource, 1, 0);
            else if (group == 4) *(unsigned short *)entry = FUN_02037c88(manager, resource, 2, 0);
            else if (group == 5) *(unsigned short *)entry = FUN_02037c88(manager, resource, 3, 0);
            else if (group == 6) *(unsigned short *)entry = FUN_02037c88(manager, resource, 4, 0);
            records += 4;
        }
    }
    {
        char *records, *pairs;
        int count;
        pairs = *(char **)(s + 20);
        records = **(char ***)(header + 4);
        count = *(int *)(*(char **)(header + 4) + 4);
        for (i = 0; i < count; i++, records += 4, pairs += 4) {
            int index = *(signed char *)(records + 1);
            if (index >= 0) {
                FUN_02033f30(manager, *(unsigned short *)pairs, *(unsigned short *)(*(char **)(s + 24) + 4 * index));
            }
        }
    }
    *(void **)(s + 48) = FUN_0200c2dc(*(unsigned int *)(header + 36), 20, 0, FUN_0203fda4, 0);
    for (i = 0; i < *(int *)(header + 36); i++) {
        char *spec = *(char **)(header + 32) + 8 * i;
        char *entry = *(char **)(s + 48) + 20 * i;
        void *archive;
        unsigned int entries[7];
        unsigned short descriptor[8];
        *(int *)(entry + 16) = 0;
        archive = *(void **)s;
        for (j = 0; j < 7; j++) entries[j] = 0;
        entries[0] = FUN_020bc508(archive, *(signed char *)(spec + 0));
        entries[1] = FUN_020bc508(archive, *(signed char *)(spec + 1));
        entries[2] = FUN_020bc508(archive, *(signed char *)(spec + 2));
        entries[3] = FUN_020bc508(archive, *(signed char *)(spec + 3));
        entries[4] = FUN_020bc508(archive, *(signed char *)(spec + 4));
        entries[5] = FUN_020bc508(archive, *(signed char *)(spec + 5));
        entries[6] = FUN_020bc508(archive, *(signed char *)(spec + 6));
        entry = *(char **)(s + 48) + 20 * i;
        FUN_02045e90(entry, entries, 0);
        if (*(signed char *)(spec + 7) >= 14 && *(signed char *)(spec + 7) < 149) {
            unsigned short d1;
            FUN_0203fd88(descriptor);
            FUN_020456bc(descriptor, *(signed char *)(spec + 7));
            d1 = descriptor[1];
            *(unsigned short *)(entry + 2) = d1;
            FUN_02033f30(manager, *(unsigned short *)entry, d1);
            *(int *)(*(char **)(s + 48) + 20 * i + 16) = 1;
        }
    }
}
