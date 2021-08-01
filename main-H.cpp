#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> Queue)
{
    if(Queue.size()!=0)
    {
        while (!Queue.empty()) {
            cout << Queue.front() << " ";
            Queue.pop();
        }
    }
    else
        cout << "it's empty";

}
void reverseQueue(queue<int>& q)
{
    if (q.empty())
        return;

    int data = q.front();
    q.pop();
    reverseQueue(q);
    q.push(data);


}
void clearQeue(queue<int>& q)
{
    int size = q.size();
    for(int i = 0; i < size; i++)
    {
        q.pop();
    }
}

int main()
{
    queue<int> Queue;
    Queue.push(56);
    Queue.push(27);
    Queue.push(30);
    Queue.push(45);
    Queue.push(85);
    Queue.push(92);
    Queue.push(58);
    Queue.push(80);
    Queue.push(90);
    Queue.push(100);
    reverseQueue(Queue);
    printQueue(Queue);
    clearQeue(Queue);
    printQueue(Queue);
    return 0;
}
