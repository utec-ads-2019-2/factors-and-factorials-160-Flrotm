#include<iostream>
using namespace std;

int main ()
{
    long n=0, i=0, max=0, count=0, j=0;
    long primos [] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    while (cin>>n) {
        if(n==0)break;
        int arr[25];
        cout<<n<<"! =";
        while (n != 1){
            i = n;j = 0;
            while (i > 1){
                count = 0;
                while (i %primos[j] == 0) {
                    i /=primos[j];
                    count++; }
                arr[j] += count;
                j++;
            }
            n--; }
        for (i=24;i >= 0;i--) {
            if (arr[i] != 0)
                break; }
        j = i;
        if (j >= 15)
            max = 0;
        else
            max=15;
        for (i = 0; i <= j; i++) {
            cout<<" "<<arr[i];
            max++;
            if (max== 15)
              cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
