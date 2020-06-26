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
    node *newNode=new node;
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
{   node *newNode=new node;
   newNode -> data = v;
   newNode -> next = NULL;
   if(head == NULL)
   {
      newNode -> prev= NULL;
      head = newNode;
   }
   else
   {  node *temp = head;
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
void insert_specified(int item)  
{  node *ptr = new node;  
   node *temp;   
   int loc;   
   if(ptr == NULL)  
   {  
       cout<<"\nOVERFLOW";  
   }  
   else  
   {  
       cout<<"Enter the location\n";  
       cin>>loc;   
       temp=head;  
       for(int i=0;i<loc;i++)  
       {  
           temp = temp->next;   
       }  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       cout<<"Node Inserted at the desired position \n";  
   }  
}
void search_element(int data)
{
     node * temp = new node;
    temp = head;
    int pos = 0;
    int flag=0;
    while(temp != NULL)
    {
        if(temp -> data == data)   // Element is found
        {
            
            flag=1;//If found, print and exit
            break;
        
        }
        else
        {
            temp = temp ->next;         //If not found, traverse the list
            pos++;
        }
    }
    if(flag==1)
    {
        cout<<"\nThe element  is  found in the list";
    }
    else
    {
    cout<<"\nThe element  is not found in the list";
    } 
}
void deleteFromN(int position)
{
    node *current;
    current = head;
    for(int i=1; i<position && current!=NULL; i++)
    {
        current = current->next;
    }
    if(position == 0)
    {
       deleteBeginning();
    }
    else if(current != NULL)
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current; 
        cout<<"SUCCESSFULLY DELETED NODE FROM POSITION.\n";
    }
    else
    {
        cout<<"Invalid position!\n";
    }
}
void reverse()
{
    node *current = head;
    node *temp = NULL;
    while(current!=NULL)
    {
      temp = current->prev;   //swap the next and prev pointer
      current->prev = current->next;
      current->next = temp;
      current = current->prev;
    }
    temp->prev;
    cout<<"LIST REVERSED SUCCESSFULLY.\n";
}
 void display()  
{  
    node *ptr;  
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
{doublylist d;
 while(1)
 {      int n;
 	cout<<endl;
 	cout<<"enter you choice"<<endl;
 	cout<<"1. add to head"<<endl;
 	cout<<"2. add to end"<<endl;
 	cout<<"3. delete from head"<<endl;
        cout<<"4. delete from end"<<endl;
 	cout<<"5. display"<<endl;
 	cout<<"6. insert  at desired position"<<endl;
        cout<<"7. search  in doubly linked list"<<endl;
        cout<<"8. delete from desired position"<<endl;
        cout<<"9. reverse"<<endl;
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
      int newvalue;
      cout<<"enter value for desired position\n";
      cin>>newvalue;
      d.insert_specified(newvalue);
      break;
      case 7:
      int newvalue1;
      cout<<"enter value for searching position\n";
      cin>>newvalue1;
      d.search_element(newvalue1);
      break;
      case 8:
      int newvalue2;
      cout<<"enter position desired for deletion \n";
      cin>>newvalue2;
      d.deleteFromN(newvalue2);
      break;
      case 9:
      d.reverse();
      break;
      default:
      cout<<"exit successfull";}}
}
