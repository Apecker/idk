#include <iostream>
#include <fstream>
#include <string>

#include "../headers/save.h"

using namespace std;

int save()
{
	ofstream save;
	save.open ("save.txt");
	save << "test" << endl;
	save.close();
    return 0;
}

int load()
{
	string line;
	int line_no = 0;


	    ifstream save ("save.txt");
	    if (save.is_open())
	    {
	    	while (line_no != 2 && getline(save, line))
	    	{
	    	    ++line_no;
	    	}

			if (line_no == 2)
			{
				cout << line << endl;
			}

			else
			{
				cout << "The file contains fewer than two lines." << endl;
			}

	      save.close();
	    }

	  else cout << "Unable to open file";
	return 0;
}
