#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
struct node
{
    char data;
    node *next;
}*p = NULL, *top = NULL, *temp = NULL,*temp2;


void push(char x)
{
    p = new node;
    p->data = x;
    p->next = NULL;
    if (top == NULL)
    {
        top = p;
    }
    else
    {
        temp = top;
        top = p;
        p->next = temp;
    }
}
char pop()
{
    if (top == NULL)
    {
        cout<<"underflow!!";
    }
    else
    {
       temp2  = top;
        top = top->next;
        return(temp2->data);
      delete temp2;
    }
}  
int main()
{
    int i;
    char c[30], a, y,f, z;
    cout<<"enter the expression:\n";
    cin>>c;
    for (i = 0; i < strlen(c); i++)
    {
	if ((c[i] == '(') || (c[i] == '{') || (c[i] == '[')|| (c[i]=='<'))
	{
            push(c[i]);
	}
	else 
	{
	    switch(c[i])
	    {
		case ')': a = pop(); 
		         if ((a == '{') || (a == '[')|| (z == '<'))
			     {cout<<"invalid expr!!";
				 getch();
		         	}
			     break;
		case '}': y = pop();
			     if ((y == '[') || (y == '(')|| (z == '<'))
			    { cout<<"invalid expr!!";
				 getch();
		     	}
			      break;
		case ']': z = pop();
		         if ((z == '{') || (z == '(')|| (z == '<'))
	              { cout<<"invalid expr!!";
				   getch();
			      }
			      break;
	    case '>' : f=pop();
	               if ((f == '(') || (f == '{')|| (a == '['))
	                {  cout<<"invalid expr!!";
				      getch();
			         }
			      break;
	    }
	}
    }
    if (top == NULL)
    {
	cout<<"balanced expression";
    }
    else
    {
	cout<<"string is not valid";
    }
    getch();
    return 0;
}
