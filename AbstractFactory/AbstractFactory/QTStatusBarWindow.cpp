#include "QTStatusBarWindow.h"
#include <iostream>

QTStatusBarWindow::QTStatusBarWindow( size_t width, size_t height )
	: mWidth( width )
	, mHeight( height ) { }

QTStatusBarWindow::~QTStatusBarWindow() { }

void QTStatusBarWindow::setMessage( const std::string & message ) {
	mStatusMessage = message;
}

const std::string & QTStatusBarWindow::getMessage() {
	return mStatusMessage;
}

size_t QTStatusBarWindow::getWidth() {
	return mWidth;
}

size_t QTStatusBarWindow::getHeight() {
	return mWidth;
}

void QTStatusBarWindow::render() {
	std::cout << "\t" << "QTStatusBarWindow  of " << mWidth << " x " << mHeight << "\n";
	std::cout << "\t\t" << "Status Message: " << mStatusMessage << "\n";
}
