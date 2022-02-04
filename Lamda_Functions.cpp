//Lambda functions

/* Lambda functions are syntactic snippets for functional object
*We can take the advantages of lambda while creating threads as well.
*refer thread creation using lambda example.
*/
/*[] is the capture list, () the argument list and {} the function body.
*[=] capture variables using values
*[&] capture variables using reference
*/

#include <iostream>

using namespace std;

auto sum =  [] (int x, int y) {return x+y;};

auto sum_geneic = [] (auto x, auto y){return x+y;};
/*
*use of ‘auto’ in lambda parameter declaration only available with ‘-std=c++14’ or ‘-std=gnu++14’
*/
int main()
{
    //cout<<"Hello World";
    
    cout << "Sum = " << sum(4,5) << endl;//lambda function invoked
    
    cout << "Sum_generic = " << sum_geneic(4,5) << endl;//Generic lambda function invoked

    return 0;
}
