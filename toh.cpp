#include<iostream>
using namespace std;
int move(0);
void toh(int n,int f,int u,int t)
{ 
int move=move+1;
	if(n==1)
	{ cout<<"move from"<<"\t"<<f<<"\t"<<"to"<<"\t"<<t<<endl;
	}
	else
	{
		 toh(n-1,f, t, u);
		 cout<<"move from"<<"\t"<<f<<"\t"<<"to"<<u<<endl;
		 toh(n-1,u,f,t);
		
	}
	
}

int main()
{  int n,f,u,t;

   cout<<"enter no of discs";
   cin>>n;
   toh(n,1,2,3);
   cout<<"total no. of moves are"<<move;
   
   return 0;
   
	
}
