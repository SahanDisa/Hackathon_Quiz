#include<iostream>
#include<string>
#include <sstream> 

using namespace std;

int main(){
	string str,output,in;
	int i,j,x=0,flag = 0;
	char temp;
	getline(cin,str);
	int a = str.length();
	
	for(i=0;i<a-1;i++){
		if(str[i+1]==':'or str[i+2]==':'){
			output.push_back(str[i]);
		}else if(str[i]=='P'){
			flag = 1;
			//in.push_back(str[i]);
		}else if(str[i]!='A'){
			in.push_back(str[i]);
		}
	}
	//cout<<output<<endl;
	stringstream geek(output);
	geek >> x; 
	//cout<<x;
	if(x<12 && flag == 1){
		x+=12;
	} 
	cout<<x<<in;

	return 0;
}
