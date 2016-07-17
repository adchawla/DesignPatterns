#include "GTKButton.h"
#include <iostream>


GTKButton::GTKButton( const std::string & title ) 
	: mTitle(title) { }


GTKButton::~GTKButton() { }

void GTKButton::setTitle( const std::string & title ) {
	mTitle = title;
}

void GTKButton::render() {
	std::cout << "\t\tGTKButton with title = " << mTitle << "\n";
}
