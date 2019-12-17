#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int i,j,flag=0;
	char temp;
	getline(cin,str);
	int a = str.length();
	
	for(i=0;i<a;i++){
		temp = str[i];
		for(j=i+1;j<a;j++){
			if(temp == str[j]){
				cout<<"Deja Vu"<<endl;
				flag = 1;
				break;
			}
		}
		if(flag){
			break;
		}
	}

	return 0;
}
