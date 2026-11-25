// flags: -O4,s
// near: 36B diff from Thumb register coloring and loop induction variable in 3-byte local array clear
extern int FUN_020748ec(void *);
extern int FUN_02073fd8(void *);
extern void FUN_020c0948(signed char *, int);

void FUN_02074854(char *param_1, signed char *param_2) {
    if (FUN_020748ec(param_1) == 1) {
        int r4 = *(int *)(param_2 + 4);
        if (r4 == param_2[1]) {
            int r0 = FUN_02073fd8(param_1);
            if (r4 != r0 && r0 >= 0 && r0 < 4) {
                signed char local_1c[4];
                int i;
                int limit;
                int count;
                (param_1 + r4)[0x168] = (param_2 + r0)[8];
                for (i = 0; i < 3; i++) {
                    local_1c[i] = 0;
                }
                limit = *(int *)(param_1 + 0x16c);
                if (limit < 0 || limit > 3) {
                    limit = 0;
                }
                count = 0;
                for (i = 0; i < 4 && count < limit; i++) {
                    switch ((param_1 + i)[0x168]) {
                    case 0:
                        break;
                    case 1:
                        local_1c[count] = 1;
                        count++;
                        break;
                    case 2:
                        local_1c[count] = -1;
                        count++;
                        break;
                    }
                }
                FUN_020c0948(local_1c, limit);
            }
        }
    }
}
