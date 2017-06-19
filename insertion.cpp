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
clock_t insertion_sort(vector<int>);

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
	v10 = splice_v(full_Vector,10000);
	v11 = splice_v(full_Vector,11000);
	v12 = splice_v(full_Vector,12000);
	v13 = splice_v(full_Vector,13000);
	v14 = splice_v(full_Vector,14000);
	v15 = splice_v(full_Vector,15000);
	v16 = splice_v(full_Vector,16000);
	v17 = splice_v(full_Vector,17000);
	v18 = splice_v(full_Vector,18000);
	v19 = splice_v(full_Vector,19000);
	v20 = splice_v(full_Vector,20000);

	//Run insertion sort for m=1000, 2000, 3000...20,000 and store value returned in cooresponding Rt
	Rt_1 = insertion_sort(v1);
	Rt_2 = insertion_sort(v2);
	Rt_3 = insertion_sort(v3);
	Rt_4 = insertion_sort(v4);
	Rt_5 = insertion_sort(v5);
	Rt_6 = insertion_sort(v6);
	Rt_7 = insertion_sort(v7);
	Rt_8 = insertion_sort(v8);
	Rt_9 = insertion_sort(v9);
	Rt_10 = insertion_sort(v10);
	Rt_11 = insertion_sort(v11);
	Rt_12 = insertion_sort(v12);
	Rt_13 = insertion_sort(v13);
	Rt_14 = insertion_sort(v14);
	Rt_15 = insertion_sort(v15);
	Rt_16 = insertion_sort(v16);
	Rt_17 = insertion_sort(v17);
	Rt_18 = insertion_sort(v18);
	Rt_19 = insertion_sort(v19);
	Rt_20 = insertion_sort(v20);

	//End of Insertion sort
	clock_t t_avg;
	t_avg = ((Rt_1 + Rt_2 + Rt_3 + Rt_4 + Rt_5 + Rt_6 + Rt_7 + Rt_8 + Rt_9 + Rt_10 + Rt_11 + Rt_12 + Rt_13 + Rt_14 + Rt_15 + Rt_16 + Rt_17 + Rt_18 + Rt_19 + Rt_20) / 20.000);

	cout << "This is Rt_1" << Rt_1 << endl;
	cout << "This is Rt_2" << Rt_2 << endl;
	cout << "This is Rt_3" << Rt_3 << endl;
	cout << "This is Rt_4" << Rt_4 << endl;
	cout << "This is Rt_5" << Rt_5 << endl;
	cout << "This is Rt_6" << Rt_6 << endl;
	cout << "This is Rt_7" << Rt_7 << endl;
	cout << "This is Rt_8" << Rt_8 << endl;
	cout << "This is Rt_9" << Rt_9 << endl;
	cout << "This is Rt_10" << Rt_10 << endl;
	cout << "This is Rt_11" << Rt_11 << endl;
	cout << "This is Rt_12" << Rt_12 << endl;
	cout << "This is Rt_13" << Rt_13 << endl;
	cout << "This is Rt_14" << Rt_14 << endl;
	cout << "This is Rt_15" << Rt_15 << endl;
	cout << "This is Rt_16" << Rt_16 << endl;
	cout << "This is Rt_17" << Rt_17 << endl;
	cout << "This is Rt_18" << Rt_18 << endl;
	cout << "This is Rt_19" << Rt_19 << endl;
	cout << "This is Rt_20" << Rt_20 << endl;

	cout << " t_avg " << t_avg <<" miliseconds."<< endl;

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

clock_t insertion_sort(vector<int> temp_v)
{

	int key = 0;
	int i = 0;
	clock_t init, final, Rt;
	 
	init = clock();
	for (int j = 1; j < temp_v.size();j++)//Assumption: j must increment.
	{
		key = temp_v[j];
		//Insert temp_v[j] in the sorted subvector temp_v[0,..j-1]
		i = j - 1;

		while (i >= 0 && temp_v[i] > key)
		{
			int temp = temp_v[i + 1];	//added this 
			temp_v[i + 1] = temp_v[i];
			temp_v[i] = temp;			//and this	
			i = i - 1;	
		}
		temp_v[i + 1] = key;
	}


	final = clock();
	Rt = final - init;
	cout << "this is Rt"<< Rt << endl;

	cout << "this is sorted version " << endl;
	for (int k = 0; k < temp_v.size(); k++)
	{
		cout << temp_v[k] << endl;
	}

	return Rt;
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