// flags: -O4,p -noThumb
typedef struct {
    unsigned int year;
    unsigned int month;
    unsigned int day;
} RTCDate;

int FUN_02069434(const RTCDate *date) {
    int year = (int)(date->year + 2000);
    int month = (int)(date->month - 2);
    int cent;
    int day = (int)date->day;
    if (month < 1) {
        year -= 1;
        month += 12;
    }
    cent = year / 100;
    year %= 100;
    return (day + (26 * month - 2) / 10 + year + year / 4 + cent / 4 + 5 * cent) % 7;
}
