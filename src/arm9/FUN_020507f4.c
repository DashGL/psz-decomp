// flags: -O4,s
extern int FUN_0206d36c(const int *, int *), FUN_0206d3dc(const int *, int *), FUN_0206d47c(const int *);
int FUN_020507f4(void *unused, const int *record) {
    int result = -1, first = record[0], second = record[1], a = -1, b = -1;
    if (FUN_0206d36c(record, &a)) {
        if (a == 0) result = 0;
        else if (a == 1) result = 1;
        else if (a == 2) result = 2;
        else if (a == 3) result = 3;
    } else if (FUN_0206d3dc(record, &b)) {
        switch (b) {
        case 0: result = 9; break;
        case 5: result = 10; break;
        case 4: result = 11; break;
        case 1: case 2: case 3: result = 12; break;
        }
    } else if (second == 1) {
        result = 5;
    } else {
        int third = record[2];
        if (second == 3) {
            if (first == 2) result = 7;
            else if (first == 5) result = 8;
            else result = 6;
        } else if ((unsigned int)(third - 5) <= 1) {
            result = 4;
        } else if (FUN_0206d47c(record)) {
            result = 6;
        }
    }
    return result;
}
