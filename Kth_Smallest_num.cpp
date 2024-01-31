#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
class kth_smallest_num{
private:
    int _k;
    priority_queue<int,vector<int>,greater<int>> pq;
public:
    kth_smallest_num(int k){
        this->_k = k;
	}
    int Processor(int new_num){
        if(pq.size() < _k){
            pq.push(new_num);
        }else if(new_num < pq.top()){
            pq.pop();
            pq.push(new_num);
        }
		return pq.top();
    }
};
int main() {
	kth_smallest_num kth_smallest_Num(4);
	int n;
	while(cin>>n)
	   cout<<kth_smallest_Num.Processor(n)<<endl;
	return 0;
}
