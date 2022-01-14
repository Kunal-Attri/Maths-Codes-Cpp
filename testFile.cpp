#include<iostream>
using namespace std;

class Array 
{
  int n, size, temp;
  int a[1];
  public:
  
  Array () 
  {
    cout << "Enter Initial size of array: ";
    cin >> size;
    int a[size];
    int n = 0;
  }

  int insert_beg () 
  {
    cout << "No. of elements you want to insert: ";
    cin >> temp;
    for (int i = 0; i < temp; i++) {
      cout << "Element at index " << i << ": ";
      cin >> a[i];
      n = temp - 1;
    }
    cout << temp << " elements inserted\n\n";
    return 0;
  }

  int insert_pos ()
  {
    cout << "Index of new element: ";
    cin >> temp;
    for (int i = n; i >= temp; i--)
    {
      a[i+1] = a[i];
    }
    cout << "New element: ";
    cin >> a[temp];
    n++;
    cout << a[temp] << " inserted at index " << temp << endl << endl;
    return 0; 
  }

  int del ()
  {
    cout << "Index of element to be deleted: ";
    cin >> temp;
    for (int i = temp; i < n; i++)
    {
      a[i] = a[i+1];
    }
    n--;
    cout << "Element at index " << temp << " deleted\n\n";
    return 0;
  }

  int update ()
  {
    cout << "Position of element to be updated: ";
    cin >> temp;
    int x = a[temp];
    cout << "New element: ";
    cin >> a[temp];
    cout << "Element at index " << temp << " updated from " << x << " to " << a[temp] << endl << endl;
    return 0;
  }

  int print () {
    cout << "[";
    for (int i = 0; i <= n; i++)
    {
      cout << a[i];
      if (i != n)
      {
        cout << ", ";
      }
    }
    cout << "]\n\n";
    return 0;
  }
};


int main()
{
  bool run = true;
  Array a;
  int choice;
  while (run)
  {
    cout << "Operation you want to perform:-\n";
    cout << "1. Insert from beginning\n";
    cout << "2. Insert an element at a position\n";
    cout << "3. Delete an element\n";
    cout << "4. Update an element\n";
    cout << "5. Print array\n";
    cout << "6. Exit\n";
    cout << "Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      a.insert_beg();
      break;
    case 2:
      a.insert_pos();
      break;
    case 3:
      a.del();
      break;
    case 4:
      a.update();
      break;
    case 5:
      a.print();
      break;
    case 6:
      run = false;
      break;
    default:
      cout << "Invalid Input try again\n\n";
      break;
    }
  }
  return 0;
}