// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { unsigned int a, c, d; } Body;
typedef struct { unsigned int pad; Key key; Body body; } Src;
typedef struct { Key key; Body body; } Dst;
void FUN_020b4b30(Src *self, Dst *out) {
    out->key = self->key;
    out->body = self->body;
}
