// FUN_02019ab8 @ 0x02019ab8 (0x3ec, arm) - ported from FUN_0201f178 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef long long s64;

struct Node_0201f178 {
    u32 f0;
    int weight;
    u32 f8;
    void (*fc)(void *, struct Node_0201f178 *, u32);
    struct Node_0201f178 *next;
    u32 f14;
    u8 f18;
    u8 count;
    u16 entries[1];
};

struct Out_0201f178 {
    u32 flags;
    int v1[3];
    int v2[3];
    int v3[3];
    int m[9];
    int v4[3];
};

extern void FUN_0206557c(int, void *, u32);
extern void FUN_0206552c(const void *, void *, u32);
extern int FUN_0205c520(int, int);
extern void FUN_02019a48(void *, const void *, int, u32);
extern void FUN_0205c7e8(void *, void *, void *);
extern void FUN_0205c8cc(void *, void *);

int FUN_02019ab8(struct Out_0201f178 *out, struct Node_0201f178 *node, u32 idx) {
    struct Out_0201f178 tmp;
    int saved_v1[3];
    int saved_v2[3];
    if (node == 0) {
        return 0;
    }
    if (node->next == 0) {
        if (idx < node->count) {
            u16 e = node->entries[idx];
            if ((e & 0x300) == 0x100) {
                if (node->fc == 0) {
                    return 0;
                }
                node->fc(out, node, e & 0xff);
                return 1;
            }
            return 0;
        }
        return 0;
    }
    struct Node_0201f178 *cur;
    struct Node_0201f178 *last_hit;
    int total_weight = 0;
    int hits = 0;
    int iter = 0;
    cur = node;
    do {
        if (idx < cur->count && (cur->entries[idx] & 0x300) == 0x100) {
            int w = cur->weight;
            if (w > 0x1000) {
                total_weight += 0x1000;
            } else if (w > 0) {
                total_weight += w;
            }
            last_hit = cur;
            hits += 1;
        }
        cur = cur->next;
    } while (cur != 0);
    if (total_weight == 0) {
        return 0;
    }
    if (hits == 1) {
        void (*fn)(void *, struct Node_0201f178 *, u32) = last_hit->fc;
        u16 e = last_hit->entries[idx];
        if (fn == 0) {
            return 0;
        }
        fn(out, last_hit, e & 0xff);
        return 1;
    }
    FUN_0206557c(0, out, sizeof(struct Out_0201f178));
    out->flags = ~0u;
    do {
        if (idx < node->count) {
            u16 e = node->entries[idx];
            if ((e & 0x300) == 0x100 && node->weight > 0 && node->fc != 0) {
                node->fc(&tmp, node, e & 0xff);
                if (iter == 0) {
                    FUN_0206552c(&tmp.m[0], saved_v1, 12);
                    FUN_0206552c(&tmp.m[6], saved_v2, 12);
                }
                int w = (total_weight == 0x1000) ? node->weight : FUN_0205c520(node->weight, total_weight);
                FUN_02019a48(out->v1, tmp.v1, w, tmp.flags & 1);
                FUN_02019a48(out->v2, tmp.v2, w, tmp.flags & 8);
                FUN_02019a48(out->v3, tmp.v3, w, tmp.flags & 0x10);
                if ((tmp.flags & 4) == 0) {
                    out->v4[0] += (int)(((s64)w * tmp.v4[0]) >> 12);
                    out->v4[1] += (int)(((s64)w * tmp.v4[1]) >> 12);
                    out->v4[2] += (int)(((s64)w * tmp.v4[2]) >> 12);
                }
                if ((tmp.flags & 2) == 0) {
                    out->m[0] += (w * tmp.m[0]) >> 12;
                    out->m[1] += (w * tmp.m[1]) >> 12;
                    out->m[2] += (w * tmp.m[2]) >> 12;
                    out->m[3] += (w * tmp.m[3]) >> 12;
                    out->m[4] += (w * tmp.m[4]) >> 12;
                    out->m[5] += (w * tmp.m[5]) >> 12;
                } else {
                    out->m[0] += w;
                    out->m[4] += w;
                }
                out->flags &= tmp.flags;
            }
        }
        node = node->next;
        iter += 1;
    } while (node != 0);
    FUN_0205c7e8(&out->m[0], &out->m[3], &out->m[6]);
    if (out->m[0] == 0 && out->m[1] == 0 && out->m[2] == 0) {
        FUN_0206552c(saved_v1, &out->m[0], 12);
    } else {
        FUN_0205c8cc(&out->m[0], &out->m[0]);
    }
    if (out->m[6] == 0 && out->m[7] == 0 && out->m[8] == 0) {
        FUN_0206552c(saved_v2, &out->m[6], 12);
    } else {
        FUN_0205c8cc(&out->m[6], &out->m[6]);
    }
    FUN_0205c7e8(&out->m[6], &out->m[0], &out->m[3]);
    return 1;
}
