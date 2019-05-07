//calculator v 1.0
//basic operations

#include "calculations.h"


int main() {

	cout << "WELCOME TO CALCULATOR!\n" << endl;

met1:
	cout << "Select operation\n" << "\nsum(+);" << "\tsub(-)" << "\tmult(*)" << "\tdiv(/)" << "\tans(^)" 
		<< "\troot(r)" << "\tdec_to_bin(d)" << "\tbin_to_dec(b)" << "\tbinary calculator(c)"
		<< endl;

	char ch;
	cout << "> ";
	cin >> ch;

	switch (ch) {
	case '+': intSum_twoVar(); break;
	case '-': intSub_twoVar(); break;
	case '*': intMult_twoVar(); break;
	case '^': asc(); break;
	case '/': div(); break;
	case 'r': root(); break;
	case 'd': dec_to_bin(); break;
	case 'b': bin_to_dec(); break;
	case 'c': dis_forBinCalc(); break;

	default:
		cout << "ERROR!\n" << "make the right choise!\n";
		goto met1;
	}
	ch = '\0';
	cout << "\nContinue the calculations(y/n)?: ";
	cin >> ch;
	if (ch == 'y')
		goto met1;
	else {
		cout << "good buy!\n";
		return 0;
	}
}