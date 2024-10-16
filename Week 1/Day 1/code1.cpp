//C++ Print the elements of the new array after copying.

int main() {
    int n;
    cin >> n;
    
    int arr[n], cop[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cop[i] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        cout << cop[i] << " ";
    }
    cout << endl;

    return 0;
}
