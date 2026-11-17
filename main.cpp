#include "Models/File.h"

int main(){
	File file ("main.cpp");
    file.write("hi");
    file.append(" ho");
    cout<<file.getName()<<endl;
    cout<<file.read();
    return 0;
    

}