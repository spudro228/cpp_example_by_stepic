


#include <iostream>
#include "Array.cpp"
using namespace std;
int main(int argc, char **argv)
{
	 Array<int> *arr0 = new Array<int>();
    Array<int> *arr1 = new Array<int>(10,7);
    Array<float> *arr2 = new Array<float>(5,8.88f);
    Array<float> arr3 = Array<float>(*arr2);
    Array<float> arr4;
    arr4 = arr3;
    //my_arr1->~Array();
    //my_arr2->~Array();

    for (size_t i = 0; i < arr1->size(); i++)
        cout << "Value of " << i << " element is " << (*arr1)[i] << endl;

    cout<<endl;

    for (size_t i = 0; i < arr4.size(); i++)
        cout << "Value of " << i << " element is " << arr4[i] << endl;

	Array<int> *mem = new Array<int>(10,7);
	typedef Array<int> ttt;
	Array<ttt> *mem2 = new Array<ttt>(10, *mem);
	for (size_t i = 0; i < mem2->size(); i++){
		
       cout << "\nVAL of " << i << " element is " << mem2[i][i] << endl;
	}
	
	
	
	return 0;
}

