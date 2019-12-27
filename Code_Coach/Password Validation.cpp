#include<iostream>
#include<string>

using namespace std;

int main(){
	int count_num = 0,count_special = 0;
	string str;
	getline(cin,str);
	
	for(int i =0; i<str.length();i++){
		if(str[i]>=33 and str[i]<=64){
			if(str[i]>=48 and str[i]<=56){
				count_num++;
			}else{
				count_special++;
			}
		}
	}
	if(count_num>= 2 and count_special>= 2 and str.length()>=7){
		cout<<"Strong";
	}else{
		cout<<"Weak";
	}
	//cout<<"\n"<<count_num<<" "<<count_special<<" "<<str.length();
	
	return 0;
}
