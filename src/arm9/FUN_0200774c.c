// flags: -O4,p -noThumb
typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

void FUN_0200774c(decimal *z, const decimal *x, const decimal *y) {
    int zlen, dexp;
    unsigned char *ib, *i, *ie;
    const unsigned char *jb, *j, *jn;
    *z = *x;
    if (y->sig.text[0] == 0) {
        return;
    }
    zlen = z->sig.length;
    if (zlen < y->sig.length) {
        zlen = y->sig.length;
    }
    dexp = z->exp - y->exp;
    zlen += dexp;
    if (zlen > 32) {
        zlen = 32;
    }
    while (z->sig.length < zlen) {
        z->sig.text[z->sig.length++] = 0;
    }
    ib = z->sig.text;
    i = ib + zlen;
    if (y->sig.length + dexp < zlen) {
        i = ib + (y->sig.length + dexp);
    }
    jb = y->sig.text;
    j = jb + (i - ib - dexp);
    jn = j;
    while (i > ib && j > jb) {
        --i;
        --j;
        if (*i < *j) {
            unsigned char *k = i - 1;
            while (*k == 0) {
                --k;
            }
            while (k != i) {
                --*k;
                *++k += 10;
            }
        }
        *i -= *j;
    }
    if (jn - jb < y->sig.length) {
        int round_down = 0;
        if (*jn < 5) {
            round_down = 1;
        } else if (*jn == 5) {
            const unsigned char *je = y->sig.text + y->sig.length;
            int r = jn - jb;
            for (++jn; jn < je; ++jn) {
                if (*jn != 0) {
                    goto done;
                }
            }
            i = ib + r + dexp - 1;
            if (*i & 1) {
                round_down = 1;
            }
        }
        if (round_down) {
            if (*i < 1) {
                unsigned char *k = i - 1;
                while (*k == 0) {
                    --k;
                }
                while (k != i) {
                    --*k;
                    *++k += 10;
                }
            }
            --*i;
        }
    }
done:
    for (i = ib; *i == 0; ++i) {
    }
    if (i > ib) {
        unsigned char shift = (unsigned char)(i - ib);
        z->exp -= shift;
        ie = ib + z->sig.length;
        for (; i < ie; ++ib, ++i) {
            *ib = *i;
        }
        z->sig.length -= shift;
    }
    ib = z->sig.text;
    for (i = ib + z->sig.length; i > ib; ) {
        --i;
        if (*i != 0) {
            break;
        }
    }
    z->sig.length = (unsigned char)(i - ib + 1);
}
