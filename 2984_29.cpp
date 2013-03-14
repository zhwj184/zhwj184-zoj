#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	string country[9] = { "cs","en","fr","de","hu","it","jp","pl","es"};
	string rock[9] = {"Kamen","Rock","Pierre","Stein","Ko","Sasso","Guu","Kamien","Piedra"};
	string sci[9] = {"Nuzky","Scissors","Ciseaux","Schere","Ollo","Forbice","Choki","Nozyce","Tijera"};
	string paper[9] = {"Papir","Paper","Feuille","Papier","Papir","Carta","Paa","Papier","Papel"};
	int s1,s2;
	string n1,n2;
	string c1,c2;
	int score1,score2;
	int T=1;
	int i;
			
	/*for(i = 0; i < 9; i++)
	{
		cout << i << "  " << country[i] << "        " << rock[i] << "        " << sci[i] << "     " << paper[i] << endl;
	}*/
	int flag = 0;
	while(cin >> c1)
	{
		if(c1.compare(".") == 0)
			break;
		//if(T > 1)
		//	cout << endl;
		cin >> n1 ;
		cin >> c2 >> n2;
		for(i = 0; i < 9; i++)
		{
				if(c1.compare(country[i]) == 0)
					s1 = i;
				if(c2.compare(country[i]) == 0)
					s2 = i;
		}	
		
	//	cout << c1 << " " << s1  << endl;
	//	cout << c2 << " " << s2  << endl;
			   
		score1 = 0;
		score2 = 0;
		string t1,t2;
		while(cin >> t1)
		{
			if(t1.compare("-") == 0) 
				break;
			if(t1.compare(".") == 0)
			{
				flag = 1;
				break;
			}
			cin >> t2;
			int num1 = 0,num2 = 0;
			if(t1.compare(rock[s1]) == 0)
				num1 = 0;
			if(t1.compare(sci[s1]) == 0)
				num1 = 1;
			if(t1.compare(paper[s1]) == 0)
				num1 = 2;
			if(t2.compare(rock[s2]) == 0)
				num2 = 0;
			if(t2.compare(sci[s2]) == 0)
				num2 = 1;
			if(t2.compare(paper[s2]) == 0)
				num2 = 2;
			if(s1 == 4)
			{
				if(t1.compare("Koe") == 0)
					num1 = 0;
				if(t1.compare("Olloo") == 0)
					num1 = 1;				
			}
			if(s1 == 5)
			{
				if(t1.compare("Roccia") == 0)
					num1 = 0;
				if(t1.compare("Rete") == 0)
					num1 = 2;				
			}
			if(s2 == 4)
			{
				if(t2.compare("Koe") == 0)
					num2 = 0;
				if(t2.compare("Olloo") == 0)
					num2 = 1;				
			}
			if(s2 == 5)
			{
				if(t2.compare("Roccia") == 0)
					num2 = 0;
				if(t2.compare("Rete") == 0)
					num2 = 2;				
			}
			if((num1 == 0 && num2 == 1) || (num1 == 1 && num2 == 2) || (num1 == 2 && num2 == 0))
				score1++;
			if((num2 == 0 && num1 == 1) || (num2 == 1 && num1 == 2) || (num2 == 2 && num1 == 0))
				score2++;
		//	cout << " num1 num2 " << num1 << "  " << num2 << endl;
		}		
		cout << "Game #" << T << ":" << endl;
		cout << n1 << ": " << score1 << " " << (score1 != 1 ? "points":"point") << endl;
		cout << n2 << ": " << score2 << " " << (score2 != 1 ? "points":"point") << endl;
		if(score1 == score2)
			cout << "TIED GAME" << endl;
		else 
			cout << "WINNER: " << (score1 > score2 ? n1: n2) << endl;
		T++;
		cout << endl;
		if(flag == 1)
			break;
			//return 0;
	
	}
}
