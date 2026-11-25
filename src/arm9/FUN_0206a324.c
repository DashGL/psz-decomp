// FUN_0206a324 @ 0x0206a324 (0xcc, arm) - ported from FUN_0203154c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void FUN_02069964(void);
extern void FUN_02069978(void);
extern void FUN_020673f0(void *, u32);

struct Link {
    void *owner;
    struct Link *next;
};
struct Obj {
    u8 pad[0x18];
    struct Link links[1];
};

void FUN_0206a324(struct Obj *obj, int idx, struct Obj *target) {
    FUN_02069964();
    struct Obj *old = (struct Obj *)obj->links[idx].owner;
    if (old != 0) {
        if (target == old) {
            FUN_02069978();
            return;
        }
        struct Link *target_link = &obj->links[idx];
        struct Link *cur = (struct Link *)old->links[0].owner;
        if (target_link == cur) {
            old->links[0].owner = obj->links[idx].next;
            FUN_020673f0(obj->links[idx].owner, 0x3c);
        } else {
            while (cur != 0) {
                if (target_link == cur->next) {
                    break;
                }
                cur = cur->next;
            }
            cur->next = obj->links[idx].next;
            FUN_020673f0(cur, 8);
        }
    }
    struct Link *my_link = &obj->links[idx];
    struct Link *prev_head = (struct Link *)target->links[0].owner;
    target->links[0].owner = my_link;
    obj->links[idx].next = prev_head;
    obj->links[idx].owner = target;
    FUN_02069978();
    FUN_020673f0(obj, 0x3c);
    FUN_020673f0(target, 0x3c);
}
