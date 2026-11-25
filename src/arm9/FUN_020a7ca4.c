// flags: -O4,s
extern int FUN_0208a094(void *);
extern int FUN_020a7c64(int);
extern int FUN_020a7bd8(void *);

int FUN_020a7ca4(unsigned char *item)
{
    int changed = 0;
    int form;
    int stage;
    int firstA, firstB, firstC, firstD;
    int secondA, secondB, secondC, secondD;
    int a, b, c, d;
    int old;
    int total;
    int result;
    int *words = (int *)item;

    total = FUN_0208a094(item);
    old = item[3];
    form = old;
    stage = FUN_020a7c64(old);

    if (stage == 3 && total < 60) {
        stage = 2;
        if (old == 9) form = 1;
        if (old == 10) form = 2;
        if (old == 11) form = 3;
        if (old == 12) form = 4;
    }
    if (stage == 4 && (((words[2] & (int)0x80000000) >> 31) & 1)) {
        stage = 3;
    }

    a = (words[1] & (0x7f << 18)) >> 18;
    b = (words[1] & (0x7f << 11)) >> 11;
    c = (words[1] & (0x7f << 4)) >> 4;
    d = (words[2] & (0x7f << 24)) >> 24;

    firstB = 0;
    firstA = 0;
    firstC = 0;
    firstD = 0;
    if (a > b && a > c && a > d) {
        firstA = 1;
        a = 0;
    } else if (b > a && b > c && b > d) {
        firstB = 1;
        b = 0;
    } else if (c > a && c > b && c > d) {
        firstC = 1;
        c = 0;
    } else if (d > a && d > b && d > c) {
        firstD = 1;
        d = 0;
    }

    secondA = 0;
    secondB = 0;
    secondC = 0;
    secondD = 0;
    if (!firstA && a > b && a > c && a > d) {
        secondA = 1;
    } else if (!firstB && b > a && b > c && b > d) {
        secondB = 1;
    } else if (!firstC && c > a && c > b && c > d) {
        secondC = 1;
    } else if (!firstD && d > a && d > b && d > c) {
        secondD = 1;
    }

    result = 33;
    if (FUN_020a7bd8(item)) {
        changed = 1;
        switch (stage) {
        case 1:
            if (firstA) result = 1;
            else if (firstB) result = 2;
            else if (firstC) result = 3;
            else if (firstD) result = 4;
            else changed = 0;
            break;
        case 2:
            switch (form) {
            case 1:
                if (firstA) {
                    if (b == 0 && c == 0 && d == 0) result = 9;
                    else result = 5;
                } else if (firstB) result = 6;
                else if (firstC) result = 7;
                else if (firstD) result = 8;
                else changed = 0;
                break;
            case 2:
                if (firstA) result = 5;
                else if (firstB) {
                    if (a == 0 && c == 0 && d == 0) result = 10;
                    else result = 6;
                } else if (firstC) result = 7;
                else if (firstD) result = 8;
                else changed = 0;
                break;
            case 3:
                if (firstA) result = 5;
                else if (firstB) result = 6;
                else if (firstC) {
                    if (a == 0 && b == 0 && d == 0) result = 11;
                    else result = 7;
                } else if (firstD) result = 8;
                else changed = 0;
                break;
            case 4:
                if (firstA) result = 5;
                else if (firstB) result = 6;
                else if (firstC) result = 7;
                else if (firstD) {
                    if (a == 0 && b == 0 && c == 0) result = 12;
                    else result = 8;
                } else changed = 0;
                break;
            default:
                changed = 0;
                break;
            }
            break;
        case 3:
            if (firstA) {
                if (secondA) changed = 0;
                else if (secondB) result = 13;
                else if (secondC) result = 14;
                else if (secondD) result = 15;
                else changed = 0;
            } else if (firstB) {
                if (secondA) result = 16;
                else if (secondB) changed = 0;
                else if (secondC) result = 17;
                else if (secondD) result = 18;
                else changed = 0;
            } else if (firstC) {
                if (secondA) result = 19;
                else if (secondB) result = 20;
                else if (secondC) changed = 0;
                else if (secondD) result = 21;
                else changed = 0;
            } else if (firstD) {
                if (secondA) result = 22;
                else if (secondB) result = 23;
                else if (secondC) result = 24;
                else if (secondD) changed = 0;
                else changed = 0;
            } else {
                changed = 0;
            }
            break;
        case 4:
            changed = 0;
            break;
        case 5:
            changed = 0;
            break;
        default:
            words[1] &= ~(0x7f << 18);
            words[1] &= ~(0x7f << 11);
            words[1] &= ~(0x7f << 4);
            words[2] &= ~(0x7f << 24);
            words[1] &= ~(0x7f << 25);
            words[1] &= ~0xf;
            words[2] &= ~(0xf << 20);
            words[2] &= ~(0xf << 16);
            words[2] &= ~(0xf << 12);
            words[2] &= ~(0xf << 8);
            words[2] &= ~(0x7 << 5);
            changed = 0;
            break;
        }
    }

    if (old == result) {
        changed = 0;
    }
    if (changed && result != 33) {
        item[3] = (unsigned char)result;
        if (FUN_020a7c64(result) == 4) {
            words[2] &= 0x7fffffff;
        }
    }
    return changed;
}
