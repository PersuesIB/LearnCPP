#include<iostream>
using namespace std;
struct wifi{
    int addr;
    int getAddr();
    void setAddr(int x);
};
typedef struct wifi wifi;
int main()
{
        wifi x;
     int a = 10;
     x.setAddr(a);
     cout<<sizeof x;
     cout<<x.getAddr()<<endl;
    return 0;
}
int wifi::getAddr(){
    return this->addr;
}
void wifi::setAddr(int addr){
    this->addr = addr;


}