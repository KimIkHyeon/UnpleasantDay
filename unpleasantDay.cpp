#include <iostream>
#include <stack>

using namespace std;

#define MAXN ((int)8e4)

int N;
int H[MAXN + 10];

void InputData(){
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> H[i];
	}
}

int main(){
	long long ans = 0;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	InputData();//입력

	//여기서부터 작성
	stack<int> stk;
	
	for (int i = 0; i < N; i++) {
		while (!stk.empty() && stk.top() <= H[i]) {
			stk.pop();
		}
		ans += stk.size();		
		stk.push(H[i]);
	}

	cout << ans << "\n";//출력
	return 0;
}
