#include<iostream>

using namespace std;

int main(int ac,  char **av)
{
	if(ac > 1) {
		for(int i = 1; i < ac; i++) {
			for(int j = 0; av[i][j]; j++) {
				cout << static_cast<char>(toupper(av[i][j]));
			}
			cout << " ";
		}
		cout << endl;
	}
	else {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	}
}