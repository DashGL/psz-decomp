// flags: -O4,s
extern void *FUN_overlay_12__0212a934(void *);
extern int FUN_overlay_12__0212bd5c(void *);
extern void FUN_overlay_12__0212b084(void);
extern void FUN_overlay_12__0212b124(void);
extern void FUN_overlay_12__0212b0d4(void);
extern void FUN_overlay_12__02129ed4(void *);
extern void FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));

static inline int has_flag(int *self, int idx)
{
    return !!self[idx];
}

int FUN_overlay_12__0212ab50(int *self)
{
    int message;
    if (has_flag(self, 115) != 0) {
        FUN_overlay_12__0212a934(self);
        FUN_overlay_12__0212b19c(self, 5, 1, -1, FUN_overlay_12__0212b084, 0);
        return 1;
    }
    if (has_flag(self, 114) != 0) {
        if (FUN_overlay_12__0212bd5c(self)) {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 3, 1, -1, FUN_overlay_12__0212b124, 0);
        } else {
            FUN_overlay_12__0212a934(self);
            FUN_overlay_12__0212b19c(self, 15, 1, -1, FUN_overlay_12__0212b0d4, 0);
        }
        return 1;
    }
    if (has_flag(self, 121) != 0) {
        FUN_overlay_12__0212a934(self);
        FUN_overlay_12__0212b19c(self, 24, 1, -1, FUN_overlay_12__0212b084, 0);
        return 1;
    }
    if (has_flag(self, 116) != 0 || has_flag(self, 118) != 0) {
        message = has_flag(self, 118) != 0 ? 12 : 10;
        FUN_overlay_12__0212a934(self);
        FUN_overlay_12__0212b19c(self, message, 1, -1, FUN_overlay_12__0212b0d4, 0);
        return 1;
    }
    if (has_flag(self, 119) != 0) {
        FUN_overlay_12__0212a934(self);
        FUN_overlay_12__0212b19c(self, 16, 1, -1, FUN_overlay_12__0212b0d4, 0);
        return 1;
    }
    if (has_flag(self, 122) != 0) {
        FUN_overlay_12__0212a934(self);
        FUN_overlay_12__0212b19c(self, 18, 1, -1, FUN_overlay_12__0212b0d4, 0);
        FUN_overlay_12__02129ed4(self);
        return 1;
    }
    return 0;
}
