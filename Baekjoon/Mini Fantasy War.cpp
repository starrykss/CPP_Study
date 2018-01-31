/*
#include <iostream>

using namespace std;

int main()
{
	int num, HP, MP, ATK, ARM, PHP, PMP, PATK, PARM;
	
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> HP >> MP >> ATK >> ARM >> PHP >> PMP >> PATK >> PARM;
		
		HP = HP + PHP;
		MP = MP + PMP;
		ATK = ATK + PATK;
		ARM = ARM + PARM;

		if (HP < 1) HP = 1;
		if (MP < 1) MP = 1;
		if (ATK < 0) ATK = 0;

		cout << (1 * HP) + (5 * MP) + (2 * ATK)+(2 * ARM) << endl;
	}

	return 0;
}
*/
