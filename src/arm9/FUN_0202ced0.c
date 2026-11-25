// flags: -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
extern void FUN_020656b8(void *, int, u32), FUN_02065774(const void *, void *, u32), FUN_0202ccd8(u16 *, const u16 *, u32, int), FUN_0202cab0(u16 *, const u16 *, const u16 *, int);
extern void *FUN_020014f4(void *, const void *, u32);
extern int FUN_0202c918(const u16 *, int), FUN_0202cbc0(const u16 *, const u16 *, int);
extern u64 FUN_0202ce84(const u16 *), FUN_0202ce90(const u16 *), FUN_0202cea0(const u16 *), FUN_0202ceb4(const u16 *);
void FUN_0202ced0(u16 *quotient, const u16 *numerator, const u16 *denominator, u16 *remainder, int count, u16 *workspace) {
    int index, denominatorLength, numeratorLength;
    u32 digit;
    u16 *q = workspace + count, *r = q + count;
    u64 divisor;
    FUN_020656b8(q, 0, (u32)count * 4);
    numeratorLength = FUN_0202c918(numerator, count);
    denominatorLength = FUN_0202c918(denominator, count);
    if (numeratorLength > 0 && denominatorLength > 0) {
        index = count - numeratorLength + denominatorLength - 1;
        if (index >= count) {
            FUN_02065774(numerator, r, (u32)count * 2);
        } else {
            FUN_02065774(numerator, q + index, (u32)numeratorLength * 2);
            if (denominatorLength > 2) divisor = FUN_0202cea0(denominator + denominatorLength - 1);
            else if (denominatorLength > 1) divisor = FUN_0202ce90(denominator + denominatorLength - 1);
            else divisor = FUN_0202ce84(denominator + denominatorLength - 1);
            for (; index < count; index++) {
                FUN_020014f4(q + 1, q, (u32)(2 * count - 1) * 2);
                digit = (u32)(FUN_0202ceb4(r + denominatorLength) / divisor);
                if (digit > 65535) digit = 65535;
                for (;;) {
                    FUN_0202ccd8(workspace, denominator, (u16)digit, count);
                    if (FUN_0202cbc0(r, workspace, count) >= 0) break;
                    digit--;
                }
                FUN_0202cab0(r, r, workspace, count);
                *q = (u16)digit;
            }
        }
    }
    if (quotient) FUN_02065774(q, quotient, (u32)count * 2);
    if (remainder) FUN_02065774(r, remainder, (u32)count * 2);
}
