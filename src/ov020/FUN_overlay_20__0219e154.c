// flags: -O4,p
int FUN_overlay_20__0219e154(int *v) {
    return (int)(((long long)v[0] * v[0] + 2048) >> 12)
         + (int)(((long long)v[1] * v[1] + 2048) >> 12)
         + (int)(((long long)v[2] * v[2] + 2048) >> 12);
}
