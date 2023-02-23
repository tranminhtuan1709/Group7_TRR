#include<bits/stdc++.h>
using namespace std;

int findPosition(int nums[], int key, int left, int right) {
	while (left <= right) {
        int mid = left + (right - left) / 2;

        if (key < nums[mid]) {
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }


    return left;
}

void binaryInsertionSort(int nums[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = nums[i];

        int insertedPosition = findPosition(nums, key, 0, i-1);

        for (int j = i - 1; j >= insertedPosition; --j) {
            nums[j + 1] = nums[j];

        }

        nums[insertedPosition] = key;
    }
}

int main(){
	cout<<"Nhap so phan tu: \n";
	int n;
	cin >> n;
	int nums[n];
	cout<<"Nhap day so: \n";
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout<<"Array: ";
	for(int i = 0; i < n; i++) {
		cout << nums[i]<<" ";
	}
	cout<<endl;

	binaryInsertionSort(nums, n);
	cout<<"Sorted Array: ";
	for(int i = 0; i < n; i++) {
		cout << nums[i]<<" ";
	}
	return 0;

}
