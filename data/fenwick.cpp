template <typename T>
class FenwickTree {
 public:
  int n;
  vector<T> fenw;

  FenwickTree(int _n) : n(_n) {
    fenw.assign(n, 0);
  }

  int lowbit(int x) {
    return x & -x;
  }

  void modify(int x, T val) {
    while (x < n) {
      fenw[x] += val;
      x += lowbit(x);
    }
  }

  T query(int x) {
    T val{};
    while (x > 0) {
      val += fenw[x];
      x -= lowbit(x);
    }
    return val;
  }
};
