// flags: -O4,p -noThumb
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    unsigned short numObjects;
    unsigned short offset;
} NNSFndList;
extern void FUN_020119b8(NNSFndList *, void *);
extern void FUN_02011a0c(NNSFndList *, void *);
#define OBJ_TO_LINK(list, obj) ((NNSFndLink *)(((unsigned int)(obj)) + (list)->offset))
void FUN_02011a5c(NNSFndList *list, void *target, void *object) {
    if (target == 0) {
        FUN_020119b8(list, object);
    } else if (target == list->headObject) {
        FUN_02011a0c(list, object);
    } else {
        NNSFndLink *link = OBJ_TO_LINK(list, object);
        void *prevObj = OBJ_TO_LINK(list, target)->prevObject;
        NNSFndLink *prevLnk = OBJ_TO_LINK(list, prevObj);
        link->prevObject = prevObj;
        link->nextObject = target;
        prevLnk->nextObject = object;
        OBJ_TO_LINK(list, target)->prevObject = object;
        list->numObjects++;
    }
}
