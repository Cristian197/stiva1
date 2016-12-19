#include<iostream>

using namespace std;

class stiva

{

  int st[100];
  int valoare;
  public:
	void initializare();
	void push(int i);
	int pop();
};
void stiva::initializare()
{
 valoare=0;
}
void stiva::push(int i)
{
     if(valoare==100)
        cout<<"Stiva plina!!!";
     else
        st[valoare]=i;

     valoare++;

}
int stiva::pop()
{
	if(valoare==0)
	{
		cout<<"Stiva este vida!!";

	  return 0;

	}

	else

 valoare--;

	return st[valoare];

}

int main()

{

     stiva stiva1, stiva2;
     stiva1.initializare();
     stiva2.initializare();
     stiva1.push(3);
     stiva1.push(5);
     stiva1.push(11);
     stiva1.push(4);
     stiva2.push(8);
     stiva2.push(2);
     stiva2.push(7);
     stiva2.push(21);
	//modificare
     cout<<stiva1.pop()<<" ";
     cout<<stiva1.pop()<<" ";
     cout<<stiva1.pop()<<" ";
     cout<<endl;
     cout<<stiva2.pop()<<" ";
     cout<<stiva2.pop()<<" ";
     cout<<stiva2.pop()<<" ";



return 0;

}
