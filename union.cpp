// C++ program to find union of two sorted arrays
/*
#include <bits/stdc++.h>
using namespace std;

//Function prints union of arr1[] and arr2[]
//m is the number of elements in arr1[]
//n is the number of elements in arr2[] 

void printUnion(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m  && j < n)
	{
		if (arr1[i] < arr2[j])
		{
			cout << arr1[i++] << " ";
		}

		else if (arr2[j] < arr1[i])
		{
			cout << arr2[j++] << " ";
		}

		else 
		{
			cout << arr2[j++] << " ";
			i++;
		}
	}

	// Print remaining elements of the larger array 
	while (i < m)
	{
		cout << arr1[i++] << " ";
	}

	while (j < n)
	{
		cout << arr2[j++] << " ";
	}
}

//Driver program to test above function 
int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	// Function calling
	printUnion(arr1, arr2, m, n);

	return 0;
}*/
// C++ program to find intersection of two sorted arrays
/*#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int arr2[],int m,int n)

{
    int i = 0, j = 0;
    while (i < m && j < n) 
	{
        if (i > 0 && arr1[i] == arr1[i - 1]) 
		{        //For Handling duplicates
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else //if arr1[i] == arr2[j] 
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
 
// Driver program to test above function 
int main()
{
    int arr1[] = { 1, 2, 2, 3, 4 };
    int arr2[] = { 2, 2, 4, 6, 7, 8 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    intersection(arr1, arr2, m, n);
 
    return 0;
}*/
//Find the Number Occurring Odd Number of Times
/*#include<bits/stdc++.h>
using namespace std;

// function to find the element occurring odd number of times

int getOdd(int arr[],int size)
{
	
	// Defining HashMap in C++
	unordered_map<int, int> hash;

	// Putting all elements into the HashMap
	for(int i = 0; i < size; i++)
	{
		hash[arr[i]]++;
	}
	// Iterate through HashMap to check an element occurring odd number of times and return it
	
	for(auto i : hash)
	{
		if(i.second % 2 != 0)
		{
			return i.first;
		}
	}
	return -1;
}

// Driver code
int main()
{
	int arr[] = { 2, 3, 5, 4, 5, 2, 4,
					3, 5, 2, 4, 4, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Function calling
	cout << getOdd(arr, n);

	return 0;
}*/
// C++ program to find the missing number
//using hashing
/*
#include <iostream>
using namespace std;

void missing(int arr[], int N)
{
    int temp[N + 1];
    for (int i = 0; i <= N; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        temp[arr[i] - 1] = 1;
    }

    int ans;
    for (int i = 0; i < N; i++)
    {
        if (temp[i] == 0)
        {
            ans = i + 1;
            break;
        }
    }

    cout << "The missing number is: " << ans << endl;
}

// Driver function
int main()
{
    int arr[] = {1, 4, 5, 6, 3, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    missing(arr, n);
}
*/
//using normal approach
/*
#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{
	// Given the range of elements are 1 more than the size of array
	
	int N = n + 1;

	int total = (N) * (N + 1) / 2;
	for (int i = 0; i < n; i++)
		total -= a[i];
	return total;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int miss = getMissingNo(arr, N);
	cout << miss;
	return 0;
}*/
//first element missing amazon microsoft facebook
/*#include <bits/stdc++.h>
using namespace std;

int SolutionfirstMissingPositive(vector<int> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] <= n) {
            int pos = A[i] - 1;
            if (A[pos] != A[i]) {
                swap(A[pos], A[i]);
                i--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] != i + 1) return (i + 1);
    }
    return n + 1;
}*/
//C++ code to seggregate even and odd function
/*
#include<bits/stdc++.h>
using namespace std;

void seggregate(vector<int>v)
{
	//using stable partition with lambda expression
	stable_partition(v.begin(), v.end(),
	[](auto a){return a%2==0;});

	for(int num : v)
	cout<<num<<"";
}
//driver code
int main()
{
	vector<int>v ={3,4,7,9,6,5,2,1};

	//call function
	seggregate(v);
	return 0;
}*/
#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
	int i = -1, j = n;
	while (true) {
		// Move i to the next negative element
		while (i < n - 1 && arr[++i] >= 0) {
		}
		// Move j to the next positive element
		while (j > 0 && arr[--j] < 0) {
		}

		// If i and j cross, we have rearranged all elements
		if (i >= j) {
			return;
		}

		// Swap the positive and negative elements
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		if ((i + 1) % 3 == 0) {
			cout << endl;
		}
	}
}

int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrange(arr, n);
	cout << "Array after rearranging: " << endl;
	printArray(arr, n);
	return 0;
}

// This code is contributed by sarojmcy2e
