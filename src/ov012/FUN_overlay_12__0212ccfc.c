//cpp
// flags: -O4,s
struct Cond {
    int kind;
};
typedef int (Cond::*CondFn)();
extern CondFn const DAT_021388f8[];
extern "C" int FUN_overlay_12__0212ccfc(Cond *condition) {
    return (condition->*DAT_021388f8[condition->kind])();
}
