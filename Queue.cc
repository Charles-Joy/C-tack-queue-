 ///
 /// @file    Queue.cc
 /// @author  zhy(GitHub:Charles-joy)
 /// @date    2018-04-13 08:38:04
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class M_queue
{
public:
	M_queue()
	: _data(new int [10*sizeof(int)]() )
	{
		_front=0;
		_tail=0;
		cout << "create queue" << endl;
	}

	void push(int data)
	{
		
		if(9!=_tail)
		{
			_data[_tail]=data;
			_tail++;
		}
		else
		{
			cout << "queue is full" << endl;
			return ;
		}
	}

	int pop()
	{
		_front++;
	}

	int front()
	{
		int q_front;
		q_front=_data[_front];
		return q_front;
	}
	
	int tail()
	{
		int q_tail;
		q_tail=_data[_tail-1];
		return q_tail;
	}
	bool empty()
	{
		if(_front ==_tail)
		{
			return true;
		}else{
		
			return false;
		}
	}

	bool full()
	{
		if(9==_tail)
		{
			return true;
		}else{
			return false;
		}
	}
	
	void print()
	{
		cout << "tail is:" << _data[_tail-1] << endl;
		cout << "front is:" << _data[_front] << endl;
	}

private:
	int _front;
	int _tail;
	int * _data;
};

int main(void)
{
	M_queue  q;
	q.push(10);
	q.print();
	q.push(12);
	q.print();
	q.push(14);
	q.print();

	q.pop();

	cout << "after pop---->" << endl;
	cout << "front is :" << q.front() << endl;
	cout << "tail is :" << q.tail() << endl;
	return 0;
}

