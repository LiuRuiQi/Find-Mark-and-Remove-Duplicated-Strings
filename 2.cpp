#include <unordered_map>  
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
	std::tr1::unordered_map<string, int> strmap;
	std::tr1::unordered_map<int, vector<int> > intmap;
	
	ofstream out("output.txt");
	ifstream in("input.txt");
	string s;
	int i = 0;
	
	while(getline(in,s)) {
		if (strmap.find(s) != strmap.end()) // != end 就是在strmap中找到该元素
		{
			++i;
		}
		else {
			strmap[s] = i++;
			out<<s<<endl;
		}
	}
	
	return 0;
}