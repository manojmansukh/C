#include<iostream>
using namespace std;
class emp{
	public:
	int acc_num;
	char name[20];
	char acc_type[20];
	float bal=0.0;
	float ammount=0.0;
	 
	
	void get_details();
	void get_balance();
	void add_money();
	void show_details();
};


void emp :: get_details()
{
	cout<<"\nEnter employee number:\n";
	cin>>acc_num;
	cout<<"\nEnter employee name:\n";
	cin>>name;
	cout<<"\nEnter employee acc_type:\n";
	cin>>acc_type;
}

void emp :: get_balance()
{
	bal=bal+ammount;
	cout<<"\nBalance:"<<bal;


}

void emp :: add_money()
{ 
	cout<<"\nBalance:"<<bal;
	cout<<"if you add the money [y/n]:";
	cin>>x;
	if(x==y)
	{
		cout<<"entter the ammount you add";
		cin>>ammount;
		bal=bal+ammount;
		cout<<"balance:"<<bal;
	
	}
	
}

void emp :: show_details()
{
	cout<<"\n\n\nDetails of   :  "<<name;
	cout<<"\n\nAccount number:  "<<acc_num;
	cout<<"\nAcc Type     :  "<<acc_type;
	cout<<"\n Balance      :  "<<bal;
}
	
int main()
{
//	int ch=o;
	emp e;
	
	e.get_details();
	e.get_balance();
	e.add_money();
	
	return 0;
	
}
