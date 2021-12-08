#include<iostream>
using namespace std;
const int N=1005;
int T;
int n,i;
int p[N];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		if(n<=3) cout<<-1<<endl;
		else if(n==4) cout<<"3 1 4 2"<<endl;
		else {
			if(n%2==0){
				for(i=1;i<=n;i+=2)
				cout<<i<<" ";
				cout<<n-4<<" "<<n<<" "<<n-2;
				for(i=n-6;i>0;i-=2)
				cout<<" "<<i;
				cout<<endl;
			}
			else {
				for(i=1;i<=n;i+=2)
				cout<<i<<" ";
				cout<<n-3<<" "<<n-1;
				for(int i=n-5;i>0;i-=2)
				cout<<" "<<i;
				cout<<endl;
			}
		}
	}
	return 0;
	
}
