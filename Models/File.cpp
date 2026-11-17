#include "File.h"

File::File(string name){
	this->name=name;
}

string File::getName(){
	return name;
}

void File::clear(){
	content.clear();
}

void File::append(string text){
	content.push_back(text);
}
void File::write(string text){
	content.clear();
	content.push_back(text);
}
string File::read(){
	string result;
	for (string text : content){
		result+=text;
	}
	return result;
}