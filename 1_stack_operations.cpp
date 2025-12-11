#include <iostream>
using namespace std;

class Stack
{
    private:
    int stack[100];
    int top;
    int size;

    public:
    Stack(int s)
    {
        size=s;
        top=-1;
        top=-2;
    }

    void push(int items)
    {
        if (top==size-1)
        {
            cout<<"stack overflow!!!"<<endl;
        }
        else
        {
            top++;
            stack[top]=items;
            cout<<items<<"is pushed into the stack..";
        }
    }

    void pop()
    {
        if (top==-1)
        {
            cout<<"stack underflow!!!!";
        }
        else
        {
            cout<<stack[top]<<"is popped from the stack"<<endl;
            top--;
        }
    }

    void peek()
     {
        if (top==-1)
        {
            cout<<"stack underflow!!!!";
        }
        else
        {
            cout<<stack[top]<<"is the topmost value present in the stack"<<endl;

        }
     }

     void display()
     {
         if (top==-1)
        {
            cout<<"stack underflow!!!!";
        }
        else
        {
            cout<<"we are displaying the items present in the stack\n";
            for (int i=top;i>=0;i--)
            {
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }

     }

     void summation()
     {
        if (top==-1)
        {
            cout<<"stack underflow!!!!";
        }
        else
        {
            int sum=0;
            for(int i=top;i>=0;i--)
            {
                sum=sum+stack[i];
            }
            cout<<sum<<"is the total summation of the elements present in the stack";
        }
     }

     void even_odd()
     {
        if (top==-1)
        {
            cout<<"stack underflow!!!!";
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                if (stack[i]%2==0)
                {
                    cout<<stack[i]<<"is even number.\n";
                }
                else
                {
                    cout<<stack[i]<<"is odd number \n";
                }
            }

        }
     }

};

int main()
{
    int size;
    cout<<"Enter the size of the stack\n";
    cin>>size;
    Stack s(size);

    int choice,items;

    while(true)
    {
        cout<<"\nMENU: Stack Operations!!\n";
        cout<<"1. Push()\n";
        cout<<"2. Pop() \n";
        cout<<"3. Peek()\n";
        cout<<"4. Display() \n";
        cout<<"5. Summation \n";
        cout<<"6. Even_odd()\n";
        cout<<"7. Exit()\n";
        cin>>choice;



        switch(choice)
        {
            case 1:
            cout<<"Please enter the items to be pushed into the stack\n";
            cin>>items;
            s.push(items);
            break;



            case 2:
            s.pop();
            break;


            case 3:
            s.peek();
            break;

            case 4:
            s.display();
            break;

            case 5:
            s.summation();
            break;


            case 6:
            s.even_odd();
            break;


            case 7:
            cout<<"I am exiting from this while loop...\n";
            return 0;

        }  
    
    }

    return 0; 
}