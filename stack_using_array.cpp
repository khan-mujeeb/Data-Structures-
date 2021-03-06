#include<iostream>
using namespace std;
class stack{
	int top;
	int arr[5];
	public:
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
				arr[i]=0;
		}
		
		bool isempty()
		{
			if(top==-1)
				return true;
			else 
				return false;
		}
		
		bool isfull()
		{
			if(top==4)
				return true;
			else 
				return false;
		}
		
		void push(int val)
		{
			if(!isfull())
			{
				top++;
				arr[top]=val;
				cout<<endl<<val<<" is pushed ";
			}
			else
				cout<<endl<<"stack is full";
		}
		
		int pop()
		{
			if(!isempty())
			{
				int popvalue=arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
			else
				cout<<endl<<"stack underflow";
				return 0;
		}
		
		int count()
		{
			return top+1;
		}
		
		int peek()
		{
			if(isempty())
				cout<<endl<<"stack underflow";
			else
				return arr[top];
		}
		
		void change(int pos, int val) 
		{
    		arr[pos] = val;
    		cout << "value changed at location " << pos << endl;
  		}

  		void display() 
		{
    		cout << "All values in the Stack are " << endl;
    		for (int i = 4; i >= 0; i--) 
      			cout << arr[i] << endl; 
		}
};

int main() {
  stack s1;
  int option, postion, value;

  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;

    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isempty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isfull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;
    case 5:
      cout << "Peek Function Called - Value at position " << postion << " is " << s1.peek() << endl;
      break;
    case 6:
      cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}