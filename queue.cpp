#include <iostream>
using namespace std;

template <class T>
class Queue{
    private:
        int front,rear;
        int size;
        T *arr;
    public:
        Queue(int cap):size(cap){
            front = -1;
            rear = -1;
            arr = new T[size];
        }
        bool isFull(){
            return (rear+1%size)==front;
        }
        bool isEmpty(){
            return front == -1 && rear == -1;
        }
        bool enqueue(int elm){
            if(isFull()){
                return false;
            }else{
                if(isEmpty()){
                    front=rear=0;
                }else {

                    rear = (rear+1)%size;
                }
                arr[rear] = elm;
            }
            return true;
        }
        bool dequeue(){
            if(isEmpty()) return false;
            else {
                if(front==rear){
                    front=rear=-1;
                }else{
                    front = (front+1)%size;
                }
            }
            return true;
        }
        T frontPeek(){
            if(isEmpty()){
                cerr<<"QUEUE empty";
                exit(EXIT_FAILURE);
            }
            else{
                return arr[front];

            }
        }

};
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    Queue<int> stk(n);
    int ch = -1;
    while(ch!=5){
        cin>>ch;
        switch (ch)
        {
        case 1 : {
            int in;
            cin>>in;
            stk.enqueue(in);
            break;
        }
        case 2 : {
            cout<<stk.dequeue()<<"was removed from stack\n";
            break;
        }
        case 3 : {
            cout<<stk.frontPeek();
            break;
        }
   
        case 5 : {
            exit(0);
        }
            /* code */
        
        
        default:
            cerr<<"Invalid input\n";
            break;
        }
    }
    return 0;
}