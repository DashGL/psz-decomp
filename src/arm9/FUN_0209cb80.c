// flags: -O4,s
void FUN_0209cb80(char *out, int number) {
    int count = 0;
    if (number > 0 && number <= 99) {
        if (number >= 10) { out[count] = 48 + number / 10; count++; }
        out[count] = 48 + number % 10;
        count++;
    }
    out[count] = 0;
}
