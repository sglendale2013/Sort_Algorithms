#include<iostream>
#include<deque>
#include<vector>
#include<cstdlib>
#include<time.h>
#include<Windows.h>
using namespace std;

//Prototypes
vector<int> rand_v();
vector<int> splice_v(vector<int>, int);
void heap_sort(vector<int>);
void build_max_heap(vector<int>);
void max_heapify(vector<int>, int);
int LEFT(int);
int RIGHT(int);

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
	v1 = splice_v(full_Vector, 1000);
	v2 = splice_v(full_Vector, 2000);
	v3 = splice_v(full_Vector, 3000);
	v4 = splice_v(full_Vector, 4000);
	v5 = splice_v(full_Vector, 5000);
	v6 = splice_v(full_Vector, 6000);
	v7 = splice_v(full_Vector, 7000);
	v8 = splice_v(full_Vector, 8000);
	v9 = splice_v(full_Vector, 9000);
	v10 = splice_v(full_Vector, 10000);
	v11 = splice_v(full_Vector, 11000);
	v12 = splice_v(full_Vector, 12000);
	v13 = splice_v(full_Vector, 13000);
	v14 = splice_v(full_Vector, 14000);
	v15 = splice_v(full_Vector, 15000);
	v16 = splice_v(full_Vector, 16000);
	v17 = splice_v(full_Vector, 17000);
	v18 = splice_v(full_Vector, 18000);
	v19 = splice_v(full_Vector, 19000);
	v20 = splice_v(full_Vector, 20000);

	//call to heap_sort()
	clock_t init1, final1;
	init1 = clock();
	heap_sort(v1);
	final1 = clock();
	Rt_1 = final1 - init1;

	clock_t init2, final2;
	init2 = clock();
	heap_sort(v2);
	final2 = clock();
	Rt_2 = final2 - init2;

	clock_t init3, final3;
	init3 = clock();
	heap_sort(v3);
	final3 = clock();
	Rt_3 = final3 - init3;
	
	clock_t init4, final4;
	init4 = clock();
	heap_sort(v4);
	final4 = clock();
	Rt_4 = final4 - init4;

	clock_t init5, final5;
	init5 = clock();
	heap_sort(v1);
	final5 = clock();
	Rt_5 = final5 - init5;

	clock_t init6, final6;
	init6 = clock();
	heap_sort(v6);
	final6 = clock();
	Rt_6 = final6 - init6;

	clock_t init7, final7;
	init7 = clock();
	heap_sort(v7);
	final7 = clock();
	Rt_7 = final7 - init7;

	clock_t init8, final8;
	init8 = clock();
	heap_sort(v8);
	final8 = clock();
	Rt_8 = final8 - init8;

	clock_t init9, final9;
	init9 = clock();
	heap_sort(v9);
	final9 = clock();
	Rt_9 = final9 - init9;

	clock_t init10, final10;
	init10 = clock();
	heap_sort(v10);
	final10 = clock();
	Rt_10 = final10 - init10;

	clock_t init11, final11;
	init11 = clock();
	heap_sort(v11);
	final11 = clock();
	Rt_11 = final11 - init11;

	clock_t init12, final12;
	init12 = clock();
	heap_sort(v12);
	final12 = clock();
	Rt_12 = final12 - init12;

	clock_t init13, final13;
	init13 = clock();
	heap_sort(v13);
	final13 = clock();
	Rt_13 = final13 - init13;

	clock_t init14, final14;
	init14 = clock();
	heap_sort(v14);
	final14 = clock();
	Rt_14 = final14 - init14;

	clock_t init15, final15;
	init15 = clock();
	heap_sort(v15);
	final15 = clock();
	Rt_15 = final15 - init15;

	clock_t init16, final16;
	init16 = clock();
	heap_sort(v16);
	final16 = clock();
	Rt_16 = final16 - init16;

	clock_t init17, final17;
	init17 = clock();
	heap_sort(v17);
	final17 = clock();
	Rt_17 = final17 - init17;

	clock_t init18, final18;
	init18 = clock();
	heap_sort(v18);
	final18 = clock();
	Rt_18 = final18 - init18;

	clock_t init19, final19;
	init19 = clock();
	heap_sort(v19);
	final19 = clock();
	Rt_19 = final19 - init19;

	clock_t init20, final20;
	init20 = clock();
	heap_sort(v20);
	final20 = clock();
	Rt_20 = final20 - init20;


	clock_t t_avg;
	t_avg = ((Rt_1 + Rt_2 + Rt_3 + Rt_4 + Rt_5 + Rt_6 + Rt_7 + Rt_8 + Rt_9 + Rt_10 + Rt_11 + Rt_12 + Rt_13 + Rt_14 + Rt_15 + Rt_16 + Rt_17 + Rt_18 + Rt_19 + Rt_20) / 20.000);

	for (int i = 0; i < v1.size(); i++)
	{
		cout <<"this is v1["<<i<<"] "<< v1[i] << endl;
	}
	cout<<  "This is Rt_1: " << Rt_1 << endl;
	cout << "This is Rt_2: " << Rt_2 << endl;
	cout << "This is Rt_3: " << Rt_3 << endl;
	cout << "This is Rt_4: " << Rt_4 << endl;
	cout << "This is Rt_5: " << Rt_5 << endl;
	cout << "This is Rt_6: " << Rt_6 << endl;
	cout << "This is Rt_7: " << Rt_7 << endl;
	cout << "This is Rt_8: " << Rt_8 << endl;
	cout << "This is Rt_9: " << Rt_9 << endl;
	cout << "This is Rt_10: " << Rt_10 << endl;
	cout << "This is Rt_11: " << Rt_11 << endl;
	cout << "This is Rt_12: " << Rt_12 << endl;
	cout << "This is Rt_13: " << Rt_13 << endl;
	cout << "This is Rt_14: " << Rt_14 << endl;
	cout << "This is Rt_15: " << Rt_15 << endl;
	cout << "This is Rt_16: " << Rt_16 << endl;
	cout << "This is Rt_17: " << Rt_17 << endl;
	cout << "This is Rt_18: " << Rt_18 << endl;
	cout << "This is Rt_19: " << Rt_19 << endl;
	cout << "This is Rt_20: " << Rt_20 << endl;

	cout << " t_avg " << t_avg << " miliseconds." << endl;

	//Merge Sort: put break point 



	return 0;
}


vector<int> rand_v()
{
	vector<int> orig_v;

	for (int i = 0; i < 20000; i++)
	{

		orig_v.push_back(rand());
		cout << orig_v[i] << endl;

	}

	return orig_v;
}

vector<int> splice_v(vector<int> full_v, int n_elements)
{
	vector<int> temp_v;

	for (int i = 0; i < n_elements; i++)
	{
		temp_v.push_back(full_v[i]);
	}

	return temp_v;
}

void heap_sort(vector<int> A)
{
	int exchange; 
	int n = A.size();
	build_max_heap(A);
	
for (int i = n-1; n > 2; n--) //changed this because an error occured when i=10; 10 is the size of the vector but
	{							//cannot be an index as no such value exists.
		exchange = A[i];	//error
		A[i] = A[A.size()-1];	//added "-1"
		A[A.size()-1] = A[i];
		A[A.size()-1] = A[A.size() - 2];
		max_heapify(A,1);
	}

}

void max_heapify(vector<int> A, int i)
{
	int n = A.size();
	int l = LEFT(i);
	int r = RIGHT(i);
	int largest;

	if (l < n && (A[l] > A[i]))
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if (r <= n && A[r] > A[largest])
	{
		largest = r;
	}
	if (largest != i)
	{
		int exchange;
		exchange = A[i];
		A[i] = A[largest];
		A[largest] = exchange;
		max_heapify(A, largest);
	}
	return;
}

void build_max_heap(vector<int> A)
{
	int n = A.size();
	
	for (int i = (floor(n / 2)); i > 1; i--)
	{
		max_heapify(A, i);

	}

	return;
}

int LEFT(int i)
{
	return (2*i);
}

int RIGHT(int i)
{
	return (2*i+1);
}