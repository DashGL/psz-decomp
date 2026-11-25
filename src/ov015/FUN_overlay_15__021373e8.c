// flags: -O4,p
typedef struct Task Task;
typedef void (*Callback)(Task *, unsigned);
struct Task { Task *prev, *next; Callback callback; unsigned data; unsigned char priority, flag; };
typedef struct { void *pool; int pad[3]; Task *head; char pad2[0x2c]; } Group;
extern Group *DAT_0213e964;
extern Task *FUN_overlay_15__02135bd0(void *);
extern void FUN_overlay_15__02136d48(Task *, Task *);
#pragma thumb off
extern unsigned FUN_02065e30(unsigned);
extern void FUN_02065e00(unsigned);
#pragma thumb on
Task *FUN_overlay_15__021373e8(unsigned group, Callback callback, unsigned data, unsigned priority, unsigned char flag) {
    Task *task = FUN_overlay_15__02135bd0(DAT_0213e964[group].pool);
    Task *cursor;
    unsigned mask;
    task->callback = callback;
    task->data = data;
    task->priority = (unsigned char)priority;
    task->flag = flag;
    mask = FUN_02065e30(1);
    cursor = DAT_0213e964[group].head;
    for (;;) {
        if (priority < cursor->priority) {
            FUN_overlay_15__02136d48(cursor, task);
            break;
        }
        cursor = cursor->next;
    }
    FUN_02065e00(mask);
    return task;
}
