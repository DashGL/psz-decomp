// flags: -O4,p
typedef struct {
    void *fn;
    void *param;
} Cb;

typedef struct Op {
    int f00;
    void *param;
    void *cb;
    struct Op *next;
    int type;
} Op;

typedef struct {
    int pad00[4];
    int profile_id;
    int pad14[12];
    Op *ops;
} Peer;

typedef struct {
    int pad00[14];
    void *f38;
} ProfileSub;

typedef struct {
    int pad00[3];
    ProfileSub *f0c;
} Profile;

typedef struct {
    int profile_id;
    char **keys;
    char **values;
    int num;
} KeysArg;

extern const char DAT_020fd244[];
extern const char DAT_020fd240[];
extern const char DAT_020fd258[];
extern const char DAT_020fd260[];

extern int FUN_020cf7a8(void *, int, Profile **);
extern void FUN_020d1b74(void *, const char *);
extern void *FUN_020c7bcc(int);
extern void FUN_020cb81c(void *, Cb, KeysArg *, int, int);
extern void FUN_020cf4f4(Peer *, Op *);
extern void FUN_020d1a30(void *, const char *, int *, char *, char *);
extern void FUN_020d1b58(void *, int, const char *);
extern void FUN_020cb778(void *, int, int);
extern void FUN_020c7990(const char *, char *, int, int *, int);
extern char *FUN_020c77cc(const char *);
extern int FUN_020ce1f4(void *, void *, char *, int *);
extern void FUN_020ce138(void *, void *, char *, char *);
extern void FUN_020ce18c(void *, void *, char *, char *);

#pragma thumb off
extern int FUN_02003e24(const char *, const char *);
extern int FUN_02005898(const char *);
extern int FUN_02003c70(const char *);
#pragma thumb reset

int FUN_020caaf4(void *conn, Peer *peer, const char *msg)
{
    char key[512];
    char value[512];
    char decodedKey[512];
    char decodedValue[512];
    Profile *profile;
    Op *op;

    if (!FUN_020cf7a8(conn, peer->profile_id, &profile)) {
        FUN_020d1b74(conn, DAT_020fd244);
        return 2;
    }

    if (FUN_02003e24(msg, DAT_020fd240) == 0) {
        op = peer->ops;
        while (op != 0) {
            if (op->type == 0x68) {
                break;
            }
            op = op->next;
        }
        if (op == 0) {
            return 0;
        }
        if (op->type == 0x68 && op->cb != 0) {
            Cb cb;
            KeysArg *arg = (KeysArg *)FUN_020c7bcc(sizeof(KeysArg));
            cb.fn = op->cb;
            cb.param = op->param;
            arg->keys = 0;
            arg->num = 0;
            arg->values = 0;
            arg->profile_id = peer->profile_id;
            FUN_020cb81c(conn, cb, arg, 0, 0);
            FUN_020cf4f4(peer, op);
        }
    } else {
        int len = 0;
        int index = 0;
        int exists = 0;
        int num;

        FUN_020d1a30(conn, msg, &index, key, value);
        if (FUN_02003e24(key, DAT_020fd258) != 0) {
            FUN_020d1b58(conn, 1, DAT_020fd260);
            FUN_020cb778(conn, 3, 0);
            return 3;
        }

        num = FUN_02005898(value);
        if (num == 0) {
            op = peer->ops;
            while (op != 0) {
                if (op->type == 0x68) {
                    break;
                }
                op = op->next;
            }
            if (op == 0) {
                return 0;
            }
            if (op->type == 0x68 && op->cb != 0) {
                Cb cb;
                KeysArg *arg = (KeysArg *)FUN_020c7bcc(sizeof(KeysArg));
                cb.fn = op->cb;
                cb.param = op->param;
                arg->keys = 0;
                arg->num = 0;
                arg->values = 0;
                arg->profile_id = peer->profile_id;
                FUN_020cb81c(conn, cb, arg, 0, 0);
                FUN_020cf4f4(peer, op);
            }
        } else {
            int i;
            char **keys = (char **)FUN_020c7bcc(num * 4);
            char **values = (char **)FUN_020c7bcc(num * 4);

            for (i = 0; i < num; i++) {
                FUN_020d1a30(conn, msg, &index, key, value);
                FUN_020c7990(key, decodedKey, FUN_02003c70(key), &len, 2);
                decodedKey[len] = 0;
                FUN_020c7990(value, decodedValue, FUN_02003c70(value), &len, 2);
                decodedValue[len] = 0;
                keys[i] = FUN_020c77cc(decodedKey);
                values[i] = FUN_020c77cc(decodedValue);
                if (FUN_020ce1f4(conn, profile->f0c->f38, decodedKey, &exists) == 0 && exists == 0) {
                    FUN_020ce138(conn, profile->f0c->f38, decodedKey, decodedValue);
                } else {
                    FUN_020ce18c(conn, profile->f0c->f38, decodedKey, decodedValue);
                }
            }

            op = peer->ops;
            while (op != 0) {
                if (op->type == 0x68) {
                    break;
                }
                op = op->next;
            }
            if (op == 0) {
                return 0;
            }
            if (op->type == 0x68 && op->cb != 0) {
                Cb cb;
                KeysArg *arg = (KeysArg *)FUN_020c7bcc(sizeof(KeysArg));
                cb.fn = op->cb;
                cb.param = op->param;
                arg->num = num;
                arg->keys = keys;
                arg->values = values;
                arg->profile_id = peer->profile_id;
                FUN_020cb81c(conn, cb, arg, 0, 0xe);
                FUN_020cf4f4(peer, op);
            }
        }
    }

    return 0;
}
