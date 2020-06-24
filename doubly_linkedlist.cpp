#include<iostream>
using namespace std;

struct node
{
	int data;
	node *prev;
	node *next;

};
class doublylist
{
private:
	node *head,*tail;

public:
	doublylist()
	{
		head=NULL;
		tail=NULL;
	}

  void addtohead(int value)
  {
   
  struct node *newNode=new node;
   
    newNode -> data = value;
    newNode -> prev = NULL;
    if(head == NULL)
    {
       newNode -> next = NULL;
       head = newNode;
    }
    else
    {
       newNode -> next = head;
       head = newNode;
    }
    cout<<"\nInsertion successful at the head"<<endl;

  }

  void insertAtEnd(int v)
{
    node *newNode=new node;
  
   newNode -> data = v;
   newNode -> next = NULL;
   if(head == NULL)
   {
      newNode -> prev= NULL;
      head = newNode;
   }
   else
   {
       node *temp = head;
      while(temp -> next != NULL)
         temp = temp -> next;
      temp -> next = newNode;
      newNode -> prev = temp;
   }
   cout<<"\nInsertion success!!! at the end"<<endl;   
}


void deleteBeginning()
{
   if(head == NULL)
      cout<<"List is Empty!!! Deletion not possible!!!"<<endl;
   else
   {
      node *temp = head;
      if(temp->prev== temp->next)
      {
         head = NULL;
         delete temp;
      }
      else{
         head = temp->next;
         head->prev = NULL;
         delete temp;
      }
      cout<<"Deletion success at the front"<<endl;
   }
}


void deleteEnd()
{
   if(head == NULL)
      cout<<"List is Empty!!! Deletion not possible"<<endl;
   else
   {
      node *temp = head;
      if(temp->prev == temp->next)
      {
         head = NULL;
         delete temp;
      }
      else{
         while(temp->next != NULL)
            temp = temp->next;
         temp->prev ->next = NULL;
         delete temp;
      }
      cout<<"Deletion successful at the end "<<endl;
   }
}


void reverse()
{
	node *trav;
	trav = tail;
	while(trav != NULL)
	{
		cout<<trav->data<<endl;
		trav = trav->prev;
	}
	cout<<"successful reversed"<<endl;
}

 void display()  
{  
    struct node *ptr;  
    cout<<"printing values"<<endl;  
    ptr = head;  
    while(ptr != NULL)  
    {  
        cout<<ptr->data<<"->"<<" ";  
        ptr=ptr->next;  
    }  
}  


};



int main()
{
  doublylist d;
 while(1)
 {
 	int n;
 	cout<<endl;
 	cout<<"enter you choice"<<endl;
 	cout<<"1. add to head"<<endl;
 	cout<<"2. add to end"<<endl;
 	cout<<"3. delete from head"<<endl;
    cout<<"4. delete from end"<<endl;
 	cout<<"5. display"<<endl;
 	cout<<"6. reverse"<<endl;
    cin>>n;
    switch(n)
    {
    	case 1:
    	int m;
    	cout<<"enter item to add to head"<<endl;
    	cin>>m;
    	d.addtohead(m);
    	break;
        

    	case 2:
    	int item;
    	cout<<"enter item to add to head"<<endl;
    	cin>>item;
    	d.insertAtEnd(item);
    	break;
       
       case 3:
       d.deleteBeginning();
       break;
        case 4:
       d.deleteEnd();
       break;


    	case 5:
    	d.display();
    	break;

    	case 6:
    	d.reverse();
    	break;
    	default:
    	cout<<"exit successfull";


    }


 }

}