//cpp
// flags: -O4,s
struct Lexer {
    unsigned char pad0[0xcc];
    unsigned char table[0x9d18 - 0xd0];
    signed char *cursor;
    signed char *token_start;
    unsigned char pad1[0x9d3c - 0x9d20];
    signed char token;
    signed char ch;
    unsigned char pad2[2];
    unsigned int value;
    char text[1024];

    virtual void v0();
    virtual void v4();
    virtual void check(int, const char *);
};

extern "C" {
extern int FUN_overlay_17__02122728(int), FUN_overlay_17__02122754(int);
extern unsigned *FUN_overlay_17__02124194(void *, const char *);
extern const char data_02126638[], data_02126650[], data_02126668[];
int FUN_overlay_17__02122828(Lexer *self);
}

#define ADVANCE() do { self->ch = self->cursor[0]; self->cursor++; } while (0)

static inline int is_space(signed char c) { return (c > 0 && c <= 32) ? 1 : 0; }
static inline int is_ws(signed char c) { return (is_space(c) && c != 10) ? 1 : 0; }
static inline int is_comment(signed char c) { return (c == '#') ? 1 : 0; }
static inline int is_underscore(signed char c) { return (c == '_') ? 1 : 0; }
static inline int is_digit(signed char c) { return (c >= '0' && c <= '9') ? 1 : 0; }
static inline signed char to_digit(signed char c) { return (signed char)(is_digit(c) ? (c - '0') : 0); }

int FUN_overlay_17__02122828(Lexer *self)
{
    int length = 0;
    unsigned *entry;
    self->text[0] = 0;
    self->token_start = self->cursor;
    while (is_ws(self->ch)) {
        ADVANCE();
    }
    if (is_comment(self->ch) != 0) {
        while (self->ch != 10 && self->ch != 0) {
            ADVANCE();
        }
    }
    if (is_underscore(self->ch) != 0) {
        self->value = 0;
        self->token = -126;
        self->text[length++] = self->ch;
        ADVANCE();
        while (FUN_overlay_17__02122728(self->ch) || is_digit(self->ch) != 0 || is_underscore(self->ch) != 0) {
            self->ch = FUN_overlay_17__02122754(self->ch);
            if (length < 30) {
                self->text[length++] = self->ch;
            }
            ADVANCE();
        }
        self->text[length] = 0;
        entry = FUN_overlay_17__02124194(self->table, self->text);
        self->value = entry[9];
    } else if (FUN_overlay_17__02122728(self->ch)) {
        while (FUN_overlay_17__02122728(self->ch) || is_digit(self->ch) != 0 || is_underscore(self->ch) != 0) {
            self->ch = FUN_overlay_17__02122754(self->ch);
            if (length < 30) {
                self->text[length++] = self->ch;
            }
            ADVANCE();
        }
        self->text[length] = 0;
        entry = FUN_overlay_17__02124194(self->table, self->text);
        if (!((signed char *)entry)[32]) {
            ((signed char *)entry)[32] = -127;
        }
        entry = FUN_overlay_17__02124194(self->table, self->text);
        self->token = ((signed char *)entry)[32];
        self->value = ~0u;
        self->check(self->token == -127 && self->ch == '(', data_02126638);
    } else {
        int _op = 0;
        if (self->ch <= -96) _op = 1;
        if (_op != 0) {
            self->token = self->ch;
            ADVANCE();
            if (self->token == -108) {
                self->value = (int)self->ch;
                ADVANCE();
            }
        } else if (is_digit(self->ch) != 0) {
            self->value = 0;
            self->token = -126;
            while (is_digit(self->ch) != 0) {
                self->value = self->value * 10 + to_digit(self->ch);
                ADVANCE();
            }
        } else if (self->ch == '"') {
            self->token = -125;
            ADVANCE();
            while (self->ch != '"') {
                self->check(length >= 1024, data_02126650);
                self->check(self->ch == 10 || self->ch == 0, data_02126668);
                self->text[length++] = self->ch;
                ADVANCE();
            }
            self->text[length] = 0;
            ADVANCE();
        } else {
            self->token = self->ch;
            if (self->ch) {
                ADVANCE();
            }
        }
    }
    return self->token;
}
