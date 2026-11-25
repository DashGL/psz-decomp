// flags: -O4,s
extern int DAT_0211b274;
extern int FUN_0204dab0(int);
int FUN_020b5b28(int id) {
    int result = 7;
    if (FUN_0204dab0(id)) {
        result = DAT_0211b274 + result;
        if (result < 7 || result > 15) result = 7;
    }
    return result;
}
