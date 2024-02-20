#include<iostream>
using namespace std;

int main(){
	int n=0;
	srand(time(nullptr));
	int guess=rand()%100+1;
	int guessed;
	
	cout<<"Enter the number b/w 1 to 100"<<endl;
	do{
		n++;
		cout<<"Enter any no."<<endl;
		cin>>guessed;
		if(guessed>guess){
			cout<<"Too high"<<endl;
		}
		else if(guessed<guess){
			cout<<"Too low";
		}
		else{
			cout<<"congrats";
		}
	}
		while(guessed != guess);
		cout<<n;
		return 0;
}
