#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	char temp;
	int i;
	getline(cin, str); 
	int a = str.length();
    for(i=0;i<a;i++){
    	if(i==0){
    		temp = str[i];
    		cout<<str[i+1];
		}else if(str[i+1]== ' ' or str[i+1]== NULL){
			cout<<temp<<"ay"<<" ";
			temp = str[i+2];
		}else if(str[i]==' '){
			cout<<str[i+2];
			i++;
		}else{
			cout<<str[i+1];
		}
	}
	return 0;
}
