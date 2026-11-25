// flags: -O4,s
typedef struct Record { unsigned int a, b, c; } Record;
typedef struct Text10 { unsigned short v[10]; } Text10;
typedef struct Extra8 { unsigned short v[8]; } Extra8;
typedef struct Metadata {
    signed char a, b, c, d;
    unsigned short e, f;
    unsigned long long pair;
    Text10 text;
    Extra8 extra;
} Metadata;
extern Record DAT_0211b444[];
extern Metadata DAT_0211b744[];
extern int FUN_020dd6c4(const Record *);
#pragma thumb off
extern void FUN_020656b8(void *, unsigned int, unsigned int);
#pragma thumb on
extern void FUN_020c062c(Metadata *);

#pragma opt_propagation off
void FUN_020c07a4(void) {
    Record *dst = DAT_0211b444, *end = dst + 64, *src;
    Metadata *out = DAT_0211b744, *in;
    while (dst < end) {
        if (FUN_020dd6c4(dst) != 1) {
            src = dst + 1;
            in = out + 1;
            while (src < end) {
                if (FUN_020dd6c4(src) == 1) {
                    *dst = *src;
                    out->a = in->a;
                    out->b = in->b;
                    out->c = in->c;
                    out->d = in->d;
                    out->e = in->e;
                    out->f = in->f;
                    out->pair = in->pair;
                    out->text = in->text;
                    out->extra = in->extra;
                    FUN_020656b8(src, 0, 12);
                    FUN_020c062c(in);
                    break;
                }
                src++;
                in++;
            }
            if (src >= end) break;
        }
        dst++;
        out++;
    }
}
