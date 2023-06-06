
#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &vec, int s, int e)
{
    int inversion_count = 0;
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int main_index = s; // used when merge the 2 array and write to the vector

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = vec[main_index++];
    }
    // main_index = mid +1;//do check this
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = vec[main_index++];
    }

    int index1 = 0;
    int index2 = 0;
    main_index = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            vec[main_index++] = arr1[index1++];
        }
        else
        {
            vec[main_index++] = arr2[index2++];
            inversion_count = inversion_count + (mid - index1);
        }
    }
    while (index1 < len1)
    {
        vec[main_index++] = arr1[index1++];
    }
    while (index2 < len2)
    {
        vec[main_index++] = arr2[index2++];
    }
    delete[] arr1;
    delete[] arr2;
    return inversion_count;
}

int mergeSort(vector<int> &vec, int s, int e)
{
    int inv_c = 0;
    if (s >= e)
    { // s == e then vec didvided in 1 that is considered as sorted.
        return 0;
    }
    // cout <<"Hi"<<endl;
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        // sort 1st part of vec
        inv_c += mergeSort(vec, s, mid);

        // sort 2nd part of vec
        inv_c += mergeSort(vec, mid + 1, e);

        // mergre them
        inv_c += merge(vec, s, e);
    }

    return inv_c;
}

int main()
{

    vector<int> vec = {5, 4, 3, 2, 1};
    cout << "inversion count : " << mergeSort(vec, 0, vec.size() - 1) << endl;
    ;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}