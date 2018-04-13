 ///
 /// @file    stall.c
 /// @author  zhy(GitHub:Charles-joy)
 /// @date    2018-04-13 08:38:04
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class M_stack
{
public:
	M_stack()
	: _data(new int [10*sizeof(int)]() )
	{
		_top=-1;
		cout << "create stack" << endl;
	}

	void push(int data)
	{
		_top++;
		if(9!=_top)
		{
			_data[_top]=data;
		}
		else
		{
			cout << "stack full" << endl;
			return ;
		}
	}

	int pop()
	{
		--_top;
	}

	int top()
	{
		int data;
		data=_data[_top];
		return data;
	}
	
	bool empty()
	{
		if(-1==_top)
		{
			return true;
		}else{
		
			return false;
		}
	}

	bool full()
	{
		if(9==_top)
		{
			return true;
		}else{
			return false;
		}
	}
	
	void print()
	{
		cout << "push is:" << _data[_top] << endl;
	}

private:
	int _top;
	int * _data;
};

int main(void)
{
	M_stack s;
	s.push(10);
	s.print();
	s.push(12);
	s.print();
	s.push(14);
	s.print();

	cout << "top is :" << s.top() << endl;
	s.pop();

	cout << "after pop---->" << endl;
	cout << "top is :" << s.top() << endl;
	return 0;
}

