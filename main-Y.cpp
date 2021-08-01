#include <bits/stdc++.h>

using namespace std;

class Myqueue{
    queue<char> q;
    queue<int> q2;
public:
    //Check string is palindrome or not
    bool palindrome(string s){
        stack<char> temp;
        for(int i = 0; i < s.length(); i++)
        {
            q.push(s[i]);
            temp.push(s[i]);
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(q.front() != temp.top())
                return false;
            q.pop();
            temp.pop();
        }
        return true;
        while(! q.empty())
            q.pop();
    }

    //First negative integer in every window of size k
    void negative_window(int arr[],int n,int k){
        cout<<n<<endl;
        bool b;
        for(int i = 0; i <= n - k; i++){
            b = false;
            for(int j = i; j < i + k; j++){
                if(arr[j] < 0){
                    q2.push(arr[j]);
                    b = true;
                    break;
                }
            }
            if(!b)
                q2.push(0);
        }
        while(!q2.empty()){
            cout<<q2.front()<<" ";
            q2.pop();
        }
    }
};

int main()
{
    Myqueue obj;


    int arr[] = {-8, 2, 3, -6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    obj.negative_window(arr,n,2);
}
