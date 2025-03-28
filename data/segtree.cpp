struct Segtree {
  int n;
  vector<long long> tree;

  Segtree(int _n) : tree(2 * _n, 0), n(_n) {}

  void modify(int pos, long long val) {
    for (tree[pos += n] = val; pos > 1; pos >>= 1) {
      tree[pos >> 1] = max(tree[pos], tree[pos ^ 1]);
    }
  }

  long long query(int l, int r) {
    long long ret = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
      if (l & 1)
        ret = max(ret, tree[l++]);
      if (r & 1)
        ret = max(ret, tree[--r]);
    }
    return ret;
  }
};
