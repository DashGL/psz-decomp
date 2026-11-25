// flags: -O4,p -noThumb
typedef struct {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[33];
    } sig;
} decimal;

extern const unsigned short DAT_020eba58[];
extern const unsigned char DAT_020eb9d8[];
extern const float DAT_020f621c;
extern const double DAT_020f6224;
extern double FUN_02000e44(const char *);
extern double FUN_02007c18(const decimal *);

static inline int isspace_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x100);
}
static inline int isdigit_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x008);
}
static inline int isalpha_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x001);
}
static inline int isxdigit_msl(int c) {
    return (c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x400);
}
static inline int toupper_msl(int c) {
    return (c < 0 || c >= 128) ? c : DAT_020eb9d8[c];
}

enum {
    start               = 0x0001,
    sig_start           = 0x0002,
    leading_sig_zeroes  = 0x0004,
    int_digit_loop      = 0x0008,
    frac_start          = 0x0010,
    frac_digit_loop     = 0x0020,
    sig_end             = 0x0040,
    exp_start           = 0x0080,
    leading_exp_digit   = 0x0100,
    leading_exp_zeroes  = 0x0200,
    exp_digit_loop      = 0x0400,
    finished            = 0x0800,
    failure             = 0x1000,
    nan_state           = 0x2000,
    infin_state         = 0x4000,
    hex_state           = 0x8000
};

enum {
    hex_start               = 0x0001,
    hex_leading_sig_zeroes  = 0x0002,
    hex_int_digit_loop      = 0x0004,
    hex_frac_digit_loop     = 0x0008,
    hex_sig_end             = 0x0010,
    hex_exp_start           = 0x0020,
    hex_leading_exp_digit   = 0x0040,
    hex_leading_exp_zeroes  = 0x0080,
    hex_exp_digit_loop      = 0x0100
};

#define final_state (leading_sig_zeroes | int_digit_loop | frac_digit_loop | leading_exp_zeroes | exp_digit_loop | finished)
#define hex_final_state (hex_leading_sig_zeroes | hex_int_digit_loop | hex_frac_digit_loop | hex_leading_exp_zeroes | hex_exp_digit_loop)

#define fetch() (count++, (*ReadProc)(ReadProcArg, 0, 0))
#define unfetch(c) (*ReadProc)(ReadProcArg, c, 1)

double FUN_02004014(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *overflow) {
    int scan_state = start;
    int hex_scan_state = 0;
    int count = 0;
    int spaces = 0;
    int c;
    decimal d = {0, 0, 0, {0, ""}};
    int sig_negative = 0;
    int exp_negative = 0;
    long exp_value = 0;
    int exp_adjust = 0;
    double result;
    int sign_detected = 0;
    int NibbleIndex;
    unsigned char *chptr;
    unsigned char mantissa[8];
    unsigned int hex_exp_value = 0;
    int hex_exp_negative = 0;
    unsigned int intdigits = 0;
    unsigned int max_digits;

    *overflow = 0;
    c = fetch();

    while (count <= max_width && c != -1 && !(scan_state & (finished | failure))) {
        switch (scan_state) {
        case start:
            if (isspace_msl(c)) {
                c = (*ReadProc)(ReadProcArg, 0, 0);
                spaces++;
                break;
            }
            switch (toupper_msl(c)) {
            case '-':
                sig_negative = 1;
            case '+':
                c = fetch();
                sign_detected = 1;
                break;
            case 'I':
                c = fetch();
                scan_state = infin_state;
                break;
            case 'N':
                c = fetch();
                scan_state = nan_state;
                break;
            default:
                scan_state = sig_start;
                break;
            }
            break;

        case infin_state:
        {
            int i = 1;
            char s[] = "INFINITY";
            while (i < 8 && toupper_msl(c) == s[i]) {
                i++;
                c = fetch();
            }
            if (i == 3 || i == 8) {
                if (sig_negative) {
                    result = -DAT_020f621c;
                } else {
                    result = DAT_020f621c;
                }
                *chars_scanned = spaces + i + sign_detected;
                return result;
            }
            scan_state = failure;
            break;
        }

        case nan_state:
        {
            int i = 1, j = 0;
            char s[] = "NAN(";
            char nan_arg[32] = "";
            while (i < 4 && toupper_msl(c) == s[i]) {
                i++;
                c = fetch();
            }
            if (i == 3 || i == 4) {
                if (i == 4) {
                    while (j < 32 && (isdigit_msl(c) || isalpha_msl(c) || c == '.')) {
                        nan_arg[j++] = c;
                        c = fetch();
                    }
                    if (c != ')') {
                        scan_state = failure;
                        break;
                    }
                    j++;
                }
                nan_arg[j] = '\0';
                if (sig_negative) {
                    result = -FUN_02000e44(nan_arg);
                } else {
                    result = FUN_02000e44(nan_arg);
                }
                *chars_scanned = spaces + i + j + sign_detected;
                return result;
            }
            scan_state = failure;
            break;
        }

        case sig_start:
            if (c == '.') {
                scan_state = frac_start;
                c = fetch();
                break;
            }
            if (!isdigit_msl(c)) {
                scan_state = failure;
                break;
            }
            if (c == '0') {
                c = fetch();
                if (toupper_msl(c) == 'X') {
                    scan_state = hex_state;
                    hex_scan_state = hex_start;
                } else {
                    scan_state = leading_sig_zeroes;
                }
                break;
            }
            scan_state = int_digit_loop;
            break;

        case leading_sig_zeroes:
            if (c == '0') {
                c = fetch();
                break;
            }
            scan_state = int_digit_loop;
            break;

        case int_digit_loop:
            if (!isdigit_msl(c)) {
                if (c == '.') {
                    scan_state = frac_digit_loop;
                    c = fetch();
                } else {
                    scan_state = sig_end;
                }
                break;
            }
            if (d.sig.length < 20) {
                d.sig.text[d.sig.length++] = c;
            } else {
                exp_adjust++;
            }
            c = fetch();
            break;

        case frac_start:
            if (!isdigit_msl(c)) {
                scan_state = failure;
                break;
            }
            scan_state = frac_digit_loop;
            break;

        case frac_digit_loop:
            if (!isdigit_msl(c)) {
                scan_state = sig_end;
                break;
            }
            if (d.sig.length < 20) {
                if (c != '0' || d.sig.length) {
                    d.sig.text[d.sig.length++] = c;
                }
                exp_adjust--;
            }
            c = fetch();
            break;

        case sig_end:
            if (toupper_msl(c) == 'E') {
                scan_state = exp_start;
                c = fetch();
                break;
            }
            scan_state = finished;
            break;

        case exp_start:
            if (c == '+') {
                c = fetch();
            } else if (c == '-') {
                c = fetch();
                exp_negative = 1;
            }
            scan_state = leading_exp_digit;
            break;

        case leading_exp_digit:
            if (!isdigit_msl(c)) {
                scan_state = failure;
                break;
            }
            if (c == '0') {
                scan_state = leading_exp_zeroes;
                c = fetch();
                break;
            }
            scan_state = exp_digit_loop;
            break;

        case leading_exp_zeroes:
            if (c == '0') {
                c = fetch();
                break;
            }
            scan_state = exp_digit_loop;
            break;

        case exp_digit_loop:
            if (!isdigit_msl(c)) {
                scan_state = finished;
                break;
            }
            exp_value = exp_value * 10 + (c - '0');
            if (exp_value > 32767) {
                *overflow = 1;
            }
            c = fetch();
            break;

        case hex_state:
            switch (hex_scan_state) {
            case hex_start:
                chptr = (unsigned char *)mantissa;
                chptr[0] = 0; chptr[1] = 0; chptr[2] = 0; chptr[3] = 0;
                chptr[4] = 0; chptr[5] = 0; chptr[6] = 0; chptr[7] = 0;
                intdigits = 0;
                NibbleIndex = 0;
                max_digits = 14;
                hex_scan_state = hex_leading_sig_zeroes;
                c = fetch();
                break;

            case hex_leading_sig_zeroes:
                if (c == '0') {
                    c = fetch();
                    break;
                }
                hex_scan_state = hex_int_digit_loop;
                break;

            case hex_int_digit_loop:
                if (!isxdigit_msl(c)) {
                    if (c == '.') {
                        hex_scan_state = hex_frac_digit_loop;
                        c = fetch();
                    } else {
                        hex_scan_state = hex_sig_end;
                    }
                    break;
                }
                if (intdigits < max_digits) {
                    unsigned char uch;
                    unsigned char val;
                    intdigits++;
                    uch = chptr[NibbleIndex / 2];
                    c = toupper_msl(c);
                    if (c >= 'A') c -= 'A' - 10;
                    else c -= '0';
                    val = (unsigned char)c;
                    if (NibbleIndex % 2) uch |= val;
                    else uch |= (unsigned char)(val << 4);
                    chptr[NibbleIndex++ / 2] = uch;
                    c = fetch();
                    break;
                }
                c = fetch();
                break;

            case hex_frac_digit_loop:
                if (!isxdigit_msl(c)) {
                    hex_scan_state = hex_sig_end;
                    break;
                }
                if (intdigits < max_digits) {
                    unsigned char uch = chptr[NibbleIndex / 2];
                    unsigned char val;
                    c = toupper_msl(c);
                    if (c >= 'A') c -= 'A' - 10;
                    else c -= '0';
                    val = (unsigned char)c;
                    if (NibbleIndex % 2) uch |= val;
                    else uch |= (unsigned char)(val << 4);
                    chptr[NibbleIndex++ / 2] = uch;
                    c = fetch();
                    break;
                }
                c = fetch();
                break;

            case hex_sig_end:
                if (toupper_msl(c) == 'P') {
                    hex_scan_state = hex_exp_start;
                    c = fetch();
                    break;
                }
                scan_state = finished;
                break;

            case hex_exp_start:
                if (c == '-') {
                    hex_exp_negative = 1;
                } else if (c != '+') {
                    unfetch(c);
                    count--;
                }
                hex_scan_state = hex_leading_exp_digit;
                c = fetch();
                break;

            case hex_leading_exp_digit:
                if (!isdigit_msl(c)) {
                    scan_state = failure;
                    break;
                }
                if (c == '0') {
                    hex_scan_state = hex_leading_exp_zeroes;
                    c = fetch();
                    break;
                }
                hex_scan_state = hex_exp_digit_loop;
                break;

            case hex_leading_exp_zeroes:
                if (c == '0') {
                    c = fetch();
                    break;
                }
                hex_scan_state = hex_exp_digit_loop;
                break;

            case hex_exp_digit_loop:
                if (!isdigit_msl(c)) {
                    scan_state = finished;
                    break;
                }
                hex_exp_value = hex_exp_value * 10 + (c - '0');
                if (exp_value > 32767) {
                    *overflow = 1;
                }
                c = fetch();
                break;
            }
            break;
        }
    }

    if (scan_state != hex_state ? !(scan_state & final_state) : (count - 1 <= 2 || !(hex_scan_state & hex_final_state))) {
        *chars_scanned = 0;
    } else {
        *chars_scanned = count - 1 + spaces;
    }
    unfetch(c);

    if (hex_scan_state == 0) {
        int n;
        unsigned char *p;

        if (exp_negative) {
            exp_value = -exp_value;
        }
        n = d.sig.length;
        p = &d.sig.text[n];
        while (n-- && *--p == '0') {
            exp_adjust++;
        }
        d.sig.length = n + 1;
        if (d.sig.length == 0) {
            d.sig.text[d.sig.length++] = '0';
        }
        exp_value += exp_adjust;
        if (exp_value < -32768 || exp_value > 32767) {
            *overflow = 1;
        }
        if (*overflow) {
            if (exp_negative) {
                return 0.0;
            } else {
                return sig_negative ? -DAT_020f6224 : DAT_020f6224;
            }
        }
        d.exp = exp_value;
        result = FUN_02007c18(&d);
        if (result != 0.0 && result < 2.2250738585072014e-308) {
            *overflow = 1;
        } else if (result > 1.7976931348623157e+308) {
            *overflow = 1;
            result = DAT_020f6224;
        }
        if (sig_negative && (scan_state & final_state)) {
            result = -result;
        }
        return result;
    } else {
        unsigned int leading_zeroes;
        unsigned int bits_copied;
        unsigned int bit_offset;
        double hex_res;
        unsigned char *res = (unsigned char *)&hex_res;
        unsigned int lshift;
        int i;

        if (hex_exp_negative) {
            hex_exp_value = -hex_exp_value;
        }
        hex_exp_value += intdigits * 4;
        leading_zeroes = 0;
        while (leading_zeroes < 4 && !(mantissa[0] & (0x80 >> leading_zeroes))) {
            leading_zeroes++;
            hex_exp_value--;
        }
        lshift = leading_zeroes + 1;
        if (lshift != 0) {
            unsigned char carry = 0;
            chptr = &mantissa[7];
            while (chptr >= mantissa) {
                unsigned char byte = *chptr;
                *chptr = (byte << lshift) | carry;
                chptr--;
                carry = byte >> (8 - lshift);
            }
        }
        bits_copied = 0;
        res[0] = 0; res[1] = 0; res[2] = 0; res[3] = 0;
        res[4] = 0; res[5] = 0; res[6] = 0; res[7] = 0;
        bit_offset = 12;
        do {
            unsigned char byte = mantissa[bits_copied / 8];
            unsigned char hi, lo;
            if (bits_copied + 8 > 52) {
                byte &= (0xff << (52 - bits_copied));
            }
            hi = byte >> (bit_offset % 8);
            lo = byte << (8 - (bit_offset % 8));
            res[bit_offset / 8] |= hi;
            bit_offset += 8;
            res[bit_offset / 8] |= lo;
            bits_copied += 8;
        } while (bits_copied < 52);

        hex_exp_value += 1022;
        if (hex_exp_value & ~0x7ff) {
            *overflow = 1;
            return 0.0;
        }
        hex_exp_value <<= 21;
        res[0] |= (hex_exp_value >> 25);
        res[1] |= (hex_exp_value >> 17);
        if (sig_negative) {
            res[0] |= 0x80;
        }
        for (i = 0; i < 4; i++) {
            unsigned char tmp = res[i];
            res[i] = res[7 - i];
            res[7 - i] = tmp;
        }
        return *(double *)res;
    }
}
