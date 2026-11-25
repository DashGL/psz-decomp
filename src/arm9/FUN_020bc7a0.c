// flags: -O4,p
struct S8 { unsigned int a, b; };
void FUN_020bc7a0(unsigned int *self, const struct S8 *source) {
    ((struct S8 *)self)[2] = source[0];
    ((struct S8 *)self)[3] = source[1];
}
