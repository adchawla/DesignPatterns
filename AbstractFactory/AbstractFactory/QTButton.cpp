#include "QTButton.h"
#include <iostream>


QTButton::QTButton( const std::string & title ) 
	: mTitle(title) { }


QTButton::~QTButton() { }

void QTButton::setTitle( const std::string & title ) {
	mTitle = title;
}

void QTButton::render() {
	std::cout << "\t\tQTButton with title = " << mTitle << "\n";
}
