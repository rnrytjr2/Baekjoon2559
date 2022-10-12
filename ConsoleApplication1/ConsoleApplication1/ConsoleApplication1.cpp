// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <climits>
using namespace std;
int N, K;
int values[100001];
int answer=INT_MIN;
int main()
{
    cin >> N>> K;
    for (int i = 1; i <= N; i++)
    {
        int value;
        cin >> value;
        values[i] = values[i - 1] + value;
        if (i > K-1)
        {
            answer = max(answer, values[i] - values[i - K]);
        }
    }
    cout << answer;
}
