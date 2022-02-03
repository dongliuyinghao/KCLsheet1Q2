#include<iostream>
#include<cmath>
using namespace std;
int main() {
	/////problem 1/////
	//5个basic type
	cout << "problem 1" << endl;
	cout << "size of bool: " << sizeof(bool) << endl;
	cout << "size of char: " << sizeof(char) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;
	//int: 前缀（5种）
	cout << "size of short int: " << sizeof(short int) << endl;
	cout << "size of long long: " << sizeof(long long) << endl;
	cout << "size of long int: " << sizeof(long int) << endl;
	cout << "size of signed int: " << sizeof(signed int) << endl;
	cout << "size of unsigned int: " << sizeof(unsigned int) << endl;
	//float: 前缀（1种）
	cout << "size of long double: " << sizeof(long double) << endl << endl;



	/////Problem 2 把字符串character转化为计算机代码值code vlaue/////
	cout << "Problem 2" << endl;
	char character;
	int code_value;
	cout << "Please enter any characters, we want to transfer it to computer code value: " << endl;
	cin >> character;
	code_value = (int)character;//把字符串character转化为计算机代码值code vlaue
	cout << "The code value of " << character << " is " << code_value << endl << endl;



	/////Problem 3 判断“单个”字符大小写，大小写转换；if语句/////
	cout << "Problem 3" << endl;
	char char2, upperchar3, lowerchar4;
	cout << "Please enter any characters: " << endl;
	cin >> char2;
	//接下来判断这“一个”字符是否为大小写字母
	if (islower(char2))  //用islower()对括号内“一个”字符进行判断是否为小写，是小写——输出非零值——true
	{
		upperchar3 = toupper(char2);  //用toupper()对括号内“一个”字符进行大写转换
		cout << "The upper case character corresponding to " << char2 << " is " << upperchar3 << endl;
	}
	else if (isupper(char2))
	{
		lowerchar4 = tolower(char2);
		cout << "The lower case character corresponding to " << char2 << " is " << lowerchar4 << endl;
	}
	else
	{
		cout << char2 << " is not a letter" << endl;
	}

	/////Problem 3* 字符串string大小写转换/////
	string str = "THIS IS A STRING";
	for (int i = 0; i < str.size(); i++) //for loop要熟练操作
		str[i] = tolower(str[i]);
	cout << str<<endl<<endl;



	/////Problem 4 四舍五入/////
	//version 1 static_cast<>()
	cout << "Problem 3" << endl;
	double x;
	cout << "Version1: Please enter a decimal number, we want to print out the nearst integer: "<<endl;
	cin >> x;
	int xint = static_cast<int>(x);
	if (x-xint<0.5)
	{
		cout << "the nearst integer of "<<x<<" is "<<xint<<endl;
	}
	else
	{
		cout<< "the nearst integer of " << x << " is " << xint+1<<endl<<endl;
	}
	//version 2 cmath
	double x2;
	cout << "Version2: Please enter a decimal number, we want to print out the nearst integer: " << endl;
	cin >> x2;
	int xint2 = round(x2);//直接用cmath包里的函数round()
	cout << "the nearst integer of " << x2 << " is " << xint2<<endl<<endl;
	//version 3 条件运算符condition ? result1 : result2
	double x3;
	cout << "Version3: Please enter a decimal number, we want to print out the nearst integer: " << endl;
	cin >> x3;
	int xint3=static_cast<int>(x3);
	xint3 = (((x3 - xint3) < 0.5) ? xint3 : xint3 + 1);


	/////Problem 5/////石头剪刀布改错，因为里面有main因此用注释回答此题
//# include <iostream> 
//# include <cmath> 
//	using namespace std;
//	int main() {
//		int player1;       //先给player12定义数据类型
//		int player2;
//		cout << "Type 0 for stone,1 for scissors, 2 for paper \n";       //输出字符串合并到一句
//		cout << "1 for scissors, 2 for paper \n";
//		cout << "Enter player 1's move \n";
//		cin >> player1;
//		cout << "Enter player 2's move \n";
//		cin >> player2;
//		if (player1 == player2) {        //用==表示是否等于，而不是用=赋值
//			cout << "Its a draw \n";
//		}
//		else {
//
//			if ((player1 == 0) && (player2 == 1) || (player1 == 1) && (player2 == 2) || (player1 == 2) && (player2 == 0))        //定义规则
//         {
//				cout << "Player 1 won \n";
//			}
//			else {
//				cout << "Player 2 won \n";
//			}
//		}
//		return 0;      //加上return 0; 因为是main
//	}
	return 0;
}
