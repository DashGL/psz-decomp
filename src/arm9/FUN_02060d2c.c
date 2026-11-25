// flags: -O4,p -noThumb
extern unsigned int FUN_020596a4(void *, unsigned int);
extern void FUN_02059cd4(void *);
extern int FUN_02059efc(void *, unsigned int, unsigned int, unsigned int, int);
extern int FUN_0205a150(void *, unsigned int, int);
extern void FUN_02059ffc(void *);
typedef struct {
    unsigned int offset;
    int size;
    unsigned int dst;
    unsigned int state;
} Rec;
typedef struct {
    unsigned int pad[4];
    unsigned int field10;
    unsigned int field14;
    unsigned int field18;
} Owner;
typedef struct {
    unsigned int pad[4];
    Rec *rec;
    Owner *owner;
} Req;
void FUN_02060d2c(Req *req) {
    unsigned int file[18];
    Owner *owner = req->owner;
    Rec *rec = req->rec;
    unsigned int arc = FUN_020596a4(&owner->field10, owner->field14);
    if (!arc) {
        arc = owner->field18;
    }
    FUN_02059cd4(file);
    if (FUN_02059efc(file, arc, rec->offset, rec->offset + rec->size, -1)) {
        if (FUN_0205a150(file, rec->dst, rec->size) == rec->size) {
            rec->state = 2;
        }
        FUN_02059ffc(file);
    }
    if (rec->state != 2) {
        rec->offset = 0;
        rec->state = 2;
    }
}
