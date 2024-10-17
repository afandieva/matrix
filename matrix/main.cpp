#include <iostream>
#include "matrix.h"

int main()
{
	Matrix<int> m({
		{1,2},
		{4,5}
	});
	Matrix<int> m2({
		{8,2},
		{4,7}
	});
	/*Matrix<int> m2(3,4);
	std::cin >> m2;
	std::cout << m2;*/
	/*std::cout<<m.GetRows()<<"\n";
	std::cout<<m.GetColumns()<<"\n";*/
	Matrix<double> md(3,4);
	//int el=m[0][1];
	//m[1][1]=11;
    //md[0].resize(10);
    //std::cout << m;
    
    m+=m2;
    std::cout<< m;
    
    return 0;
}
