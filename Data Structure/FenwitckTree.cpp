struct FenwickTree {
	vector<ll> node;
	FenwickTree(ll n) : node(n + 2, 0) {}
	void update(ll pos, ll dif) {
		for (; pos < node.size(); pos += pos & (-pos)) node[pos] += dif;
	}
	ll get(ll pos) { 
        ll res = 0; 
        for (; pos > 0; pos -= pos & (-pos)) res += node[pos];
        return res; 
	}
};