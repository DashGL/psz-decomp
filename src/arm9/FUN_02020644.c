// flags: -O4,p -noThumb
unsigned int FUN_02020644(unsigned int *head, unsigned int *freehead, unsigned int *range) {
    unsigned int p = *head, next, n, prev, changed = 0, start;
    while (p) {
        start = *(unsigned int *)p;
        next = *(unsigned int *)(p + 12);
        if (start == range[1]) {
            changed |= 1;
            range[1] = start + *(unsigned int *)(p + 4);
            prev = *(unsigned int *)(p + 8);
            n = *(unsigned int *)(p + 12);
            if (prev) *(unsigned int *)(prev + 12) = n;
            else *head = n;
            if (n) *(unsigned int *)(n + 8) = prev;
            if (*freehead) *(unsigned int *)(*freehead + 8) = p;
            *(unsigned int *)(p + 12) = *freehead;
            *(unsigned int *)(p + 8) = 0;
            *freehead = p;
        }
        start = *(unsigned int *)p;
        if (range[0] == start + *(unsigned int *)(p + 4)) {
            unsigned int n2, prev2;
            range[0] = start;
            prev2 = *(unsigned int *)(p + 8);
            n2 = *(unsigned int *)(p + 12);
            if (prev2) *(unsigned int *)(prev2 + 12) = n2;
            else *head = n2;
            if (n2) *(unsigned int *)(n2 + 8) = prev2;
            if (*freehead) *(unsigned int *)(*freehead + 8) = p;
            *(unsigned int *)(p + 12) = *freehead;
            *(unsigned int *)(p + 8) = 0;
            *freehead = p;
            changed |= 1;
        }
        p = next;
    }
    return changed;
}
