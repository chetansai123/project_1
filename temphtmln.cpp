#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#define MAX 4
using namespace std;
int s[4],d[4],k[4],q[4];
string type[4]={"1.single_bed -:5000 INR/d","2.double_bed -:7000 INR/d","3.queen_sized -:10000 INR/d","4.king_sized -:10000 INR/d"};
class bookings
{
    public: virtual void instal()=0;
    public: virtual int is_avail(int)=0;
    public: virtual void available_rooms()=0;
    public: virtual void room_booking()=0;
    public: virtual void table_booking_in_restaurent()=0;
    public: virtual void meeting_hall_bookings()=0;
};
class services:public bookings
{
    public: virtual void Private_chef_and_butler_service()=0;
    public: virtual void Maid_Service()=0;
    public: virtual void In_villa_dining()=0;
    public: virtual void queiries_and_complaints()=0;
    public: virtual void biling()=0;
};
class Hotelmanagement:public services
{
public:int is_avail(int n)
{
    int sum=0;
    if(n==1)
    {
        for(int i=0;i<MAX;i++)
        {
            sum=sum+s[i];
        }
    }
    else if(n==2)
    {
        for(int i=0;i<MAX;i++)
        {
            sum=sum+d[i];
        }
    }
    else if(n==3)
    {
        for(int i=0;i<MAX;i++)
        {
            sum=sum+q[i];
        }
    }
    else
    {
        for(int i=0;i<MAX;i++)
        {
            sum=sum+k[i];
        }
    }
    if(sum==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
    public : void instal()
    {
    int si=100,di=200,ki=400,qi=300,t=1;
    for(int i=0;i<MAX;i++)
    {
        s[i]=si+t;
        d[i]=di+t;
        q[i]=qi+t;
        k[i]=ki+t;
        t++;
    }
    cout<<"\n congratulation you had successfully installed"<<endl;
    cout<<"\n__________________________________________\n";

    }
    public : void available_rooms()
    {
        cout<<"\n______________________________________________________________\n";
         for(int i=0;i<MAX;i++)
    {
        cout<<type[i]<<" rooms are :";
        if(i==0)
        {
            for(int c=0;c<MAX;c++)
            {
                if(s[c]!=0){
                cout<<"| "<<s[c]<<" |";
                }
            }
            cout<<endl;
        }
        if(i==1)
        {
            for(int c=0;c<MAX;c++)
            {
                if(d[c]!=0){
                cout<<"| "<<d[c]<<" |";
                }
            }
            cout<<endl;
        }
        if(i==2)
        {
            for(int c=0;c<MAX;c++)
            {
                if(q[c]!=0){
                cout<<"| "<<q[c]<<" |";
                }
            }
            cout<<endl;
        }
        if(i==3)
        {
            for(int c=0;c<MAX;c++)
            {
                if(k[c]!=0){
                cout<<"| "<<k[c]<<" |";
                }
            }
            cout<<endl;
        }
            cout<<"_______________________________________________________________\n";
    }
    }
    public : void room_booking()
    {
        int c,r,temp;
        while(1)
        {
        cout<<"\n";
        for(int l=0;l<MAX;l++)
        {
            cout<<type[l]<<endl;
        }
        cout<<"choose the category :"<<endl;
        cin>>c;
        cout<<"\n__________________________________________\n";

        if(is_avail(c))
        {
        cout<<"\n| 0."<<c<<"01 |"<<"| 1."<<c<<"02 |"<<"| 2."<<c<<"03 |"<<"| 3."<<c<<"04 |"<<endl;
        cout<<"choose room in(0 to 3):"<<endl;
        cin>>r;
            cout<<"\n__________________________________________\n";
        if(c==1)
        {
        temp=s[r];
        if(temp==0)
        {
            cout<<"\nthis room is booked please select another room"<<endl;
        }
        else{
            cout<<"\nyou had alloted with a single bed room no :"<<s[r];
            cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
            cout<<"\n__________________________________________\n";
            s[r]=0;
            break;
        }
        }
        else if(c==2)
        {
        temp=d[r];
        if(temp==0)
        {
            cout<<"\nthis room is booked please select another room"<<endl;
        }
        else{
            cout<<"\nyou had alloted with a double bed room no :"<<d[r];
            cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
            cout<<"\n__________________________________________\n";
            d[r]=0;
            break;
        }
        }
        else if(c==3)
        {
        temp=q[r];
        if(temp==0)
        {
            cout<<"\nthis room is booked please select another room"<<endl;
        }
        else{
            cout<<"\nyou had alloted with a single bed room no :"<<s[r];
            cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
            cout<<"\n__________________________________________\n";
            q[r]=0;
            break;
        }
        }
        else
        {
        temp=k[r];
        if(temp==0)
        {
            cout<<"\nthis room is booked please select another room"<<endl;
        }
        else
        {
            cout<<"\nyou had alloted with a single bed room no :"<<s[r];
            cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
            cout<<"\n__________________________________________\n";
            k[r]=0;
            break;
        }
        }
        }
        else
        {
            cout<<"\nall the rooms in this category are booked please select another";
        }
        }
    }
    public:void table_booking_in_restaurent()
    {
        int n=1;
        cout<<"\n you had alloted table no : "<<n;
        n++;
        cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
        cout<<"\n__________________________________________\n";
    }
    public:void meeting_hall_bookings()
    {
        cout<<"\n meeting hall 1 had booked for 3hrs from 10:00 am IST";
        cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
        cout<<"\n__________________________________________\n";
    }
    public:void Private_chef_and_butler_service()
    {
        cout<<"\n you had alloted with a private chef\nname:jhon\ntype:multi cusine\ncharge:5000RS per meal";
        cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
        cout<<"\n__________________________________________\n";
    }
    public:void Maid_Service()
    {
        int rno;
        cout<<"please provide your room no:";
        cin>>rno;
        cout<<"\n maid services will be available within 5 min to your requested room-"<<rno;
        cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
        cout<<"\n__________________________________________\n";
    }
    public:void In_villa_dining()
    {
        cout<<"\n In villa dining will be arranged for you";
        cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
        cout<<"\n__________________________________________\n";
    }
    public:void queiries_and_complaints()
    {
        cout<<"\n For queiries and complaints contact:1400-6382-9421";
        cout<<"\n*****THANK YOU HAVE A NICE DAY*****";
        cout<<"\n__________________________________________\n";
    }
    public:void biling()
    {
        cout<<"\n PLEASE CONTACT RICEPTION FOR BILLING";
        cout<<"\n*****THANK YOU VISIT US AGAIN*****";
        cout<<"\n__________________________________________\n";
    }
};
int menu()
{
    int choice;
    cout<<"\n**********MENU***********";
    cout<<"\n\nBOOKINGS\n 0. instal \n1.available rooms 2.room booking\n 3.table booking in restaurent\n 4.meeting hall booking";
    cout<<"\n*************************";
    cout<<"\n\nSERVICES\n 5.Private_chef&butler_service\n 6.Maid_Service\n .7In_villa_dining\n 8.billing\n 9.queiries_and_complaints";
    cout<<"\n 10.EXIT";
    cout<<"\n*************************\n";
    cout<<"\nenter your choice";
    cin>>choice;
    cout<<"\n____________________________________________\n";
    return choice;
}
int main()
{
    cout<<"**********WELCOME TO HOTEL SHAZ***********\n";
    cout<<"__________________________________________\n";
    int ch;
    Hotelmanagement o;
    while(1)
    {
        ch=menu();
        switch(ch)
        {
        case 0:
            o.instal();
            break;
        case 1:
            o.available_rooms();
            break;
        case 2:
            o.room_booking();
            break;
        case 3:
            o.table_booking_in_restaurent();
            break;
        case 4:
            o.meeting_hall_bookings();
            break;
        case 5:
            o.Private_chef_and_butler_service();
            break;
        case 6:
            o.Maid_Service();
            break;
        case 7:
            o.In_villa_dining();
            break;
        case 8:
            o.biling();
            break;
        case 9:
            o.queiries_and_complaints();
            break;
        case 10:
            exit(0);
        }
        getch();
    }
}
