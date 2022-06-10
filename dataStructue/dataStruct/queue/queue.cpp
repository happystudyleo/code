#include<iostream>
using namespace std;
int Q[100];
int Head = 0,Tail = 0,Number_of_Items = 0;

void Enqueue(int x)
{
    Q[Tail] = x;
    Tail = (Tail + 1)%100;
    Number_of_Items++;
}
int Dequeue()
{
    int e = Q[Head];
    Head = (Head+1)%100;
    Number_of_Items--;
    return e;
}
int main()
{
    int n;
    cout<<"input"<<endl;
    cin>>n;
    int j;
    for(int i = 1;i<=n;i++)
    {
        Enqueue(i);
    }
    for(int i = 1;i<=n-1;i++)
    {
        j = Dequeue();
        Dequeue();
        Enqueue(j);
    }
    int ans = Q[Head];
    cout<<ans<<endl;
}

