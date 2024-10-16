//C++ checks if the given array is sorted in ascending order

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool isSorted = true;
    
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            isSorted = false;
            break;
        }
    }
    
    if (isSorted) {
        cout << 1 << endl;  
    } else {
        cout << 0 << endl;  
    }
    
    return 0;
}
