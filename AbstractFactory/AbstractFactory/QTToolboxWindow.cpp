#include "QTToolboxWindow.h"
#include <iostream>
#include "IButton.h"

QTToolboxWindow::QTToolboxWindow( size_t width, size_t height )
	: mWidth( width )
	, mHeight( height ) { }


QTToolboxWindow::~QTToolboxWindow() {
	for ( int i = mButtons.size() - 1; i >= 0; --i ) {
		IButton * button = mButtons[ i ];
		delete button;
	}
	mButtons.clear();
}

void QTToolboxWindow::addButton( IButton * button, size_t index ) {
	if ( index < mButtons.size() ) {
		mButtons[ index ] = button;
	} else if ( index == mButtons.size() || index == -1 ) {
		mButtons.push_back( button );
	}
}

void QTToolboxWindow::removeButton( size_t index ) {
	if ( index < mButtons.size() ) {
		mButtons.erase( mButtons.begin() + index );
	}
}

size_t QTToolboxWindow::getWidth() {
	return mWidth;
}

size_t QTToolboxWindow::getHeight() {
	return mHeight;
}

void QTToolboxWindow::render() {
	std::cout<<"\t"<<"QTToolboxWindow  of " << mWidth << " x " << mHeight << "\n";
	for ( auto button : mButtons ) {
		button->render();
	}
}
