   #include <iostream>
#include<math.h>

using namespace std;

int main()
{

  int ra, ca;
  cin>>ra>>ca;
 
  int**a=new int*[ra];
  
 for(int i=0;i<ra;i++)
 {
     a[i]=new int[ca];
 }

 double** b =new  double *[ra];
  for(int i=0;i<ra;i++)
 b[i]=new  double [ca];
  
 
 double** d =new  double *[ra];
  for(int i=0;i<ra;i++)
 d[i]=new  double [ca];
 
 double** c =new  double *[ra];
  for(int i=0;i<ra;i++)
 c[i]=new  double [ca];

  for (int i=0;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
        cin>>a[i][j];
  }
  
  for (int i=0;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
     b[i][j]=sin(a[i][j]);
  }
  
  
  
   for (int i=0;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
     d[i][j]=tan(a[i][j]);
  }
  
  for (int i=0;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
     c[i][j]=cos(a[i][j]);
  }
   for (int i=0
   ;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
       cout<<b[i][j]<<" ";
       cout<<endl;
  }
   cout<<endl;
     for (int i=0
   ;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
       cout<<c[i][j]<<" ";
       cout<<endl;
  }  
   cout<<endl;
    for (int i=0
   ;i<ra;i++)
  {
      for(int j=0;j<ca;j++)
       cout<<d[i][j]<<" ";
       cout<<endl;
  }  
  system("pause");
    return 0;
     
}
