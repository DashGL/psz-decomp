// flags: -O4,s
typedef struct { unsigned char bytes[4]; } Tag;
typedef struct { unsigned words[3]; } Tail;
extern int FUN_overlay_12__021287a8(void *, const void *, int);
extern void FUN_overlay_12__02128600(void *);
extern char *DAT_0213f198;
int FUN_overlay_12__021288b4(const char *record, int value, int blocked) {
    if (blocked) return 0;
    if (DAT_0213f198) {
        if (FUN_overlay_12__021287a8(DAT_0213f198, record, value)) {
            FUN_overlay_12__02128600(DAT_0213f198);
            *(int *)(DAT_0213f198 + 16) = 0;
            return 1;
        }
        {
            char *g = DAT_0213f198;
            *(Tag *)(g + 32) = *(const Tag *)record;
            *(Tail *)(g + 36) = *(const Tail *)(record + 4);
        }
        *(int *)(DAT_0213f198 + 16) = 1;
    }
    return 0;
}
