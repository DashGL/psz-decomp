// flags: -O4,p -noThumb -interworking
struct Decimal {
    signed char sign;
    short exponent;
    unsigned char length;
    unsigned char digits[32];
};
extern void FUN_0200716c(struct Decimal *, const char *, short);
extern void FUN_02006fe8(struct Decimal *, const struct Decimal *, const struct Decimal *);
extern const char DAT_020f64cc[];
extern const char DAT_020f64fc[];
extern const char DAT_020f6524[];
extern const char DAT_020f653c[];
extern const char DAT_020f654c[];
extern const char DAT_020f6554[];
extern const char DAT_020f655c[];
extern const char DAT_020f6564[];
extern const char DAT_020f656c[];
extern const char DAT_020f6570[];
extern const char DAT_020f6574[];
extern const char DAT_020f6578[];
extern const char DAT_020f657c[];
extern const char DAT_020f6580[];
extern const char DAT_020f6584[];
extern const char DAT_020f6588[];
extern const char DAT_020f658c[];
extern const char DAT_020f6590[];
extern const char DAT_020f6594[];
extern const char DAT_020f6598[];
extern const char DAT_020f659c[];

void FUN_02007208(struct Decimal *out, int power)
{
    struct Decimal factor, product;
    switch (power) {
    case -64: FUN_0200716c(out, DAT_020f64cc, -20); return;
    case -53: FUN_0200716c(out, DAT_020f64fc, -16); return;
    case -32: FUN_0200716c(out, DAT_020f6524, -10); return;
    case -16: FUN_0200716c(out, DAT_020f653c, -5); return;
    case -8: FUN_0200716c(out, DAT_020f654c, -3); return;
    case -7: FUN_0200716c(out, DAT_020f6554, -3); return;
    case -6: FUN_0200716c(out, DAT_020f655c, -2); return;
    case -5: FUN_0200716c(out, DAT_020f6564, -2); return;
    case -4: FUN_0200716c(out, DAT_020f656c, -2); return;
    case -3: FUN_0200716c(out, DAT_020f6570, -1); return;
    case -2: FUN_0200716c(out, DAT_020f6574, -1); return;
    case -1: FUN_0200716c(out, DAT_020f6578, -1); return;
    case 0: FUN_0200716c(out, DAT_020f657c, 0); return;
    case 1: FUN_0200716c(out, DAT_020f6580, 0); return;
    case 2: FUN_0200716c(out, DAT_020f6584, 0); return;
    case 3: FUN_0200716c(out, DAT_020f6588, 0); return;
    case 4: FUN_0200716c(out, DAT_020f658c, 1); return;
    case 5: FUN_0200716c(out, DAT_020f6590, 1); return;
    case 6: FUN_0200716c(out, DAT_020f6594, 1); return;
    case 7: FUN_0200716c(out, DAT_020f6598, 2); return;
    case 8: FUN_0200716c(out, DAT_020f659c, 2); return;
    default: break;
    }
    FUN_02007208(&factor, (power + (int)((unsigned int)(power & 0x80000000u) >> 31)) >> 1);
    FUN_02006fe8(out, &factor, &factor);
    if (!(power & 1)) return;
    product = *out;
    if (power > 0) FUN_0200716c(&factor, DAT_020f6580, 0);
    else FUN_0200716c(&factor, DAT_020f6578, -1);
    FUN_02006fe8(out, &product, &factor);
}
