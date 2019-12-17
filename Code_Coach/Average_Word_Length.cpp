#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int i,j,count=0;
	char temp;
	getline(cin,str);
	int a = str.length();
	
	for(i=0;i<a;i++){
		if(str[i]==' '){
			count++;
		}
	}
	cout<<(a-count)/count;

	return 0;
}
