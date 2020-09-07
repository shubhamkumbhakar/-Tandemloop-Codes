#include <bits/stdc++.h>
using namespace std;

double result(int a, int b, string opr ){
    if(opr=="Addition"){
	    return a+b;
	}
	else if(opr=="Subtraction"){
	    return a-b;
	}
	else if(opr=="Multiplication"){
	    return a*b;
	}
	else if(opr=="Division"){
	    return a/b;
	}
	else {
	    cout<<"error";
	    return 0;
	}
}

int main() {
	double a, b;
	string opr;
	cin>>a>>b;
	cin>>opr;
	
	cout<<result(a,b,opr)<<endl;
}
