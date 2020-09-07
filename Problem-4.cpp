#include <iostream>
using namespace std;

int countMultiples(int arr[], int n, int x){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%x==0){
            count++;
        }
    }
    return count;
}


int main() {
	int n; cin>>n;
	int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
	
	for(int i=0;i<9;i++){
	   cout<<i+1<<":"<<countMultiples(arr,n,i+1)<<endl;
	}
}
