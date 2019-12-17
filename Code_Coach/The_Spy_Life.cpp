#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int i,temp=0;
	string output;
	getline(cin,str);
	int a = str.length();
	
	for(i=0;i<a;i++){
		if(str[i]>65 && str[i]<128){
			//output[temp++]=str[i];
			output.push_back(str[i]);
		}else if(str[i]==' '){
			//output[temp++]=str[i];
			output.push_back(str[i]);
		}
	}
	//cout<<output<<endl;
	std::string::reverse_iterator it1; 
	for (it1=output.rbegin(); it1!=output.rend(); it1++) 
    cout << *it1;
	return 0;
}
