// flags: -O4,p -noThumb
typedef unsigned int u32;

struct OSThreadQueue {
    void *head;
    void *tail;
};

struct OSThreadLink {
    void *prev;
    void *next;
};

struct OSThread {
    u32 context[0x19];          // 0x00..0x63
    int state;                  // 0x64
    struct OSThread *next;      // 0x68
    u32 id;                     // 0x6c
    u32 priority;               // 0x70
    void *profiler;             // 0x74
    struct OSThreadQueue *queue;// 0x78
    struct OSThreadLink link;   // 0x7c, 0x80
    void *mutex;                // 0x84
    struct OSThreadQueue mutexQueue; // 0x88, 0x8c
    u32 stackBottom;            // 0x90
    u32 stackTop;               // 0x94
    u32 stackWarningOffset;     // 0x98
    struct OSThreadQueue joinQueue; // 0x9c, 0xa0
    void *specific[3];          // 0xa4..0xaf
    void *alarmForSleep;        // 0xb0
};

extern int FUN_020683d4(void);
extern u32 FUN_020662e8(void);
extern void FUN_02066430(struct OSThread *);
extern void FUN_02066dd8(u32 *, u32, u32);
extern void FUN_02065510(u32, void *, u32);
extern void FUN_02066dd0(struct OSThread *, void *);
extern void FUN_020683e8(int);
extern void FUN_020667f4(void);

static inline void InitQueue(struct OSThreadQueue *q) {
    q->head = q->tail = 0;
}

void FUN_020666f8(struct OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio) {
    int enabled = FUN_020683d4();
    int index = FUN_020662e8();
    thread->priority = prio;
    thread->id = (u32)index;
    thread->state = 0;
    thread->profiler = 0;
    FUN_02066430(thread);
    thread->stackTop = (u32)stack;
    thread->stackBottom = (u32)stack - stackSize;
    thread->stackWarningOffset = 0;
    *(u32 *)(thread->stackTop - 4) = 0xfddb597dU;
    *(u32 *)(thread->stackBottom) = 0x7bf9dd5bU;
    InitQueue(&thread->joinQueue);
    FUN_02066dd8(thread->context, (u32)func, (u32)stack - 4);
    thread->context[1] = (u32)arg;
    thread->context[15] = (u32)FUN_020667f4;
    FUN_02065510(0, (void *)((u32)stack - stackSize + 4), stackSize - 8);
    thread->mutex = 0;
    thread->mutexQueue.head = 0;
    thread->mutexQueue.tail = 0;
    FUN_02066dd0(thread, 0);
    thread->queue = 0;
    thread->link.next = 0;
    thread->link.prev = 0;
    FUN_02065510(0, &thread->specific[0], sizeof(void *) * 3);
    thread->alarmForSleep = 0;
    FUN_020683e8(enabled);
}
