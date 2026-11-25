// flags: -O4,s
int FUN_02088488(char *s) {
    switch (*(int *)(s + 360)) {
    case 0:
        *(int *)(s + 384) = -1365;
        break;
    case 1:
        *(int *)(s + 384) = 1365;
        break;
    default:
        *(int *)(s + 384) = 0;
        break;
    }
    *(int *)(s + 384) -= *(int *)(s + 352);
    *(int *)(s + 388) = (*(int *)(s + 364) == 1) ? -1536 : 1536;
    *(int *)(s + 392) = -5461;
    return 1;
}
