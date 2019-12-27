#include<iostream>
#include<string>

using namespace std;

int main(){
	int flag=0,i=0,j=0;
	string str1,str2;
	getline(cin,str1);
	
	for(i=0;i<str1.length();i++){
		if(str1[i]=='='){
			flag =1; 
		}else if(str1[i]=='/'){
			if(str1[i+1]>=65 and str1[i+1]<=90){
				flag=1;
			}
		}
		//Add the Link Character to the substring
		if(flag == 1 and str1[i]!='/'){
			str2.push_back(str1[i]);
		}
	}
	cout<<str2;
	
	
	return 0;
}
