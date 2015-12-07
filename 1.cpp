#include <unordered_map>  
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>


using namespace std;

int main()
{
	std::tr1::unordered_map<string, int> strmap;
	std::tr1::unordered_map<int, vector<int> > intmap;
	int N; cin >> N;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (strmap.find(s) != strmap.end()) // != end means there is a match
		{
			int first = strmap[s];
			if (intmap.find(first) != intmap.end()) {
				intmap[first].push_back(i);
			}
			else {
				vector<int> temp;
				temp.push_back(first);
				temp.push_back(i);
				intmap[first] = temp;
			}
		}
		else {
			strmap[s] = i;
		}
	}
	vector<int> v;
	for (std::tr1::unordered_map<int, vector<int> >:: iterator it = intmap.begin(); it != intmap.end(); it++) {
		v.push_back(it->first);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		// cout << intmap[v[i]][0];
		for (int j = 0; j < intmap[v[i]].size(); j++) {
			cout << intmap[v[i]][j]<<" ";
		}
		cout << endl;
	}

	if(intmap.size() == 0)
	{
		cout << "-1";
	}
	
	system("pause");
	return 0;
}