struct FenwickTree {
	vector<ll> node;
	FenwickTree(ll n) : node(n + 10, 0) {}
	void update(ll pos, ll val) {
		for (; pos < node.size(); pos += pos & (-pos)) node[pos] += val;
	}
	ll get(ll pos) { 
        ll res = 0; 
        for (; pos > 0; pos -= pos & (-pos)) res += node[pos];
        return res; 
	}
};

/*
    [Problem]: https://cses.fi/problemset/task/1648 
    [Code]: https://paste.ubuntu.com/p/dXMqwkDrTQ/  
*/