#include "Laptop.h"
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    CPU cpu("Intel i7", 8, 3800);
    SDD sdd("Samsung", 512, 2500);
    GraphicCard videoCard("NVIDIA GTX 1660", 6, 4200);
    Ram ram("DDR4", 16, 3400);

    Laptop laptop1("Asus ROG", "Silver", 1500, &cpu, &sdd, &ram, &videoCard);
    laptop1.Print();
    
    cout << "\n";

    /*Laptop laptopCopy = laptop1;
    laptopCopy.Print();*/

    cout << "\n";

    Laptop laptop2("MacBook Pro", "Space Gray", 2500, &cpu, &sdd, &ram, &videoCard);
    laptop2.Print();

    cout << "\n";

    Laptop laptopCopy = laptop2;
    laptopCopy.Print();

    cout << "\n";



    cout << "Total Laptops: " << Laptop::GetCount() << endl;

    return 0;
}