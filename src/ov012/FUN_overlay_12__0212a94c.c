// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *FUN_overlay_12__0212aadc(void *);
extern void *FUN_overlay_12__0212a934(void *);
extern void FUN_overlay_12__02129f94(void *);
extern void FUN_overlay_12__02129f04(void *);
extern void FUN_overlay_12__02129ed4(void *);
extern void FUN_overlay_12__0212ad18(void *);
extern void FUN_overlay_12__0212b174(void);
extern int FUN_overlay_12__02132390(void);
extern void FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));

#define B(x) (((x) != 0 ? E1 : E0) != 0)

int FUN_overlay_12__0212a94c(int *self) {
    if (B(self[114])) {
        if (B(self[120])) {
            FUN_overlay_12__0212aadc(self);
            FUN_overlay_12__02129f94(self);
            return 1;
        }
        self[125]++;
        if (self[125] >= 9000) {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 11, 1, -1, FUN_overlay_12__0212b174, 0);
            FUN_overlay_12__0212aadc(self);
            FUN_overlay_12__02129f04(self);
            return 1;
        }
    }
    if (!FUN_overlay_12__02132390()) {
        if (B(self[115])) {
            FUN_overlay_12__0212ad18(self);
            FUN_overlay_12__0212b19c(self, 6, 1, -1, 0, 0);
            return 1;
        }
        if (B(self[122])) {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 19, 1, -1, FUN_overlay_12__0212b174, 0);
            FUN_overlay_12__02129ed4(self);
            return 1;
        }
        if (B(self[119])) {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 17, 1, -1, FUN_overlay_12__0212b174, 0);
            return 1;
        }
        if (B(self[116])) {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 9, 1, -1, FUN_overlay_12__0212b174, 0);
            return 1;
        }
        if (B(self[113])) {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 25, 1, -1, FUN_overlay_12__0212b174, 0);
            return 1;
        }
    }
    return 0;
}
