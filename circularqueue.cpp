#include<iostream>
#define max 15
using namespace std;
int main(){
    int queue[max], data;
    int a, rear=1, front=-1;
    char ch;
    do{
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>a;
        switch(a){
            case 1:
             if((front==rear+1)%max){
                cout<<"Queue is overflow";
             } else {
                cout<<"Enter data";
                cin>>data;
                rear=(rear+1)%max;
                if(front==-1){
                    front=0;
                }
                queue[rear]=data;
             }
             break;
            case 2:
             if (front==-1){
                cout<<"Queue is underflow";
             } else {
                data=queue[front];
                front=(front+1)%max;
                if(front==rear){
                     front=-1;
                     rear=-1;
                     if(front==-1){
                         cout<<"Queue is underflow";
                     }
                } else{
                    data=queue[front];
                    cout<<"Dequeued data is"<<data<<endl;
                    front=(front+1)%max;
                }
             }
             break;
             case 3:
              if(front==-1){
                cout<<"Queue is underflow";
              } else {
                for(int i=front;i<=rear;i++){
                    cout<<queue[i];
                }
              }
              break;
              case 4:
               exit(0);
               break;
              default:
               cout<<"Invalid input";
               break;
        }
        end:
        cout<<"Do you want to coninue(y/n)?";
        cin>>ch;
    } while(ch=='y');
    return 0;
}