#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;

int const SIZE = 60;

ifstream inFile;

void interName()
{
	char filename[SIZE];
	cout << "Enter your file's name...\n";
	cin >> filename;
	inFile.open(filename);
	
	if(!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating...\n";
		exit(EXIT_FAILURE);
	}
}

bool check()
{
	bool state = 0;//正常 
	if(inFile.eof())
	{
		cout << "End of file reached.\n";
	}
	else if(inFile.fail())
	{
		cout << "Input terminated by data mismatched.\n";
		state = true;
	}
	else
	{
		cout << "Input terminated by unknown reason.\n";
		state = true;
	}
	
	return state;
		
}

int main()
{
	
	interName();//输入文件名与文件建立输入流，注意在最后关闭流 
	
	double value;
	double sum = 0;
	int count = 0;
	while(inFile.good())
	{
		count ++ ;
		inFile >> value;
		sum += value;
	}
	
	if(check())
	{
		cout << "Program terminating...\n";
		exit(EXIT_FAILURE);
	} 
	
	if(count == 0)
	{
		cout << "No data processed.\n";
	}else
	{
		cout << "Items read : " << count << endl;
		cout << "Sum : " << sum << endl;
		cout << "Averange: " << count / sum << endl;
	}
	
	inFile.close();//关闭流 
	
	return 0;
	
} 
