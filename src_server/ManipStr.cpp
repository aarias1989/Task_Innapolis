#include "ManipStr.h"
#include <iostream>

using namespace std;

ManipStr::ManipStr(){}
/*ManipStr::ManipStr(const char *str_o){
	str = str_o;
}*/
ManipStr::~ManipStr(){}
string 	ManipStr::getStr(){
	return str;
}
string	ManipStr::getSum(){
	return sum;
}
void	ManipStr::createVector(const char* str_o){
	string str_num;
	string str_original = str_o;
	int start = 0;
	int len = 1;
	for(int i = 0; i < strlen(str_o); i++){
		if(str_o[i] > '0' && str_o[i] <= '9'){
			start = i;
			for(int j = i + 1; j < strlen(str_o); j++)
			{
				if(str_o[j] >= '0' && str_o[j] <= '9')
				{
					len++;
				}
				else{
					break;
				}
			}
			i += len;
			numbers.push_back(str_original.substr(start, len));
			len = 1;
		}
	}
}
void	ManipStr::orderStr()
{
	sort(numbers.begin(), numbers.end(), [](const string strA, const string strB){
		if(strA.length() > strB.length())
            return false;
        else if(strA.length() < strB.length())
            return true;
        else
            return strA.compare(strB) < 0;});
}
void	ManipStr::calculateSum(){
	char sum_i[1024];
	memset(sum_i, '0', 1023);
	int start = 0;

	sum_i[1023] = '\0';
	for(auto it = numbers.begin(); it != numbers.end(); it++){
		const string str_s = *it;
		int pos = 1022;
		int over = 0;
		int sum;
		for(int i = str_s.length() - 1; i >= 0; i--){
			sum = (str_s[i] - '0') + (sum_i[pos] - '0') + over;
			if(sum >= 10)
				over = 1;
			else
				over = 0;
			sum_i[pos] = '0' + sum%10;
			pos--;
		}
		if(over == 1){
			sum_i[pos] = sum_i[pos] + 1;
		}
	}
	while(sum_i[start] == '0')
		start++;
	sum = &sum_i[start];
}
void	ManipStr::createStr(){
	string str_s;
	for(auto it = numbers.begin(); it != numbers.end(); it++){
		str_s.append(*it);
		if(str_s.length() < 1024) 
			str_s.append(" ");
	}
	str = str_s;
}
void	ManipStr::clearData(){
	numbers.clear();
}
string ManipStr::getAns(){
	string ans;
	ans.append(getStr());
	ans.append("\n");
	ans.append(getSum());
	return ans;
}