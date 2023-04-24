#include <iostream>
#include "Signer.h"
#include <typeinfo>

using std::cout;
using std::endl; 

void SignerInfo() {

	Signer sign_obj; 

}

void Getfilehash() {

}

void help() {
	cout << "Usage:" << endl;
	cout << "PEViewer [/hash | /signer | /header | /size | /sections | /all] <sample>" << endl;
	exit(0); 
}

void parsecmd(char *argv[]) {
	/* code below to check type of var passed to argv[]. It's char * 
	const std::type_info& ai = typeid(argv[1]);
	printf("a: %p | %s\n", &ai, ai.name());
	*/

	char* flag = argv[1];

	switch(*flag){
		case '/ header':
			cout << "/header flag chosen" << endl;
			//getheaderinfo();
			break;
		case "/signer":
			cout << "Signer flag chosen" << endl; 
			//signerinfo();
			break;
		case "/hash":
			cout << "Hashing file ..." << endl;
			Getfilehash(); 
			break;
		default:
			cout << "Incorrect flag..exiting.." << endl; 
	}


}
int main(int argc, char *argv[]) {
	
	if (argc <= 1) {
		help();
	}
	
	parsecmd(argv);


}