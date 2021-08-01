#include <bits/stdc++.h>
#define MAX_COUNT 10000
using namespace std;

vector<string> vec;

void generatePrintBinary(int n)
{
    queue<string> q;
    q.push("1");
    while (n--) {

        string s1 = q.front();
        q.pop();
        cout << s1 << "\n";

        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

void generateNumbersUtil()
{
    queue<string> q;

    q.push("9");
    for (int count = MAX_COUNT; count > 0; count--)
    {
        string s1 = q.front();
        q.pop();
        vec.push_back(s1);

        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}

string findSmallestMultiple(int n)
{
    for (int i = 0; i < vec.size(); i++)
        if (stoi(vec[i])%n == 0)
            return vec[i];
}



int main()
{
	return 0;
}
