#include <iostream>
using namespace std;
struct  node
{
	int data;
	node *next;
};
class singlelist
{
 private:
 	node *tail,*head;
 public:
 	singlelist()
 	{   head=NULL;
 		tail=NULL;
 	}
    void addtotail(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
	}else
	{
            tail->next = tmp;
            tail = tail->next;
        }
        cout<<"succesfully added to tail";
    }
  void addtohead(int val)
  {    node *new_node = new node;
      new_node->data = val;
      new_node->next = NULL;
      if (head == NULL)
      {
        head = new_node;
      } else
      {
        new_node->next = head;
        head= new_node;
      }
      cout<<"succesfully added to head";
    }
 void randominsert(int itemn)  
    {  
        node *ptr = new node;
        struct node *temp;  
        int loc;  
            cout<<"Enter the location";  
            cin>>loc; 
           
            ptr->data = itemn;  
            temp=head;  
            for(int i=0;i<loc;i++)  
            {   temp = temp->next;  
                if(temp == NULL)  
                {  
                    cout<<"\ncan't insert\n";  
                    return;  
                }  
            }  
            ptr ->next = temp ->next;   
            temp ->next = ptr; 
            cout<<"\nNode inserted at desired position"; 
              }  
  void begdelete()  
    {  
        node *ptr;  
        if(head == NULL)  
        {  
            cout<<"\nList is empty";  
        }  
        else   
        {  
            ptr = head;  
            head = ptr->next;  
            delete ptr;  
            cout<<"\n Node deleted from the begining ...";  
        }  
           } 
void end_delete()  
    {  
        struct node *ptr,*ptr1;  
        if(head == NULL)  
        {  
            cout<<"\nlist is empty";  
        }  
        else if(head -> next == NULL)  
        {  
            head = NULL;  
            delete head;  
            cout<<"\nOnly node of the list deleted ...";  
        }       
        else  
        {   ptr = head;   
            while(ptr->next != NULL)  
                {  
                    ptr1 = ptr;  
                    ptr = ptr ->next;  
                }  
                ptr1->next = NULL;  
                delete ptr;  
                cout<<"\n Deleted Node from the last ...";  
            }     
        }  
void search(int key)
{   
	struct node *search;
	search=head;
    while (search->next!= NULL)
    {
        if (search->data == key)
        {
            cout<<"element is found in list\n";
            return;
        }
        search = search->next;
    }
    cout<<"item not found in list\n";
}
void Delete(int anypos)
{    node* temp1 = head;
    if(anypos == 1){
        head = temp1->next;
        delete temp1;
        cout<<"succesfully deleted from desired positon in list\n"<<endl;
    }
    else
    {
    for(int i=0;i<anypos-2;i++)
    {
        temp1 = temp1->next;
    }
    node* temp2 = temp1->next; 
    temp1->next = temp2->next; 
    delete temp2;
    cout<<"succesfully deleted from desired positon in list\n"<<endl;
}
}
void reverse() {
      node *curNode = head ,*nxtNode;
      head = NULL;
    while (curNode != NULL) {
        nxtNode = curNode->next;
        curNode->next = head;
        head = curNode;
        curNode = nxtNode;
    }
}
void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data <<"->"<<" ";
            tmp = tmp->next;
        }
    }
};
int main()
{  singlelist l;
   int n;
	while(1)
	{   cout<<endl;
		cout<<"enter your choice"<<endl;
		cout<<"1. add to tail"<<endl;
		cout<<"2. add to head"<<endl;
        cout<<"3. add to desired position"<<endl;
        cout<<"4. delete from front/begin"<<endl;
        cout<<"5. delete from end/last "<<endl;
        cout<<"6. search in list  "<<endl;
        cout<<"7. delete from desired position  "<<endl;
		cout<<"8. display"<<endl;
		cout<<"9. reverse"<<endl;
		cin>>n;
		switch(n)
{    
             case 1:
			 int item;
			 cout<<"enter item to tail"<<endl;
			 cin>>item;
			 l.addtotail(item);
			 break;
             case 2:
			 int item1;
			 cout<<"enter item to tail"<<endl;
			 cin>>item1;
			 l.addtohead(item1);
			 break;
             case 3:
			 int iteminsert;
			 cout<<"enter item to desired position"<<endl;
			 cin>>iteminsert;
			 l.randominsert(iteminsert);
			 break;
             case 4:
			 l.begdelete();
			 break;
             case 5:
			l.end_delete();
			 break;
	     case 6:
			 int value;
			 cout<<"enter item you want to search"<<endl;
			 cin>>value;
			 l.search(value);
			 break;
	     case 7:
			 int delpos;
			 cout<<"enter position you want to delete"<<endl;
			 cin>>delpos;
			 l.Delete(delpos);
			 break;

	     case 8:
			 l.display();
			 break;

	     case 9:
			 l.reverse();
			 break;
			 default:
			 cout<<"nothing"<<endl;
		}
	}
}
