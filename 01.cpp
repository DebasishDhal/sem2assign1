#include<iostream>
using namespace std;
//creating class node
	class node{
		public:
			int number;
			node *next;
			//using default constructor
			node(){
				number=0;
				next=NULL;
			}
		};
//creating linkedlist
	class linked
		{
		public:
			node *head;
			node *tail;
			int n;
		//using default constructors;
		linked(){
			head=NULL;
			tail=NULL;
			n=0;
			}
//functions for the class
void insert(int data);
void insertAt(int pos,int data);
void deletex();
void deleteAt(int pos);
void count();
void display();
};
//defining insert function
	void linked::insert(int data)
		{
		node *temp=new node;
	//checking conditions if intially nodes are present are not
	// if no nodes are present initially
			if(head==NULL)
			{
			temp->number=data;
			head=temp;
			tail=temp;
			n++;
			}
	//if nodes are present initially
		else
			{
			temp->number=data;
			tail->next=temp;
			tail=temp;
			n++;
			}
		}
//defining insertAt function
	void linked::insertAt(int pos,int data)
		{
		node *temp=new node;
	//instructions for different value of pos
		if(pos==0)
		{
			cout<<"insertion is not permissible"<<endl;
		}
		else if(pos>n+1)
			cout<<"Linked list does not have that many elements"<<endl;
		else if(pos==n+1)
			{
				insert(data);
			}
		else
			{
				node *temp=new node;
				node *slider=head;
			//sliding the slider to its position
				for(int k=1;k<=pos-1;pos++)
					{
						slider=slider->next;
					}
				temp->number=data;
				temp->next=slider->next;
				slider->next=temp;
				n++;
			}
		}
//defining deletex function
	void linked::deletex()
		{
			if(n==0)
			cout<<"Linked list does not have any elements to delete"<<endl;
			else 
			{
			node *slider1;
			slider1=head;
			for(int count1=1;count1<n-1;count1++)
				{
					slider1=slider1->next;
				}
				slider1->next=NULL;
				tail=slider1;
				n--;
			}
		}
//defining deleteAt function
	void linked::deleteAt(int pos)
		{
		//Different instructions for different values of pos
		if (pos==n)
			{
				deletex();
			}	
		else if (pos==0)
			{
				head=head->next;
				n--;
			}
		else
			{
				node *slider2=head;
				for(int z=1;z<pos-1;z++)
				{
					slider2=slider2->next;
				}
				slider2->next=(slider2->next)->next;
				(slider2->next)->next=NULL;
			}
		}
//defining count
	void linked::count()
		{
		node *slider3;
		slider3=head;
		int count3=1;
		if (head==NULL)
		count3=0;
		else
		{
		//moving the slider	
			while(slider3->next!=NULL)
			{
			slider3=slider3->next;
			count3++;
			}
		}
		//printing the no.of elements
			cout<<"The linked list has "<<count3<<" elements"<<endl;
		}
//defining display function
	void linked::display()
		{
		node *slider4;
		slider4=head;
		for(int count5=1;count5<=n;count5++)
		{
		cout<<slider4->number;
		cout<<"->";
		slider4=slider4->next;
		}
		cout<<"->NULL"<<endl;
		}
//int main
	int main()
		{
		linked list1;
		list1.insert(78);
		list1.insert(90);
		list1.insert(23);
		list1.insert(67);
		list1.insert(79);
		list1.insert(123);
		list1.insertAt(2,56);
	return 0;
}
