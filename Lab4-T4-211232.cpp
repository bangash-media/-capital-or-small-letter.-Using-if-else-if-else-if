#include <iostream>

using namespace std;
 
//program that reads an alphabet from user and then find if it is capital letter or small letter


int main() 
{
	char alphabet;
	cout<<"\n\n\t\t\t\tAlphabets Recognizer\n\n"<<endl; //title
	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";   
	cout<<"\n\n\n\t\t\tPlease Enter your Alphabet: "; cin>>alphabet; //input from the user
	cout<<endl<<endl;
	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";   
	if (alphabet=='a'|| alphabet=='b'|| alphabet=='c'|| alphabet=='d'|| alphabet=='e'|| 
	alphabet=='f'|| alphabet=='g'|| alphabet=='h'|| alphabet=='i'|| alphabet=='j'|| 
	alphabet=='k'|| alphabet=='l'|| alphabet=='m'|| alphabet=='n'|| alphabet=='o'|| 
	alphabet=='p'|| alphabet=='q'|| alphabet=='r'|| alphabet=='s'|| alphabet=='t'|| 
	alphabet=='u'|| alphabet=='v'|| alphabet=='w'|| alphabet=='x'|| alphabet=='y'|| 
	alphabet=='z')  //first condition     
	cout<<"\n\n\n\t\t\tAlphabet \""<<alphabet<<"\" is a Small Letter";
	
	else if (alphabet=='A'|| alphabet=='B'|| alphabet=='C'|| alphabet=='D'|| alphabet=='E'|| 
	alphabet=='F'|| alphabet=='G'|| alphabet=='H'|| alphabet=='I'|| alphabet=='J'|| 
	alphabet=='K'|| alphabet=='L'|| alphabet=='M'|| alphabet=='N'|| alphabet=='O'|| 
	alphabet=='P'|| alphabet=='Q'|| alphabet=='R'|| alphabet=='S'|| alphabet=='T'|| 
	alphabet=='U'|| alphabet=='V'|| alphabet=='W'|| alphabet=='X'|| alphabet=='Y'|| 
	alphabet=='Z')  //second condition
	cout<<"\n\n\n\t\t\tAlphabet \""<<alphabet<<"\" is a Capital Letter";
 	
 	else            //third condition
 	cout<<"\n\n\n\t\t\tThe entered entity is not an Alphabet";
	
	
	return 0;
}
