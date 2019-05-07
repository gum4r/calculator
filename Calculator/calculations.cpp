#include "calculations.h"


//intSum_twoVar;
void intSum_twoVar(){
	int a, b;
	cout << "Enter two variable\n";
	cout << ">";
	cin >> a;
	cout << "\n>";
	cin >> b;
	cout << "sum =  " << a + b;
}

//intSub_twoVar
void intSub_twoVar() {
	int a, b;
	cout << "Enter two variable\n";
	cout << ">";
	cin >> a;
	cout << "\n>";
	cin >> b;
	cout << "sub = " << a - b;
}

//intMult_twoVar
void intMult_twoVar() {
	int a, b;
	cout << "Enter two variable\n";
	cout << ">";
	cin >> a;
	cout << "\n>";
	cin >> b;
	cout << "mult = " << a * b;
}

//div
void div() {
	float a, b;
met2:
	cout << "Enter two variable\n";
	cout << ">";
	cin >> a;
	cout << "\n>";
	cin >> b;
	if (b > 0) {
		cout << "div = " << a / b;
	}
	else {
		cout << "ERROR!" << "\nSecond variable < or = 0" << "\ntry typing again.\n";
		goto met2;
	}	
}

//asc
void asc() {
	int a, b;
	cout << "Enter two variable\n";
	cout << "number>";
	cin >> a;
	cout << "\nexponent>";
	cin >> b;
	int ans = 1;
	for (int i = 0; i < b; i++)
		ans *= a;
	cout << "> " << ans;
}



//root
void root() {
	float ex;					//степень корня
	float num;					//число под крнем
	float ans;
	cout << "Enter exponent and value\n";
	cin >> ex >> num;

	ans = pow(num, 1 / ex);
	
	std::cout << "> " << ans;
}




//--------------------------------------------
//СИСТЕМЫ СЧИСЛЕНИЯ
//--------------------------------------------

//dec_to_bin
void dec_to_bin() {

	cout << "Enter decimal number: ";
	vector<int> bin;
	int num;
	int ost = 0;

	cin >> num;

	while (num >= 1) {
		ost = num % 2;

		if (ost > 0) {
			ost = 1;
			bin.push_back(ost);
		}
		else if (ost == 0) {
			ost = 0;
			bin.push_back(ost);
		}
		num = num / 2;
	}

	//переворот и вывод
	std::reverse(bin.begin(), bin.end());
	cout << "\n>: ";
	for (int x : bin) cout << x;
}

//bin_to_dec 
void bin_to_dec() {
	
	//ввод строки(бинарного числа) и преобразование в число в vector<int>bin
	std::string str;
	vector<int> bin;			//бинарные числа тут
	cout << "Enter binary number:\n>";
	cin >> str;
	//перевод строки в вектор
	std::vector<int> numbers(str.begin(), str.end());

	//перезаписать вектор из кодов в числа
	for (int i = 0; i < numbers.size(); i++) {
		int j;
		j = numbers[i];
		if (j == 49)
			bin.push_back(1);
		else if (j == 48)
			bin.push_back(0);
	}

	std::reverse(bin.begin(), bin.end());	//для правильной индексации элементов вектора 

	//вычисления
	int ex;
	int num;
	int ans;
	vector<int> act;  //для хранения промежуточных результатов ans

	for (int i = 0; i < bin.size(); i++) {
		ex = i;
		num = bin[i];
		ans = num * asc(ex);
		act.push_back(ans);
	}

	int sum = 0;
	for (std::vector<int>::iterator it = act.begin(); it != act.end(); ++it)
		sum += *it;

	cout << "> = " << sum;
}

//функция для возведения 2 в степень
int asc(int ex) {
	int ans = 1;
	for (int i = 0; i < ex; i++)
		ans *= 2;
	return ans;
}


void dis_forBinCalc() {
met3:
	cout << "\nSelect operation\n" << "\tsum(+)" << "\tsub(-)" << "\tmult(*)" << "\tdiv(/)";
	char ch;
	cout << "\n> ";
	cin >> ch;

	switch (ch) {
	case '+': bin_sum(); break;
	case '-': bin_sub(); break;
	case '*': bin_mult(); break;
	case '/': bin_div(); break;
	default:
		cout << "ERROR!\n" << "make the right choise!\n";
		goto met3;
	}
}

int asc_bin(int ex) {
	int ans = 1;
	for (int i = 0; i < ex; i++)
		ans *= 2;
	return ans;
}

int bin_to_dec_for_bin_calc(std::string str) {
	//ввод строки(бинарного числа) и преобразование в число в vector<int>bin
	vector<int> bin;			//бинарные числа тут
	//перевод строки в вектор
	std::vector<int> numbers(str.begin(), str.end());
	//перезаписать вектор из кодов в числа
	for (int i = 0; i < numbers.size(); i++) {
		int j;
		j = numbers[i];
		if (j == 49)
			bin.push_back(1);
		else if (j == 48)
			bin.push_back(0);
	}
	std::reverse(bin.begin(), bin.end());	//для правильной индексации элементов вектора 
	//вычисления
	int ex;
	int num;
	int ans;
	vector<int> act;  //для хранения промежуточных результатов ans

	for (int i = 0; i < bin.size(); i++) {

		ex = i;
		num = bin[i];
		ans = num * asc_bin(ex);
		act.push_back(ans);
	}

	int sum = 0;
	for (std::vector<int>::iterator it = act.begin(); it != act.end(); ++it)
		sum += *it;
	return sum;
}
//dec_to_bin
std::vector<int> dec_to_bin_for_bin_calc(int num) {

	vector<int> bin;
	int ost = 0;

	while (num >= 1) {
		ost = num % 2;

		if (ost > 0) {
			ost = 1;
			bin.push_back(ost);
		}
		else if (ost == 0) {
			ost = 0;
			bin.push_back(ost);
		}
		num = num / 2;
	}
	//переворот и вывод
	std::reverse(bin.begin(), bin.end());
	return bin;
	//for (int x : bin) return x;
}

void bin_sum() {

	std::string snum1;
	std::string snum2;
	cout << "Enter two  binary variable: \n>";
	cin >> snum1;
	cout << "\n>";
	cin >> snum2;
	int num1 = bin_to_dec_for_bin_calc(snum1);
	int num2 = bin_to_dec_for_bin_calc(snum2);
	int sum = num1 + num2;
	vector<int> bin_sum = dec_to_bin_for_bin_calc(sum);
	cout << "\nsum bin: ";
	for (int x : bin_sum) cout << x;
}

void bin_sub() {
	std::string snum1;
	std::string snum2;
	cout << "Enter two  binary variable: \n>";
	cin >> snum1;
	cout << "\n>";
	cin >> snum2;
	int num1 = bin_to_dec_for_bin_calc(snum1);
	int num2 = bin_to_dec_for_bin_calc(snum2);
	int sum = num1 - num2;
	vector<int> bin_sum = dec_to_bin_for_bin_calc(sum);
	cout << "\nsub bin: ";
	for (int x : bin_sum) cout << x;
}

void bin_mult() {
	std::string snum1;
	std::string snum2;
	cout << "Enter two  binary variable: \n>";
	cin >> snum1;
	cout << "\n>";
	cin >> snum2;
	int num1 = bin_to_dec_for_bin_calc(snum1);
	int num2 = bin_to_dec_for_bin_calc(snum2);
	int sum = num1 * num2;
	vector<int> bin_sum = dec_to_bin_for_bin_calc(sum);
	cout << "\nsub bin: ";
	for (int x : bin_sum) cout << x;
}

void bin_div() {
	std::string snum1;
	std::string snum2;
	cout << "Enter two  binary variable: \n>";
	cin >> snum1;
	cout << "\n>";
	cin >> snum2;
	int num1 = bin_to_dec_for_bin_calc(snum1);
	int num2 = bin_to_dec_for_bin_calc(snum2);
	int sum = num1 / num2;
	vector<int> bin_sum = dec_to_bin_for_bin_calc(sum);
	cout << "\nsub bin: ";
	for (int x : bin_sum) cout << x;
}