#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    float x,b,w,net;
    float out;
    cout<<"Enter value of X";
    cin>>x;
    cout<<"Enter value of bias";
    cin>>b;
    cout<<"Enter value of weight";
    cin>>w;
    net=(w*x+b);
    cout<<"******output******";
    cout<<"\nnet="<<net<<endl;
    if(net<0)
    {
        out=0;
    }
    else if((net>=0)&&(net<=1))
    {
        out=net;
    }
    else
    out=1;
    cout<<"Output="<<out;
    getch();
}