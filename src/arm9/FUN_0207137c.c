//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020712e8(void *);
extern int FUN_020bbfa8(unsigned int);
}
struct Cam {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    char pad[116];
    unsigned int flags; // 120
    char pad2[6];
    unsigned short yaw; // 130
    unsigned short pad3;
    unsigned short refYaw; // 134
    int state; // 136
    unsigned int timer; // 140
    unsigned short targetYaw; // 144
    unsigned short pad4;
    int limit; // 148
};
extern "C" void FUN_0207137c(Cam *self) {
    FUN_020712e8(self);
    switch (self->state) {
    case 1: {
        if (self->timer > 10 && !(self->flags & 2)) {
            if (!FUN_020bbfa8(512)) {
                if (FUN_020bbfa8(16) || FUN_020bbfa8(32) || FUN_020bbfa8(64) || FUN_020bbfa8(128) || FUN_020bbfa8(1024))
                    self->v20();
            } else if (FUN_020bbfa8(1024)) {
                self->v20();
            }
        }
        int delta = (int)self->targetYaw - (int)self->yaw;
        if (delta > 32768) delta = -(65536 - delta);
        else if (delta < -32768) delta += 65536;
        if (delta > 256 || delta < -256) {
            self->yaw += delta >> 3;
            *(volatile unsigned short *)&self->yaw = *(volatile unsigned short *)&self->yaw;
        } else {
            self->yaw = self->targetYaw;
            self->state = 0;
        }
        self->timer++;
        break;
    }
    case 0:
        if (!(self->flags & 2)) {
            if (!FUN_020bbfa8(256) && !FUN_020bbfa8(512)) {
                if (self->flags & 1) {
                    int delta;
                    int target = self->refYaw + 32768;
                    delta = target - (int)self->yaw;
                    if (delta > 32768) delta = -(65536 - delta);
                    else if (delta < -32768) delta += 65536;
                    if ((unsigned short)delta != 32768) {
                        int lim = self->limit;
                        if (delta > lim) self->yaw += ((unsigned int)lim << 15) >> 16;
                        else if (delta < -lim) self->yaw -= ((unsigned int)lim << 15) >> 16;
                        else self->yaw = target;
                    }
                }
            } else if (!FUN_020bbfa8(1024) && FUN_020bbfa8(512)) {
                int delta = (int)self->targetYaw - (int)self->yaw;
                if (delta > 32768) delta = -(65536 - delta);
                else if (delta < -32768) delta += 65536;
                if (delta > 256 || delta < -256) {
                    self->yaw += delta >> 3;
                    *(volatile unsigned short *)&self->yaw = *(volatile unsigned short *)&self->yaw;
                } else {
                    self->yaw = self->targetYaw;
                }
            }
        }
        self->timer = 0;
        break;
    default:
        self->timer = 0;
        break;
    }
    self->v30();
}
