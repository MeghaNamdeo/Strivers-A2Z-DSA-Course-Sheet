class Heap {
public:
    int arr[101];
    int size;

    Heap() {
        size = 0;
    }

    int deleteRoot() {
        int ans = arr[1]; // Step 1: Replace root node value with last node
        arr[1] = arr[size];
        size--;

        // Place root node's data in its correct position
        int index = 1;
        while (index * 2 <= size) {
            int left = index * 2;
            int right = index * 2 + 1;
            int largest = index;

            if (arr[left] > arr[largest]) {
                largest = left;
            }

            if (right <= size && arr[right] > arr[largest]) {
                largest = right;
            }

            if (largest == index) {
                // Value is at correct position
                break;
            } else {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }

        return ans;
    }
};
/*
 tc : O(log n)
 sc : O(1)*/