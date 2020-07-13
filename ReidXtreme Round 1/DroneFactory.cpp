#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector <string> ans;
	int t;
	cin>>t;
	for(int i = 0;i<t;i++){
		int a;
		int b;
		int p1;
		int p2;
		int n1;
		int n2;
		int X;
		cin>>a>>b>>p1>>p2;
		cin>>n1>>n2;
		cin>>X;
		//linear programming equation
		int cost = a*n1 + b*n2 + X;
		int profit = p1*n1 + p2*n2;
		
		if(profit>=cost){
			if(profit == cost){
				//cout<<"Broke Even"<<endl;
				ans.push_back("Broke Even");	
			}else{
				//cout<<"Profit"<<endl;
				ans.push_back("Profit");
			}	
		}else{
			//cout<<"Loss"<<endl;
			ans.push_back("Loss");
		}
	}
	for(int j =0;j<ans.size();j++){
		cout<<ans[j]<<endl;
	}
}

