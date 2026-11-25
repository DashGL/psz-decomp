//cpp
// flags: -O4,s
class Scope_02098e68 { public: int kind; };
typedef void (Scope_02098e68::*Action)(void);
typedef void (Scope_02098e68::*Finish)(int);
struct Entry_02098e68 {
    unsigned int opaque[2];
    Action update;
    Finish finish;
};
extern "C" Entry_02098e68 DAT_020fb200[];
extern "C" void FUN_02098e68(Scope_02098e68 *self) {
    Action &fn = DAT_020fb200[self->kind].update;
    if (fn) {
        (self->*fn)();
    }
}
