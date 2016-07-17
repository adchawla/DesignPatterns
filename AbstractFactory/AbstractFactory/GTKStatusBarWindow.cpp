#include "GTKStatusBarWindow.h"
#include <iostream>

GTKStatusBarWindow::GTKStatusBarWindow( size_t width, size_t height )
	: mWidth( width )
	, mHeight( height ) { }

GTKStatusBarWindow::~GTKStatusBarWindow() { }

void GTKStatusBarWindow::setMessage( const std::string & message ) {
	mStatusMessage = message;
}

const std::string & GTKStatusBarWindow::getMessage() {
	return mStatusMessage;
}

size_t GTKStatusBarWindow::getWidth() {
	return mWidth;
}

size_t GTKStatusBarWindow::getHeight() {
	return mWidth;
}

void GTKStatusBarWindow::render() {
	std::cout << "\t" << "GTKStatusBarWindow  of " << mWidth << " x " << mHeight << "\n";
	std::cout << "\t\t" << "Status Message: " << mStatusMessage << "\n";
}
