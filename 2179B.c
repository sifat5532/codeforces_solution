#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        scanf("%d", &a[0]);
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int totalSum = 0;
        
        for (int i = 0; i < n - 1; i++)
        {
            totalSum += abs(a[i] - a[i + 1]);
        }
        int min_sum = totalSum;

        if((totalSum-abs(a[0]-a[1]))<min_sum){
            min_sum = totalSum-abs(a[0]-a[1]);
        }
        
        for(int i = 1; i<n-1; i++){
            int temp_sum = totalSum-abs(a[i] - a[i-1])-abs(a[i] - a[i+1])+ abs(a[i-1]-a[i+1]);
            if(temp_sum < min_sum){
                min_sum = temp_sum;
            }
        }
        if((totalSum-abs(a[n-1]-a[n-2]))<min_sum){
            min_sum = totalSum-abs(a[n-1]-a[n-2]);
        }
        printf("%d\n", min_sum);
    }
    return 0;
}