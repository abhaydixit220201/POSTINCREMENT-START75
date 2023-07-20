#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int s=(x-y);
        int p =(((x*10)/100)+x);
        cout<<(p-s)<<endl;
    }
	// your code goes here
	return 0;
}
