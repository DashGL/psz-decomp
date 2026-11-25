// flags: -O4,s
extern void *DAT_02108d04;
extern int FUN_0203ae60(void *);
int FUN_020a9328(void) {
    int result = 0;
    void *p = DAT_02108d04;
    if (!p) goto done;
    if (!FUN_0203ae60(p)) goto done;
    result = 1;
done:
    return result;
}
