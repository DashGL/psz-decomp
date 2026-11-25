// flags: -O4,p
typedef struct Task Task;
struct Task {
    Task *prev;
    Task *next;
    void (*callback)(Task *, unsigned);
    unsigned data;
    unsigned char priority;
    unsigned char flag;
};

typedef struct Group {
    int unk00;
    void *unk04;
    int unk08;
    int unk0c;
    Task *first;
    int unk14;
    int unk18;
    int unk1c;
    Task sentinel;
    int count;
    unsigned char enabled;
    unsigned char pad[7];
} Group;

extern Group *DAT_0213e964;
extern Task *FUN_overlay_15__02135bd0(void *);
extern void FUN_overlay_15__02137460(unsigned, Task *);

void FUN_overlay_15__02137374(unsigned group) {
    Task *task;
    int i;
    if (!DAT_0213e964[group].enabled) {
        return;
    }
    task = DAT_0213e964[group].first;
    while (task != &DAT_0213e964[group].sentinel) {
        task->callback(task, task->data);
        task = task->next;
    }
    for (i = 0; i < DAT_0213e964[group].count; i++) {
        task = FUN_overlay_15__02135bd0(DAT_0213e964[group].unk04);
        if (!task) {
            return;
        }
        FUN_overlay_15__02137460(group, task);
    }
}
