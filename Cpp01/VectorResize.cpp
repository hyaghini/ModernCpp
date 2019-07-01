#include <vector>
#include <string>

int main() {
	std::vector<std::string> vec;
	const int kIterNum = 100;

	vec.reserve(kIterNum);
	for(int i =0; i < kIterNum; ++i){
		vec.emplace_back("hello");
	}
}