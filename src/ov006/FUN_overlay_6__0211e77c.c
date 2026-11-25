// flags: -O4,s
extern unsigned short DAT_020eba58[];
#pragma thumb off
extern unsigned int FUN_02003c70(const char *);
#pragma thumb on

void FUN_overlay_6__0211e77c(int *self, const signed char *text, int *out)
{
    int i;
    int c;

    if (!text) {
        return;
    }
    self[0] = FUN_02003c70((const char *)text);
    for (i = 0; i < self[0]; i++) {
        c = text[i];
        if ((c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x200)) {
            out[i] = c - 'A';
        } else if ((c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x20)) {
            out[i] = c - 0x47;
        } else if ((c < 0 || c >= 128) ? 0 : (DAT_020eba58[c] & 0x08)) {
            out[i] = c + 0x0e;
        } else {
            switch (c) {
            case '*':
                switch (text[i + 1]) {
                case '0':
                    out[i] = 0x49;
                    self[0] = 1;
                    return;
                case '1':
                    out[i] = 0x48;
                    self[0] = 1;
                    return;
                case '2':
                    out[i] = 0x4b;
                    self[0] = 1;
                    return;
                case '3':
                    out[i] = 0x4c;
                    self[0] = 1;
                    return;
                case '4':
                    out[i] = 0x4d;
                    self[0] = 1;
                    return;
                default:
                    out[i] = 0x34;
                    break;
                }
                break;
            case '.':
                out[i] = 0x35;
                break;
            case ' ':
                out[i] = 0x4e;
                break;
            case ',':
                out[i] = 0x36;
                break;
            case '-':
                out[i] = 0x37;
                break;
            case '/':
                out[i] = 0x38;
                break;
            case '#':
                out[i] = 0x39;
                break;
            case '&':
                out[i] = 0x3a;
                break;
            case '"':
                out[i] = 0x3b;
                break;
            case '(':
                out[i] = 0x3c;
                break;
            case ')':
                out[i] = 0x3d;
                break;
            case '\'':
                out[i] = 0x4a;
                break;
            default:
                return;
            }
        }
    }
}
