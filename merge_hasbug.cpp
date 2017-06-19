#include<iostream>
#include<vector>
#include<cstdlib>
#include<time.h>
#include<Windows.h>
#include <math.h> 
using namespace std;

//Prototypes
vector<int> rand_v();
vector<int> part_of_vector(vector<int>, int);
void merge_sort(vector<int>, int, int);
void merge(vector<int>, int, int, int);


int main()
{

	//INSERTION SORT

	//Running times
	clock_t Rt_1, Rt_2, Rt_3, Rt_4, Rt_5, Rt_6, Rt_7, Rt_8, Rt_9, Rt_10, Rt_11, Rt_12, Rt_13, Rt_14, Rt_15, Rt_16, Rt_17, Rt_18, Rt_19, Rt_20;
	//Vectors for analysis
	vector<int> v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20;

	//call function to create vector of random value size 20,000
	vector<int> full_Vector;
	full_Vector = rand_v();

	//call function to store first n elements of vector into 10 different vectors (m=10 for assignment)
	v1 = part_of_vector(full_Vector, 10);


	//call to merge sort

	clock_t init1, final1; 

	init1 = clock();
	merge_sort(v1, 0, v1.size());
	final1 = clock();
	Rt_1 = final1 - init1;


	return 0;
}


vector<int> rand_v()
{
	vector<int> orig_v;

	for (int i = 0; i < 50; i++)
	{

		orig_v.push_back(rand());
		cout << orig_v[i] << endl;

	}

	return orig_v;
}

void merge_sort(vector<int> A, int p, int r)
{
	int q;

	if (p < r)
	{
		q = floor((p + r) / 2);
		merge_sort(A, p, q);
		merge_sort(A, (q + 1), r);
		merge(A, p, q, r);
	}
	return;

}

void merge(vector<int> A, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	vector<double> L, R;
	int i, j;

	//Let L[1....n1 + 1] and R[1...n2 + 2] be new vectors
	for (i = 1; i < n1; i++)
	{
		L[i] = A[p + i - 1];
	}
	for (j = 1; j < n2; j++)
	{
		R[j] = A[q + j];
	}

	L[n1 + 1] = numeric_limits<double>::infinity();
	R[n2 + 1] = numeric_limits<double>::infinity();
	i = 0;
	j = 0;

	for (int k = p; k < r; k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i = i + 1;
		}
		else
		{
			A[k] = R[j];
			j = j + 1;
		}
	}



	return;
}

vector<int> part_of_vector(vector<int> full_v, int n_elements)
{
	vector<int> temp_v;

	for (int i = 0; i < n_elements; i++)
	{
		temp_v.push_back(full_v[i]);
	}

	return temp_v;
}

