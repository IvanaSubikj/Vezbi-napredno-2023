#include <iostream>
using namespace std;
void merge(int array[], int left, int middle, int right)
{
int fh = middle - left + 1;
int sh = right - middle;
int t1[fh], t2[sh];
for (int m = 0; m < fh; m++)
t1[m] = array[left + m];
for (int n = 0; n < sh; n++)
t2[n] = array[middle + 1 + n];
int a = 0;
int b = 0;
int c = left;
while (a < fh && b < sh) {
if (t1[a] <= t2[b]) {
array[c] = t1[a];
a++;
}
else {
array[c] = t2[b];
b++;
}
c++;
}
while (a < fh) {
array[c] = t1[a];
a++;
c++;
}
while (b < sh) {
array[c] = t2[b];
b++;
c++;
}
}
void mergeSort(int array[],int left,int right){
if(left>=right){
return;
}
int middle =left+ (right-left)/2;
mergeSort(array,left,middle);
mergeSort(array,middle+1,right);
merge(array,left,middle,right);
}
void printArray(int Array[], int size)
{
for (int d = 0; d < size; d++)
cout << Array[d] << " ";
}
int main()
{
int array[] = {18, 9, 6, 19, 4, -4 };
int array_size = sizeof(array) / sizeof(array[0]);
cout << "The elements of the input array before sorting are: \n";
printArray(array, array_size);
mergeSort(array, 0, array_size - 1);
cout << "\nThe elements of the input array after sorting are: \n";
printArray(array, array_size);
return 0;
}
//Се дефинира функција за спојување на двете сортирани половини од дадената влезна низа, се дели на две половини потоа се создаваат две привремени низи, се копираат податоци од двете половини во две привремени низи. 
//Потоа се спојуваат привремените две низи во една, и потоа има сортирање на секоја од поделените низи со помош на функцијата mergeSort(). 
//И за крај останува функцијата да се печати на добиената низа и дефинирањето на главната низа.