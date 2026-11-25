// flags: -O4,p -noThumb
extern unsigned int FUN_0206b570(unsigned int, unsigned int, unsigned int);
unsigned int FUN_0206b6ec(unsigned int mode, unsigned int callback, unsigned int argument) {
    unsigned int command;
    switch (mode) {
    case 1: command = 1; break;
    case 3: command = 2; break;
    case 2: command = 3; break;
    default: command = 0; break;
    }
    if (!command) return 65535;
    return FUN_0206b570(command, callback, argument);
}
