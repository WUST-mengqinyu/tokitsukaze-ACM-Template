struct Discretization
{
	#define type ll
	vector<type> a;
	void init(){a.clear();}
	void add(type x){a.pb(x);}
	void work(){sort(all(a));a.resize(unique(all(a))-a.begin());}
	int get(type x){return lower_bound(all(a),x)-a.begin()+1;}
	int size(){return a.size();}
	#undef type
}di;
