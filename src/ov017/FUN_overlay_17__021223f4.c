// flags: -O4,s

extern int FUN_overlay_17__021224d4(void *, char *, unsigned, const char *);
extern unsigned FUN_020c3f6c(const char *, unsigned);
int FUN_overlay_17__021223f4(void *self, char *out, unsigned limit, const char **input, int lines)
{
    unsigned count;
    int line = 0;
    char replacement[256];
    for (count = 0; count < limit; count++) {
        signed char ch = **input;
        if (ch == 0) {
            out[count] = 0;
            break;
        }
        if (ch == '\n') {
            line++;
            if (line == lines) {
                out[count] = 0;
                (*input)++;
                break;
            }
        }
        if (ch == '<') {
            int stop = 0;
            unsigned length = 0;
            switch (FUN_overlay_17__021224d4(self, replacement, 256, *input)) {
            case 0: {
                unsigned i;
                length = FUN_020c3f6c(replacement, 255);
                for (i = 0; i < length; i++) {
                    out[count + i] = replacement[i];
                }
                break;
            }
            case 1:
                out[count] = 0;
                stop = 1;
                break;
            }
            while (**input != '>') {
                (*input)++;
            }
            (*input)++;
            count += length;
            if (stop == 1) {
                if (**input == '\n') {
                    (*input)++;
                }
                break;
            }
        }
        ch = **input;
        if (ch == 1) {
            int i;
            out[count] = 0;
            for (i = 0; i < 8; i++) {
                (*input)++;
            }
        } else {
            out[count] = ch;
            (*input)++;
        }
        }
    return 1;
}
