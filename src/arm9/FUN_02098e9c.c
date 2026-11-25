//cpp
// flags: -O4,s
class Scope_02098e9c { public: int kind; };
typedef void (Scope_02098e9c::*Action)(void);
typedef void (Scope_02098e9c::*Finish)(int);
struct Entry_02098e9c { unsigned int opaque[2]; Action update; Finish finish; };
extern "C" Entry_02098e9c DAT_020fb200[];
extern "C" void FUN_02098e9c(Scope_02098e9c *self, int reason) {
    Finish &f = DAT_020fb200[self->kind].finish;
    if (f) {
        (self->*f)(reason);
    }
}
