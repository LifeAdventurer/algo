#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <class T, typename Comp = std::less<T>>
using ordered_set = tree<T, null_type, Comp, rb_tree_tag, tree_order_statistics_node_update>;

template <typename K, typename V, typename Comp = std::less<K>>
using ordered_map = tree<K, V, Comp, rb_tree_tag, tree_order_statistics_node_update>;

//  auto iterator = ordered_set().find_by_order(idx); // (0-indexed)
//  int num_strictly_smaller = ordered_set().order_of_key(key);
