// flags: -O4,s
extern void FUN_overlay_11__0212141c(void *, int, int), FUN_overlay_11__021213c0(void *, unsigned, unsigned);
extern unsigned *FUN_overlay_11__0212146c(void *, int);
extern unsigned FUN_overlay_11__02123008(const void *, int);
void FUN_overlay_11__02121a24(char *self, const unsigned char *settings) {
    unsigned selected;
    unsigned *row;
    unsigned char tag;
    FUN_overlay_11__0212141c(self + 72, 7, 0);
    FUN_overlay_11__021213c0(FUN_overlay_11__0212146c(self + 72, 0), 3, settings[37]);
    FUN_overlay_11__021213c0(FUN_overlay_11__0212146c(self + 72, 1), 2, settings[38]);
    FUN_overlay_11__021213c0(FUN_overlay_11__0212146c(self + 72, 2), 4, settings[40]);
    FUN_overlay_11__021213c0(FUN_overlay_11__0212146c(self + 72, 3), 2, settings[39]);
    tag = settings[41];
    selected = 0;
    if (tag != 254) {
        for (; selected < 8; selected++) {
            if (settings[41] == FUN_overlay_11__02123008(settings, selected)) break;
        }
    }
    FUN_overlay_11__021213c0(FUN_overlay_11__0212146c(self + 72, 4), 8, selected);
    FUN_overlay_11__021213c0(FUN_overlay_11__0212146c(self + 72, 5), 4, settings[44]);
    row = FUN_overlay_11__0212146c(self + 72, 6);
    row[0] = 0;
    row[1] = 0;
}
