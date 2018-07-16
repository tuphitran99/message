/*
   Tu Tran
   Programming II
   Due: July 16, 18
   UDP packet recombination
   Figure out message in packet
 */
 #include <iostream>
 #include <fstream>
 #include <string>
using namespace std;

void processData()
{
	ifstream file;
	file.open("data.txt");      // --- data file
	string st;

	while (getline(file, st))
	{
		cout << st << endl;
	}
}

int main()
{
	processData();
	return 0;
}
