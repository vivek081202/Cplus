#include <iostream>
using namespace std;
int price;
class fruit_store
{
public:
  char name[30],address[100],mobileno[11];
  int list[10],qty,i,c,n;
  int fruit, price_arr[10],qty_arr[10];
  string fruit_name[10];
  void get_details();
  void choice_calc();
  void display1();
  void display2();
};

void fruit_store :: get_details()
{
  cout<<"   Enter your Name: ";
  cin.getline(name,30);
  cout<<"   Phone Number: ";
  cin.getline(mobileno,11);
  cout<<"   Your Address: ";
  cin.getline(address,100);
}
void fruit_store :: choice_calc()
{
  cout<<"Srno.    FRUIT      (Kg/Pcs/Box/Dozens)"<<endl;
  cout<<" 1.      Apple             (50)"<<endl;
  cout<<" 2.      Banana            (40)"<<endl;
  cout<<" 3.      Grapes            (60)"<<endl;
  cout<<" 4.      Guava             (30)"<<endl;
  cout<<" 5.      Kiwi              (10)"<<endl;
  cout<<" 6.      Musk melon        (45)"<<endl;
  cout<<" 7.      Pine apple        (25)"<<endl;
  cout<<" 8.      Pomogranate       (70)"<<endl;
  cout<<" 9.      Strawberry        (70)"<<endl;
  cout<<" 10.     Watermelon        (50)"<<endl;
  cout<<" 0.      No Fruit              "<<endl;
  cout<<"\n";


  c=0;
  while(fruit!=0)
  {
    cout<<" Enter the choice which fruit you want: ";
    cin>>fruit;

    if (fruit==1)
    {
      fruit_name[c]="Apple";
      cout<<" How many apples you want(per Kg): ";
      cin>>qty;
      cout<<"\n";
      price= 50*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==2)
    {
      fruit_name[c]="Banana";
      cout<<" How many apples you want(per Dozen): ";
      cin>>qty;
        cout<<"\n";
      price= 40*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==3)
    {
      fruit_name[c]="Grapes";
      cout<<" How many apples you want(per Kg): ";
      cin>>qty;
        cout<<"\n";
      price= 60*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==4)
    {
      fruit_name[c]="Guava";
      cout<<" How many apples you want(per Kg): ";
      cin>>qty;
        cout<<"\n";
      price= 30*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==5)
    {
      fruit_name[c]="Kiwi";
      cout<<" How many apples you want(per Piece): ";
      cin>>qty;
        cout<<"\n";
      price= 10*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==6)
    {
      fruit_name[c]="Musk Melon";
      cout<<" How many apples you want(per Kg ): ";
      cin>>qty;
        cout<<"\n";
      price= 45*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==7)
    {
      fruit_name[c]="Pine Apple";
      cout<<" How many apples you want(per Piece): ";
      cin>>qty;
        cout<<"\n";
      price= 25*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==8)
    {
      fruit_name[c]="Pomogranate";
      cout<<" How many apples you want(per Kg): ";
      cin>>qty;
        cout<<"\n";
      price= 70*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==9)
    {
      fruit_name[c]="Strawberry";
      cout<<" How many apples you want(per Box): ";
      cin>>qty;
        cout<<"\n";
      price= 70*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    if (fruit==10)
    {
      fruit_name[c]="Watermelon";
      cout<<" How many apples you want(per Kg): ";
      cin>>qty;
        cout<<"\n";
      price= 50*qty;
      qty_arr[c]=qty;
      price_arr[c]=price;
    }
    c++;
  }
}
void fruit_store :: display1()
{
  int total=0;
  for(int i=0;i<c-1;i++)
  {
    cout<<"    "<<(i+1)<<"\t\t"<<fruit_name[i]<<"\t\t"<<qty_arr[i]<<"\t"<<price_arr[i]<<endl;
    total=total+price_arr[i];
  }
    cout<<"   ------------------------------------------"<<endl;
    cout<<"\tTOTAL =                          "<<total<<endl;
    cout<<"   ------------------------------------------"<<endl;
}
void fruit_store :: display2()
{
  cout<<"   NAME:    "<<name<<endl;
  cout<<"   CONTACT: "<<mobileno<<endl;
  cout<<"   ADDRESS: "<<address<<endl;
}
int main()
  {
    fruit_store f1;
    cout<<"   Welcome to FRUIT WORLD"<<endl;
    cout<<"   Choose Your choice from below avaliable fruits (Bill for 1kg+ only)"<<endl;
    cout<<endl<<"\n";
    f1.get_details();
    cout<<"\n";
    f1.choice_calc();
    cout<<"\n";
    cout<<"   BILL DETAILS "<<endl;
    cout<<"\n";
    f1.display2();
    cout<<"\n";
    cout<<"   ------------------------------------------"<<endl;
    cout<<"   Srno.         Fruits        QTY        Price "<<endl;
    cout<<"   ------------------------------------------"<<endl;
    f1.display1();
    cout<<"\n";
    return 0;
  }
