#include <iostream>
using namespace std;

class salary
{
  // class object accssible to all functions
public:
  char Employee_name[50];
  int bs,hra,otherallow,Bonus,td,sum;
  int pf,pt,ns,it,nsat;
  //member functions
  void getdata();
  void display();
  int calculate();
};

int salary :: calculate()
{
  pf=bs*12/100;
  td=pf+pt;
  sum=bs+hra+otherallow+Bonus;
  ns=sum-td;
  if(ns<=250000)
    it=0;
if(ns>250000 && ns<=500000)
      it=ns*5/100;
  if(ns>500000 && ns<=750000)
        it=ns*10/100;
  if(ns>750000 && ns<=1000000)
          it=ns*15/100;
  if(ns>1000000 && ns<=1250000)
          it=ns*20/100;
  if(ns>1250000 && ns<=1500000)
              it=ns*25/100;
  if(ns>1500000)
                it=ns*30/100;
nsat=ns-it;
}
void salary :: getdata(void)
{
    cout<<"\n";
  cout<<"<------------------------------------------------EMPLOYEE SALARY CALCULATOR-------------------------------------------->"<<endl;
    cout<<"\n";
  cout<<"\tEnter Employee Name:\t\t\t\t";
  cin.getline(Employee_name,50);

  cout<<"\tEnter Basic salary:\t\t\t\t";
  cin>>bs;

  cout<<"\tEnter House Rent Allowance:\t\t\t";
  cin>>hra;

  cout<<"\tEnter Other allowances:\t\t\t\t";
  cin>>otherallow;

  cout<<"\tEnter Bonus:\t\t\t\t\t";
  cin>>Bonus;

  cout<<"\tEnter Professional tax:\t\t\t\t";
  cin>>pt;
}

void salary :: display(void)
{
  cout<<"\n";
  cout<<"\t"<<Employee_name<<" your calculated salary statement is :"<<endl;
  cout<<"\n";
  cout<<"\tBASIC SALARY: "<<"\t\t\t\t\t"<<bs<<endl;
  cout<<"\tHouse Rent Allowance (HRA): "<<"\t\t\t"<<hra<<endl;
  cout<<"\tOther allowances: "<<"\t\t\t\t"<<otherallow<<endl;
  cout<<"\tBonus: "<<"\t\t\t\t\t\t"<<Bonus<<endl;
  cout<<"\n";
  cout<<"\tDEDUCTIONS: "<<endl;
  cout<<"\n";
  cout<<"\tProvident Fund: "<<"\t\t\t\t"<<pf<<endl;
  cout<<"\tProfessional Tax: "<<"\t\t\t\t"<<pt<<endl;
  cout<<"\t--------------------------------------------------------"<<endl;
  cout<<"\tTotal Deductions: "<<"\t\t\t\t"<<td<<endl;
  cout<<"\t--------------------------------------------------------"<<endl;
  cout<<"\tNET SALARY "<<"\t\t\t\t\t"<<ns<<endl;
  cout<<"\tIncome Tax: "<<"\t\t\t\t\t"<<it<<endl;
  cout<<"\tNet Salary Post Tax: "<<"\t\t\t\t"<<nsat<<endl;

}
int main()
  {
      salary e1,e2;
      e1.getdata();
      e1.calculate();
      e1.display();
      return 0;
  }
