//sum of the elements of array
/*
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    int sum=0;

    for(int i=0; i<n; i++)
    
        sum+=arr[i];
        return sum;
    
}

int main()
{
    int arr[]={3,4,5,6};
    int n=  sizeof(arr)/ sizeof(arr[0]);
    cout<<"sum is given as"<<sum(arr, n);
    return 0;
}
*/
//find the largest number
/*
#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int i;
    int max=arr[0];
     for (i=1;i<n;i++)
     if(arr[i]>max)
     max= arr[i];
     return max;
}

int main ()
{
 int arr[]={25,45,65,24,4,76};
 int n= sizeof(arr)/sizeof(arr[0]);
 cout<< "largest no. is:" <<largest(arr,n);
 return 0;
}*/
// C++ program to multiply two matrices
/*
#include <bits/stdc++.h>
using namespace std;

// Edit MACROs here, according to your Matrix Dimensions for
// mat1[R1][C1] and mat2[R2][C2]
#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 2 // number of columns in Matrix-2

void mulMat(int mat1[R1][C1], int mat2[R2][C2])
{
	int rslt[R1][C2];

	cout << "Multiplication of given two matrices is:\n";

	for (int i = 0; i < R1; i++) 
    {
		for (int j = 0; j < C2; j++) 
        {
			rslt[i][j] = 0;

			for (int k = 0; k < R2; k++)
            {
				rslt[i][j] += mat1[i][k] * mat2[k][j];
			}

			cout << rslt[i][j] << "\t";
		}

		cout << endl;
	}
}

// Driver code
int main()
{
	// R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
	// values in MACROs)
	int mat1[R1][C1] = { { 1, 1 },
						{ 2, 2 } };

	int mat2[R2][C2] = { { 1, 1 },
						{ 2, 2 } };

	if (C1 != R2) {
		cout << "The number of columns in Matrix-1 must "
				"be equal to the number of rows in "
				"Matrix-2"
			<< endl;
		cout << "Please update MACROs according to your "
				"array dimension in #define section"
			<< endl;

		exit(EXIT_FAILURE);
	}

	// Function call
	mulMat(mat1, mat2);

	return 0;
}
*/
// C++ program to print largest contiguous array sum

#include<bits/stdc++.h>
using namespace std;




