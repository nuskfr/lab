//linear linked list
#include<iostream>

using namespace std;
struct node{
    int data;
    node *link;
};

node *pfirst=NULL,*pnew,*plast,*ptemp,*pthis;
int count=0,loc;

void create(){
    pnew=new node;
    cout<<"Enter the data:";
    cin>>pnew->data;
    count++;
}
void insFbeg(){
    create();
    if(pfirst==NULL){
        pfirst=pnew;
        plast=pnew;
        pnew->link=pfirst;
        plast->link=pfirst;
    } else{
    	pnew->link=pfirst;
    	pfirst=pnew;
    	plast->link=pfirst;
    }
}
void insFend(){
    create();
    if(pfirst==NULL){
        pfirst=pnew;
        plast=pnew;
        pnew->link=pfirst;
        plast->link=pfirst;
    } else {
    	plast->link=pnew;
        plast=pnew;
        plast->link=pfirst;
    }
}
void delFbeg(){
    if(pfirst==NULL){
    	cout<<"list is empty";
	} else if (pfirst==plast){
		delete(pfirst);
		pfirst=NULL;
		plast=NULL;
	} else {
		ptemp=pfirst->link;
		delete(pfirst);
		pfirst=ptemp;
		plast->link=pfirst;
	}
}
void delFend(){
    if(pfirst==NULL){
    	cout<<"list is empty";
	} else if (pfirst==plast){
		delete(pfirst);
		pfirst=NULL;
		plast=NULL;
	} else {
		pthis=pfirst;
		while(pthis->link!=plast){
			pthis=pthis->link;
		}
		delete (plast);
		plast=pthis;
		plast->link=pfirst;
	}
}
void display(){
    if(pfirst==NULL){
        cout<<"List is empty";
    } else {
        pthis=pfirst;
        while(pthis->link!=pfirst){
            cout<<pthis->data<<endl;
            pthis=pthis->link;
        }
        cout<<pthis->data;
    }
}
int main(){
    int choice;
    char a;
    cout<<"\n1. Insert from beginning";
    cout<<"\n2. Insert from end";
    cout<<"\n3. Delete from beginning";
    cout<<"\n4. Delete from end";
    cout<<"\n5. Display the list";
    do{
    	cout<<"\n Enter your choice";
        cin>>choice;
        switch(choice){
            case 1:
             insFbeg();
             break;
            case 2:
             insFend();
             break;
            case 3:
             delFbeg();
             break;
            case 4:
             delFend();
             break;
            case 5:
             display();
             break;
            case 6:
            default:
             cout<<"Invalid choice";
             break;
        }
        end:
        cout<<"\nDo you want to continue(y/n)?";
        cin>>a;
    } while (a=='y'||a=='Y');
    return 0;
}
