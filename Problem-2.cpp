#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x; cin>>x;
	vector<int> v;
	for(int i=0;i<x;i++){
	    v.push_back(2*i+1);
	}
	
	for(int i=0;i<v.size();i++){
	    cout<<v[i]<<" ";
	}
}
