#include<iostream.h>
#include<conio.h>
class greatest
{  int  a,b,c;
    public:
    void input()
    {   cout<<"enter three number"<<endl;
	cin>>a>>b>>c;
    }

    void output()
    {
      if(a>b&&a>c)
      cout<<"greatest="<<a;
      else if(b>c)
      cout<<"greatest="<<b;
      else
      cout<<"greatest="<<c;
      }

 };

 int main()
 {   greatest obj;
     clrscr();
     obj.input();
     obj.output();
     getch();
     return 0;
 }