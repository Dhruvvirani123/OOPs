#include<iostream>
using namespace std;
class bank
	{
		char account_holder_name[20],account_type[20];
		int account_number,balance,depo,with;
		public:
		bank()
		{
			cout<<"Enter Name : ";
			cin>>account_holder_name;
			cout<<"Enter Account Number : ";
			cin>>account_number;
			cout<<"Enter Account Type : ";
			cin>>account_type;
			cout<<"Enter Balance : ";
			cin>>balance;
		}	
		void deposit()
		{
			cout<<"\nEnter Ammount a Deposit : ";
			cin>>depo;
			
			balance = balance + depo;
			
			cout<<"\n\nDEPOSIT SUCESFULLY \n Avelebal Balance is : "<<balance;
		}
		
		void withdraw()
		{
			cout<<"\nEnter Ammount : ";
			cin>>with;
			
			if(with >= balance)
			{
				cout<<"\nAmmount Exceeded Balance";
			}
			else
			{
				balance = balance - with;
				cout<<"WITHDARWAl SUCEFULLY!!\nAvelebal Balance is : "<<balance;
			}
		}
		void inquary()
		{
			cout<<"\nName = "<<account_holder_name;
			cout<<"\nBalance = "<<balance;
		}
	};
	
	main()
	{
		int n;
		bank b1;
		
		cout<<"\nSelect Option : \n1.Deposit \n2.Withdrawal \n3.View Balance\n\n";
		cout<<"Enter Optiion : ";
		cin>>n;
		
		switch(n)
		{
			case 1:
				b1.deposit();
				break;
				
			case 2:
				b1.withdraw();
				break;
				
			case 3:
				b1.inquary();
				break;
				
			default:
				cout<<"Invalid Input!!";
		}
	}
	