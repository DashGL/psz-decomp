// version: 2.0/sp1p5
// flags: -O4,p -noThumb
extern const unsigned int DAT_020f9728[];

unsigned int FUN_02069324(const unsigned int *date) {
    unsigned int year = date[0];
    unsigned int month;
    unsigned int day;
    unsigned int days;
    if (year >= 100) goto err;
    month = date[1];
    if (month < 1 || month > 12) goto err;
    day = date[2];
    if (day < 1 || day > 31) goto err;
    if ((int)date[3] >= 7) goto err;
    if (month < 1 || month > 12) {
err:
        return (unsigned int)-1;
    }
    days = (day - 1) + DAT_020f9728[month];
    if (month >= 3 && !(year & 3)) {
        days++;
    }
    return year * 365 + days + ((year + 3) >> 2);
}
