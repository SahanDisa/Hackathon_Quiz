#include<iostream>
#include<string>

using namespace std;

int main(){
	int guard_flag = 0, theif_flag = 0, money_flag = 0;
	int order = 0;
	string str;
	getline(cin,str);
	
	for(int i =0; i<str.length();i++){
		if(str[i]=='G'){
			guard_flag = ++order;
		}else if(str[i] == '$'){
			money_flag = ++order;
		}else if(str[i] == 'T'){
			theif_flag = ++order;
		}
	}
	
	//combinations of ALERT 
	// T M G 
	// 1 2 3
	// 2 3 1
	// 2 1 3
	// 3 2 1
	//COMBINATION FOR QUIET
	// T M G
	// 3 1 2
	// 1 3 2
	
	//there can be n Guards so we need to thought for optimal solution
	if((guard_flag > money_flag and guard_flag < theif_flag) or (guard_flag < money_flag and guard_flag > theif_flag)){
		cout<<"quiet";
	}else{
		cout<<"ALARM";
	}
	//cout<<"\nT :"<<theif_flag<<" M : "<<money_flag<<" G : "<<guard_flag;
	return 0;
}
