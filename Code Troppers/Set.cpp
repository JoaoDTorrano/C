#include <bits/stdc++.h>
using namespace std;

int main()
{
	multiset<int> s;
	
	s.insert(20);
	s.insert(5);
	s.insert(5);
	s.insert(40);
	s.insert(1);
	
	//iterator
	
	set<int> :: iterator it;
	
	for(it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	
	return 0;
}