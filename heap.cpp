#include<iostream>
using namespace std;

void insert_h (int a[],int n) {
    int prnt, child, tmp;
    for(int i = 0; i<n; i++) {
        cin >> a[i];
        child = i;

        while(child!= 0) {
            prnt = (child-1) / 2;
            if(a[prnt] < a[child]) {
                tmp = a[prnt];
                a[prnt] = a[child];
                a[child] = tmp;
            }
            child = prnt;
        }
    }
     cout << "reheap up: " << endl;
        for(int i = 0; i<n; i++)
        cout << a[i]<<" ";
        cout<< endl;
}

void delete_h (int a[], int n) {
    a[0] = a[n-1];
    int tmp, left, prnt, right;
    n = n-1;
    int i = 0;
    left = (2*i) + 1;
    right = (2*i) + 2;
    while(right<n) {
        if(a[left] > a[right]) {
            tmp = a[i];
            a[i] = a[left];
            a[left] = tmp;
            i = left;
        }
         else {
            tmp = a[i];
            a[i] = a[right];
            a[right] = tmp;
            i = right;
        }

        left = (2*i) + 1;
        right = (2*i) + 2;
    }
    cout << "reheap down: " << endl;
        for(int i=0; i<n; i++)
        cout << a[i] <<" ";
        cout<< endl;
}

int main() {
    cout<<"total heap number "<<endl;
    int n;
    cin>>n;
    cout<<"enter the num : "<<endl;
    int a[n+2];
    insert_h(a,n);
    delete_h (a,n);
}