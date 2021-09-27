#ifndef ManipStr_h
#define ManipStr_h

#include <vector>
#include <cstring>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

class ManipStr
{
public:
	ManipStr();
	~ManipStr();
	//ManipStr(const char * str_o);
	void	createVector(const char * str_o);
	string	getStr();
	string	getSum();
	string	getAns();
	void	calculateSum();
	void	orderStr();
	void	createStr();
	void	clearData();
private:
	std::vector<string> numbers;
	string str;
	string sum;
};
#endif