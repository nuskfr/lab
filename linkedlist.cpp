#include<iostream>
using namespace std;
struct node{
    int info;
    struct node *next;
};
node *pfirst=NULL,*pnew,*pthis,*ptemp;
int count=0,loc;
void create(){
    pnew=new node;
    cout<<"Enter the data:";
    cin>>pnew->data;
    count++;
}
void insFbeg{
    create();
    pfirst=NULL;
    pnew->info=data;
    if(pfirst==NULL){
        pfirst=pnew;
        pnew->next=NULL;
    } else{
        pnew->next=pfirst;
        pfirst=pnew;
    }
}
void insFend{
    create();
    pfirst=NULL;
    pnew->next=NULL;
    if(pfirst==NULL){
        pfirst=pnew;
    } else {
        pthis=pfirst;
        while(pthis->next!=NULL){
            pthis=pthis->next;
        }
        pthis->next=pnew;
    }
}
void insBsppos{
    create();
    pnew->info=data;
    cout<<"Enter the specified location\n";
    cin>>loc;
    pthis=pfirst;
    for(i=1;i<loc-1;i++){
        pthis=pthis->next;
    }
    ptemp=pthis->next;
    pthis->next=pnew;
    pnew->next=ptemp;
}
void insAsppos{
    create();
    pnew->info=data;
    cout<<"Enter the specified location\n";
    cin>>loc;
    pthis=pfirst;
    for(i=1;i<loc;i++){
        pthis=pthis->next;
    }
    ptemp=pthis->next;
    pthis->next=pnew;
    pnew->next=ptemp;
}
void display(){
    if(pfirst===NULL){
        cout<<"List is empty";
    } else {
        pthis=first;
        while(pthis->link!=NULL){
            cout<<pthis->data<<endl;
            pthis=pthis->link;
        }
        cout<<pthis->data;
    }
}
int main(){
    int choice;
    char a;
    do{
        cout<<"\n1.Insert from beeginning";
        cout<<"\n2.Insert from end";
        cout<<"\nInsert before specified location";
        cout<<"\nInsert after specified location";
        cout<<"\nDisplay the list";
        cout<<"\nEnter your choice";
        cin>>choice;
        switch(choice){
            case 1:
             insFbeg();
             break;
            case 2:
             insFend();
             break;
            case 3:
             insBsppos();
             break;
            case 4:
             insAsppos();
             break;
            case 5:
             display();
             break;
            default:
             cout<<"Invalid choice";
             break;
        }
        end:
        cout<<"\nDo you want to continue(y/n)?";
        cin>>ch;
    } (ch=='y'||ch=='Y');
    return 0;
}