
#include <vector>
#include <unordered_map>
#include <iostream>
#include <queue>
#include <utility>


 std::vector<int> topKFrequent(std::vector<int>& nums, int val){
	std::unordered_map<int,int> map;
	for(int num : nums){
		map[num]++;
	}

	std::vector<int> result;

	std::priority_queue<std::pair<int, int>> pq;

	for(auto it = map.begin(); it != map.end(); it++){
		pq.push(std::make_pair(it->second, it->first));
	}
	
	while(result.size() < val){
		result.push_back(pq.top().second);
		pq.pop();	
	}

	return result;
}


int main(){

	int a[] = {1,1,1,2,2,3,3,4,3};
	std::vector<int> v1(a, *(&a+1));
	
	std::vector<int> result = topKFrequent(v1, 2);

	for(int num : result){
		std:: cout << num ;
	}
	std:: cout <<"\n";

}
