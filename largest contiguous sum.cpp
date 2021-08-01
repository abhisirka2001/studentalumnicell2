#include<iostream>

int subArraySum (int A[], int n) 
{
    int currentSum, maxSum;
    currentSum = maxSum = 0;
    for (int m=0; m<n; m++) 
    { 
        currentSum += A[m];
        if (currentSum > maxSum)
            maxSum = currentSum;
        else if (currentSum < 0)
            currentSum = 0;
    }
return maxSum;
}

int main()
{
    int* A;
    int n;
    std::cout<<"Please enter the value of n for n length array"<<std::endl;
    std::cin>>n;
    A = new int[n];
    std::cout<<"Please enter the value of array"<<std::endl;
    for (int m=0; m<n; m++) 
    { 
        std::cin>>A[m];
        std::cout<<std::endl;
    }

    std::cout<<"Max sum of subarray is "<<subArraySum(A,n)<<std::endl;
    return 0;
}
