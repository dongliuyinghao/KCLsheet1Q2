#include<iostream>
#include<cmath>
using namespace std;
int main() {
	/////problem 1/////
	//5��basic type
	cout << "problem 1" << endl;
	cout << "size of bool: " << sizeof(bool) << endl;
	cout << "size of char: " << sizeof(char) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;
	//int: ǰ׺��5�֣�
	cout << "size of short int: " << sizeof(short int) << endl;
	cout << "size of long long: " << sizeof(long long) << endl;
	cout << "size of long int: " << sizeof(long int) << endl;
	cout << "size of signed int: " << sizeof(signed int) << endl;
	cout << "size of unsigned int: " << sizeof(unsigned int) << endl;
	//float: ǰ׺��1�֣�
	cout << "size of long double: " << sizeof(long double) << endl << endl;



	/////Problem 2 ���ַ���characterת��Ϊ���������ֵcode vlaue/////
	cout << "Problem 2" << endl;
	char character;
	int code_value;
	cout << "Please enter any characters, we want to transfer it to computer code value: " << endl;
	cin >> character;
	code_value = (int)character;//���ַ���characterת��Ϊ���������ֵcode vlaue
	cout << "The code value of " << character << " is " << code_value << endl << endl;



	/////Problem 3 �жϡ��������ַ���Сд����Сдת����if���/////
	cout << "Problem 3" << endl;
	char char2, upperchar3, lowerchar4;
	cout << "Please enter any characters: " << endl;
	cin >> char2;
	//�������ж��⡰һ�����ַ��Ƿ�Ϊ��Сд��ĸ
	if (islower(char2))  //��islower()�������ڡ�һ�����ַ������ж��Ƿ�ΪСд����Сд�����������ֵ����true
	{
		upperchar3 = toupper(char2);  //��toupper()�������ڡ�һ�����ַ����д�дת��
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

	/////Problem 3* �ַ���string��Сдת��/////
	string str = "THIS IS A STRING";
	for (int i = 0; i < str.size(); i++) //for loopҪ��������
		str[i] = tolower(str[i]);
	cout << str<<endl<<endl;



	/////Problem 4 ��������/////
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
	int xint2 = round(x2);//ֱ����cmath����ĺ���round()
	cout << "the nearst integer of " << x2 << " is " << xint2<<endl<<endl;
	//version 3 ���������condition ? result1 : result2
	double x3;
	cout << "Version3: Please enter a decimal number, we want to print out the nearst integer: " << endl;
	cin >> x3;
	int xint3=static_cast<int>(x3);
	xint3 = (((x3 - xint3) < 0.5) ? xint3 : xint3 + 1);


	/////Problem 5/////ʯͷ�������Ĵ���Ϊ������main�����ע�ͻش����
//# include <iostream> 
//# include <cmath> 
//	using namespace std;
//	int main() {
//		int player1;       //�ȸ�player12������������
//		int player2;
//		cout << "Type 0 for stone,1 for scissors, 2 for paper \n";       //����ַ����ϲ���һ��
//		cout << "1 for scissors, 2 for paper \n";
//		cout << "Enter player 1's move \n";
//		cin >> player1;
//		cout << "Enter player 2's move \n";
//		cin >> player2;
//		if (player1 == player2) {        //��==��ʾ�Ƿ���ڣ���������=��ֵ
//			cout << "Its a draw \n";
//		}
//		else {
//
//			if ((player1 == 0) && (player2 == 1) || (player1 == 1) && (player2 == 2) || (player1 == 2) && (player2 == 0))        //�������
//         {
//				cout << "Player 1 won \n";
//			}
//			else {
//				cout << "Player 2 won \n";
//			}
//		}
//		return 0;      //����return 0; ��Ϊ��main
//	}
	return 0;
}
