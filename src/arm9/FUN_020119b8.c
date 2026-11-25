// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets; argument/return contract corrected.
// flags: -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
extern void FUN_0201198c(void *, void *);

typedef struct {
    u32 head;
    u32 tail;
    u16 count;
    u16 off;
} List;

void FUN_020119b8(List *list, u32 node)
{
    if (list->head == 0) {
        FUN_0201198c(list, (void *)node);
        return;
    }
    u16 off = list->off;
    *(u32 *)((char *)node + off) = list->tail;
    *(u32 *)((char *)node + off + 4) = 0;
    *(u32 *)((char *)list->tail + list->off + 4) = node;
    *(volatile u32 *)((char *)list + 4) = node;
    *(volatile u16 *)((char *)list + 8) = *(volatile u16 *)((char *)list + 8) + 1;
}
