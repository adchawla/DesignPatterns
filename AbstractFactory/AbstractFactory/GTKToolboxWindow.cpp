#include "GTKToolboxWindow.h"
#include <iostream>
#include "IButton.h"

GTKToolboxWindow::GTKToolboxWindow( size_t width, size_t height )
	: mWidth( width )
	, mHeight( height ) { }


GTKToolboxWindow::~GTKToolboxWindow() {
	for ( int i = mButtons.size() - 1; i >= 0; --i ) {
		IButton * button = mButtons[ i ];
		delete button;
	}
	mButtons.clear();
}

void GTKToolboxWindow::addButton( IButton * button, size_t index ) {
	if ( index < mButtons.size() ) {
		mButtons[ index ] = button;
	} else if ( index == mButtons.size() || index == -1 ) {
		mButtons.push_back( button );
	}
}

void GTKToolboxWindow::removeButton( size_t index ) {
	if ( index < mButtons.size() ) {
		mButtons.erase( mButtons.begin() + index );
	}
}

size_t GTKToolboxWindow::getWidth() {
	return mWidth;
}

size_t GTKToolboxWindow::getHeight() {
	return mHeight;
}

void GTKToolboxWindow::render() {
	std::cout<<"\t"<<"GTKToolboxWindow  of " << mWidth << " x " << mHeight << "\n";
	for ( auto button : mButtons ) {
		button->render();
	}
}
