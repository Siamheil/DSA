#include<iostream>
#include<stack>
using namespace std;

bool checkParenthetis(string str){
	stack<char>s;
	for(int i=0;i<str.size();i++){
		//opening
		if(str[i]=='('){
			s.push(str[i]);
		}
		else{
			if(s.empty())
			return 0;
			else
			s.pop();
		}
	}
	return s.empty();
	
}

int main(){
	string str = "((())";
	cout<<checkParenthetis(str)<<endl;
	return 0;
}
