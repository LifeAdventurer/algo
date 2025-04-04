class DSU {
 public:
  int n;
  vector<int> e;
  vector<int> mn, mx;

  DSU(int _n) : n(_n) {
    e.assign(n, -1);
    mn.resize(n);
    mx.resize(n);
    iota(mn.begin(), mn.end(), 1);
    iota(mx.begin(), mx.end(), 1);
  }

  inline int get(int x) {
    return (e[x] < 0 ? x : (e[x] = get(e[x])));
  }

  inline bool same(int x, int y) {
    return (get(x) == get(y));
  }

  inline int size(int x) {
    return (-e[get(x)]);
  }

  inline int Min(int x) {
   return (mn[get(x)]);
  }

  inline int Max(int x) {
   return (mx[get(x)]);
  }

  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if(x == y) return false;
    if(e[x] > e[y]) swap(x, y);
    e[x] += e[y];
    e[y] = x;
    mx[x] = max(mx[x], mx[y]);
    mn[x] = min(mn[x], mn[y]);
    return true;
  }
};
