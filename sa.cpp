#include <iostream>
#include <iomanip>







using namespace std;





void matrix_aligment(string s1, string s2);



int main()
{

	string s1 = "iutiijackgurkov";

	string s2 = "iuriigurkov";

//	matrix_aligment(s1,s2);

	/*s1= "aaattaggcgtgatcgta";

	s2= "ggcgta";*/

	matrix_aligment(s2,s1);

/*	int rows = s1.length();
	int colums = s2.length();

	int array[rows][colums] = {};

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < colums; ++j)
		{
			cout<<array[i][j];
		}
		cout<<endl;
	}

*/
}





void matrix_aligment(string s1, string s2)
{
	string array[s1.length()][s2.length()] = {};
	
	cout<<setw(2)<<" ";

	for (int i = 0; i < s2.length(); ++i)
	{
		cout<<setw(2)<<s2[i];
		//array[0][i]=s2[i];
	}

	/*for (int i = 0; i < s1.length(); ++i)
	{
		
	}*/

	cout<<endl<<endl;



	for (int i = 0; i < s1.length(); ++i)
	{
		cout<<s1[i]<<" ";
		array[i][0]=s1;

		for (int j = 0; j < s2.length(); ++j)
		{
			if(s1[i]==s2[j])
			{	
				cout<<setw(2)<<s1[i];
				array[i][j]=s1[i];
			}
			else
			{	cout<<setw(2)<<"*";
				array[i][j]="*";
			}
		}
		
		cout<<endl;
	}

		cout<<endl<<endl;


		for (int i = 0; i < s1.length(); ++i)
		{
			for (int j = 0; j < s2.length(); ++j)
			{
				cout<<setw(2)<<array[i][j];
			}
			cout<<endl;
		}


	
		string option1s1=s1;
		string option1s2=s2;

		cout<<option1s1<<endl<<option1s2<<endl;






}