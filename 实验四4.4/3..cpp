#include"1.cpp"
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0, j = 0, p = 0; i < size1 && j < size2; p++) {
		if (list1[i] <= list2[j]) {
			list3[p] = list1[i]; i++;
			if (i == size1 - 1) {
				for (int m = 1; m <= size1 + size2 - p; m++) {
					list3[p + m] = list2[j + m - 1];
				}
			}
		}
		else {
			list3[p] = list2[j]; j++;
			if (j == size1 - 1) {
				for (int m = 1; m <= size1 + size2 - p; m++) {
					list3[p + m] = list1[i + m - 1];
				}
			}
		}
	}
	cout << "The merged list is ";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
}