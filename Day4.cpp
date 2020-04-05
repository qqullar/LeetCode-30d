#include <iostream>
#include <vector>



void moveZeroes(std::vector<int>& nums) {
        size_t s = nums.size();
        for(size_t i = 0, j = 1; j < s; ++j) {
            if(nums[i] == 0 && nums[j] != 0) {
                nums[i++] = nums[j];
                nums[j] = 0;
        } else if(nums[i] != 0) i++;
    }
}

void test() {
	std::vector<int> t = {1,3,0,0,0,5,6,7,0,0,0,8,0 };
	moveZeroes(t);
	for(int &i : t)
		std::cout << i << " ";
}

int main() { 
	test();
	return 0;
}
