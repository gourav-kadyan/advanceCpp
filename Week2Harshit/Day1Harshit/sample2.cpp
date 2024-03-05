#include <iostream>
#include <functional> //support for functional programming

/*
    system which accept data values and "logic". This logic will be applied on every single data value recieved
    and corressponding output will be shown

    fn(data, logic)


*/

void square(int number)
{
    std::cout << "sq of num is : " << number * number << "\n";
}

void cube(int number)
{
    std::cout << "cube of num is : " << number * number * number << "\n";
}

// operationg --> is a higher order function
// why --> bcoz higer order function either accepts or return (or both ) another functions
void operation(int *arr, int size, void (*ptr)(int))
{ // it is c version
    for (int i = 0; i < size; i++)
    {
        (*ptr)(arr[i]);
    }
}

void Operation(int *arr, int size, std::function<void(int)> fn)
{ // it is cpp version
    for (int i = 0; i < size; i++)
    {
        fn(arr[i]);
    }
}

/*
  functional programming --> more flexible --> coz user give logic and variable --> and just use it and give output
  treating logic as a data
*/

int main()
{

    // fn pointer
    //  void (*ptr)(int) = square;
    //  void (*ptr2)(int) = cube;
    int arr[3] = {1, 2, 3};
    Operation(arr, 3, square);

    return 0;
}

/*

    Higher order function
    Anonymous function
    functional programming paradigm
    no state
    immutable data
    currying
    first-class function
*/

/*
    ability to create lamda function

    in cpp / c --> type matter --> always check signature of function
*/

/*
    it is c language code
*/