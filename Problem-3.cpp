#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x; cin>>x;
	vector<int> v;
	for(int i=0;i<x;i++){
	      v.push_back(2*i+1);
	}
	vector<int> v1;
	for(int i=0;i<x;i++){
	    if(i==0){
	        v1.push_back(v[i]);
	    }
	    else if(i%2==0 && i>0){
	      v1.push_back(v[i-1]);
	      v1.push_back(v[i]);
	    }
	    else
	      continue;
	}
	
	for(int i=0;i<v1.size();i++){
	    cout<<v1[i]<<" ";
	}
}
