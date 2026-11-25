// flags: -noThumb -O4,p
void FUN_02003914(char *base, unsigned int nmemb, unsigned int size, int (*compar)(const void *, const void *)) {
    unsigned int l, i, cnt;
    char *ip, *kp, *lp, *rp, *p, *q;
    if (nmemb < 2) {
        return;
    }
    l = (nmemb >> 1) + 1;
    lp = base + size * (l - 1);
    rp = base + size * (nmemb - 1);
    for (;;) {
        if (l > 1) {
            l--;
            lp -= size;
        } else {
            cnt = size;
            p = rp;
            q = lp;
            while (cnt != 0) {
                char c1 = *p;
                char c2 = *q;
                cnt--;
                *q++ = c1;
                *p++ = c2;
            }
            nmemb--;
            if (nmemb == 1) {
                return;
            }
            rp -= size;
        }
        i = l;
        ip = base + size * (l - 1);
        while ((i << 1) <= nmemb) {
            i <<= 1;
            kp = ip;
            ip = base + size * (i - 1);
            if (i < nmemb) {
                if (compar(ip, ip + size) < 0) {
                    i++;
                    ip += size;
                }
            }
            if (compar(kp, ip) >= 0) {
                break;
            }
            cnt = size;
            q = ip;
            while (cnt != 0) {
                char c1 = *kp;
                char c2 = *q;
                *kp++ = c2;
                *q++ = c1;
                cnt--;
            }
        }
    }
}
