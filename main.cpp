#include <iostream>
#include <fstream>
#include <string>

template <typename type>
void tofile(const int num, std::string symbol, type a[])
{
    std::ofstream fout;
    //std::string path = "/Users/sofiabalcinova/Desktop/Коды С++/lab9/lab9/tofile.txt";
    //fout.open(path, std::ofstream::app);
    fout.open("tofile.txt",std::ofstream::app);
    for (int i=0; i<num; i++)
    {
        fout<<a[i];
        if (i<num-1)
            fout<<symbol;
    }
    fout<<std::endl;
    fout.close();
    
}

int main(int argc, const char * argv[]) {
    std::ofstream fout;
    fout.open("tofile.txt");
    fout.close();
    
    const int n1=6;
    int arr1[n1] = {1,2,3,4,5,6};
    
    const int n2=3;
    double arr2[n2] = {2.0001,44.789,21.01};
    
    const int n3=4;
    float arr3[n3] = {1.7, 21.7, 1.5};
    
    const int n4=2;
    char arr4[n4] = {'A', 'B'};
    
    std::string symbol;
    std::cout<<"Enter something to split elements: ";
    std::cin >> symbol;
    
    tofile(n1, symbol, arr1);
    tofile(n2, symbol, arr2);
    tofile(n3, symbol, arr3);
    tofile(n4, symbol, arr4);

    return 0;
}
