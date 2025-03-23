int fastpow(int x, int y, int mod) {
  int ret = 1;
  while (y) {
    if (y & 1)
      ret = (1LL * ret * x) % mod;
    y >>= 1;
    x = (1LL * x * x) % mod;
  }
  return ret;
}
