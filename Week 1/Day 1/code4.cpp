//C++ write a program to separate the even and odd elements into two separate arrays 
//while maintaining their original order.

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> even, odd;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }
    
    for (int i = 0; i < even.size(); i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < odd.size(); i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}
