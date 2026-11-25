// flags: -O4,s
extern const char DAT_020f9770[];
extern int FUN_0206d1fc(const int *);
extern int FUN_0206d248(signed char *, int);
extern int FUN_0206d27c(signed char *, int);
extern int FUN_0206d2b0(signed char *, int);
#pragma thumb off
extern int FUN_020662b4(void *, unsigned int, const char *, ...);
#pragma thumb on

int FUN_0206d2e4(const int *self, void *out) {
    if (!FUN_0206d1fc(self)) return 0;
    {
        signed char a = 0;
        if (!FUN_0206d248(&a, self[1])) return 0;
        {
            signed char b = 0;
            if (!FUN_0206d27c(&b, self[2])) return 0;
            {
                signed char c = 0;
                if (!FUN_0206d2b0(&c, self[3])) return 0;
                FUN_020662b4(out, 9, DAT_020f9770, self[0], (int)a, (int)b, (int)c, self[4]);
                return 1;
            }
        }
    }
}
